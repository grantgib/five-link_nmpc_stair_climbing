/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:19:57 GMT-05:00
 */

#ifndef U_LEFTFOOTX_RIGHTSTANCE_HH
#define U_LEFTFOOTX_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_leftFootX_RightStance_raw(double *p_output1, const double *var1);

  inline void u_leftFootX_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_leftFootX_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_LEFTFOOTX_RIGHTSTANCE_HH
