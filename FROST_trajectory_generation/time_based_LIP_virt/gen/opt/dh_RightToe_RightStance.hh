/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:49 GMT-05:00
 */

#ifndef DH_RIGHTTOE_RIGHTSTANCE_HH
#define DH_RIGHTTOE_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dh_RightToe_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dh_RightToe_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DH_RIGHTTOE_RIGHTSTANCE_HH
