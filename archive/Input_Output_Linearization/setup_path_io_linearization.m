%% Path setup
restoredefaultpath;
if isunix
    addpath('../../../../toolbox/casadi-linux-matlabR2014b-v3.5.5');
    addpath('../Toolboxes/frost-dev-master');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end
addpath(genpath('utils_io_linearization/'));
addpath(genpath('../reference_trajectories/'));
addpath(genpath('../FROST_code/time_based_cartesian_virt/'));
% addpath(genpath('../FROST_code/time_based_angle_virt/'));