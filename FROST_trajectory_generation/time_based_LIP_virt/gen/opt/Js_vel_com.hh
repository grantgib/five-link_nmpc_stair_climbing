/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 02:13:18 GMT-05:00
 */

#ifndef JS_VEL_COM_HH
#define JS_VEL_COM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_vel_com_raw(double *p_output1, const double *var1);

  inline void Js_vel_com(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_vel_com_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_VEL_COM_HH
