function [x_plus, w_impulse] = Impact_Map_Relabel(dyn_info,x_minus)
%% Extract Inputs
% dyn_info
n_q = dyn_info.dim.n_q;
f_D = dyn_info.func.f_D;

q_minus = x_minus(1:n_q);
dq_minus = x_minus(n_q+1:end);

%% Impact (pg. 56 of Feedback Control...)
x_plus = zeros(2*n_q,1);
x_plus(1:n_q) = q_minus;
D = full(f_D(q_minus));         % mass-inertia matrix
J_swing = full(dyn_info.func.f_J_swing(q_minus));

M = [D -J_swing'; J_swing zeros(2,2)];  
temp = M\[D*dq_minus;zeros(2,1)]; % the first seven element in temp is dq, last 2 is Fg]

x_plus(n_q+1:end) = temp(1:n_q);
w_plus = temp(n_q+1:end);

%% Relabel by switching leg joints
x_plus([4,5,6,7]) = x_plus([6,7,4,5]);
x_plus([11,12,13,14]) = x_plus([13,14,11,12]);

% %% Extract Inputs
% n_q = dyn_info.dim.n_q;
% q_minus = x_minus(1:n_q);
% dq_minus = x_minus(n_q+1:end);
% f_impact_relabel = dyn_info.func.f_impact_relabel;
% 
% %% Apply Impact
% x_plus = full(f_impact_relabel(q_minus,dq_minus));

%%
w_impulse = [0;0]; % not the real value but I don't need it so it's just a place holder

end