/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:30 GMT-04:00
 */

#ifndef JS_FRIGHTTOE_VEC_RIGHTSTANCE_HH
#define JS_FRIGHTTOE_VEC_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_fRightToe_vec_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 17, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_fRightToe_vec_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FRIGHTTOE_VEC_RIGHTSTANCE_HH
