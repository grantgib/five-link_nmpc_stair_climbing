function [t_next, x_next, u_sol, w_sol,ddq_sol] = Update_State_IO(dyn_info,ctrl_info,ref_info,constr_info,sol_info)
import casadi.*
%% Extract inputs
% dyn_info
f_NL = dyn_info.func.f_NL;
f_NL_ext = dyn_info.func.f_NL_ext;
f_w = dyn_info.func.wrench;
f_ddq = dyn_info.func.f_ddq;
u_IO = dyn_info.func.u_IO;
u_IO_NMPC = dyn_info.func.u_IO_NMPC;
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;
% check_ZD = dyn_info.ctrl.check_ZD;

% ctrl_info
DT = ctrl_info.DT;
IO_info = ctrl_info.IO_info;
IO_type = ctrl_info.IO_info.type;
iter = ctrl_info.iter;

% ref_info
s_func = ref_info.phase_based.s_func;
alpha_h = ref_info.phase_based.alpha_h;
alpha_dh = ref_info.phase_based.alpha_dh;
alpha_ddh = ref_info.phase_based.alpha_ddh;

% sol_info
t_current = sol_info.t_init;
x_init = sol_info.x_init;
u_mpc = sol_info.u_sol_mpc;
w_mpc = sol_info.w_sol_mpc;
q_ref_current = sol_info.X_REF(1:n_q,1);
dq_ref_current = sol_info.X_REF(n_q+1:end,1);
ddq_ref_current = sol_info.ddh_d(:,1);

% state/control variables
q_current = x_init(1:n_q);
dq_current = x_init(n_q+1:end);
x_current = [q_current; dq_current];

%% Compute I/O control input if zero dynamics are linear (no NMPC control)
% h_q = q_current(4:end);       % just for reference
% dh_q = dq_current(4:end);

Kp = dyn_info.ctrl.Kp;
Kd = dyn_info.ctrl.Kd;

if IO_type == "phase"
    s_current = full(s_func(q_current));
    h_d = bezier(alpha_h ,s_current);
    dh_d = bezier(alpha_dh ,s_current);
    ddh_d = bezier(alpha_ddh,s_current);
elseif IO_type == "time"
    h_d = q_ref_current(4:end);
    dh_d = dq_ref_current(4:end);
    ddh_d = ddq_ref_current;
end

if IO_info.linear
    u_sol = full(u_IO(q_current,dq_current,h_d,dh_d,ddh_d,Kp,Kd));
    w_sol = f_w(q_current,dq_current,u_sol);
    if (constr_info.grf.active && abs(full(w_sol(1)/w_sol(2))) > constr_info.grf.mu) || constr_info.grf.fail
        constr_info.grf.fail = 1;
        x_next = x_init;
        t_next = t_current + DT;
        ddq_sol = full(f_ddq(q_current,dq_current,u_sol,w_sol));
        return
    end
else % NMPC zero dynamics in I/O controller
    %     u_sol = full(u_IO_NMPC(q_current,dq_current,h_d,dh_d,ddh_d,u_mpc(:,1)));
    u_sol = full(u_IO_NMPC(q_current,dq_current,h_d,dh_d,ddh_d,Kp,Kd,u_mpc(:,1)));
    w_sol = w_mpc(:,1);
end

%% Check if torque is saturated
if constr_info.torque.sat && IO_info.linear
    u_max = constr_info.torque.sat*ones(n_u,1);
    u_min = -u_max;
    u_sol = min(max(u_sol,u_min),u_max);
end

w_sol = f_w(q_current,dq_current,u_sol);
ddq_sol = full(f_ddq(q_current,dq_current,u_sol,w_sol));
% if abs(full(w_check-w_sol)) > 0.1
%     error("Wrench computation not right")
% end

%% Check if External Force is applied
if ref_info.external_force && iter == 225
    f_nonlinear = f_NL_ext;
    w_ext = ref_info.external_force;
    disp("-> External Force of " + ref_info.external_force + " N applied at the Hip! (Iteration " + iter + ")");
else
    f_nonlinear = f_NL;
    w_ext = 0;
end

%% forward integrate
params_int = struct('f',f_nonlinear,...
    't_init',t_current,...
    'q_init',q_current,...
    'dq_init',dq_current,...
    'x_init',x_current,...
    'u',u_sol,...
    'w',w_sol,...
    'DT',DT,...
    'w_ext',w_ext); % w_ext is the optional external force
params_int.type = ctrl_info.int;
[x_next,t_next] = Forward_Integrate(params_int);

end