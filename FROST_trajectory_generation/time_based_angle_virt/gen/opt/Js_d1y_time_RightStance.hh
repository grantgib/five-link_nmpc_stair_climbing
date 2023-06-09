/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:57 GMT-05:00
 */

#ifndef JS_D1Y_TIME_RIGHTSTANCE_HH
#define JS_D1Y_TIME_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_d1y_time_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_d1y_time_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 48, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_d1y_time_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_D1Y_TIME_RIGHTSTANCE_HH
