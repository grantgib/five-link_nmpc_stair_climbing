 % Right Stance Domain 
 %
 % Contact: Right Toe
function domain = RightStance_sim(model, info,load_path)
    % construct the right stance domain of RABBIT
    %
    % Parameters:
    % model: the right body model of ATLAS robot
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('RightStance');
    
    % Extract state variables
    x = domain.States.x;
    dx = domain.States.dx;
    
    % add contact
    right_sole = ToContactFrame(domain.ContactPoints.RightToe,...
        'PointContactWithFriction');
    fric_coef.mu = 0.6;
    % load symbolic expressions for contact (holonomic) constraints
    domain = addContact(domain,right_sole,fric_coef, [], load_path);
    
    % add event
    % height of non-stance foot (left toe)
    p_nsf = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
    p_stance = getCartesianPosition(domain, domain.ContactPoints.RightToe);
    hgt=SymVariable('hgt');
    heightConstr=(p_nsf(3)-p_stance(3))-hgt;
    fun_name=['u_hgt','RightStance'];
    f_heightconstr=SymFunction(fun_name,heightConstr,{domain.States.x},{[hgt]});
    h_nsf = UnilateralConstraint(domain,f_heightconstr,'leftFootHeight','x','AuxData',info.hgt);
    % often very simple, no need to load expression. Compute them directly
    domain = addEvent(domain, h_nsf);
   
    % phase variable: time
    t = SymVariable('t');
    p = SymVariable('p',[2,1]);
    tau = (t-p(2))/(p(1)-p(2));
    
    % relative degree two outputs:
    y_q1R = x('q1_right');
    y_q2R = x('q2_right');
    y_q1L = x('q1_left');
    y_q2L = x('q2_left');
    
    ya_2 = [y_q1R;
            y_q2R;
            y_q1L;
            y_q2L];
    
    y2_label = {'q1_right',...
                'q2_right',...
                'q1_left',...
                'q2_left'};
    % optional: load expression for virtual constraints while creating
    y2 = VirtualConstraint(domain,ya_2,'time','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true,...
        'LoadPath', load_path);
    
    domain = addVirtualConstraint(domain,y2);
    
end
    