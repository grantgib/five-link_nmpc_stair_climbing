/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:53 GMT-05:00
 */

#ifndef J_D2Y_TIME_RIGHTSTANCE_HH
#define J_D2Y_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void J_d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9);

  inline void J_d2y_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6,const Eigen::VectorXd &var7,const Eigen::VectorXd &var8,const Eigen::VectorXd &var9)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);
    assert_size_matrix(var4, 7, 1);
    assert_size_matrix(var5, 24, 1);
    assert_size_matrix(var6, 2, 1);
    assert_size_matrix(var7, 1, 1);
    assert_size_matrix(var8, 1, 1);
    assert_size_matrix(var9, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 82, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d2y_time_RightStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data(),var7.data(),var8.data(),var9.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D2Y_TIME_RIGHTSTANCE_HH
