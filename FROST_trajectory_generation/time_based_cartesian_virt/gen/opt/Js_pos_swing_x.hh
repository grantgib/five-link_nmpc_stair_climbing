/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:16 GMT-05:00
 */

#ifndef JS_POS_SWING_X_HH
#define JS_POS_SWING_X_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_pos_swing_x_raw(double *p_output1, const double *var1);

  inline void Js_pos_swing_x(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_pos_swing_x_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_POS_SWING_X_HH
