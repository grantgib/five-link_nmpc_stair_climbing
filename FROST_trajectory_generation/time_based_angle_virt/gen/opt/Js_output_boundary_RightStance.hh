/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:20:12 GMT-05:00
 */

#ifndef JS_OUTPUT_BOUNDARY_RIGHTSTANCE_HH
#define JS_OUTPUT_BOUNDARY_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightStance
{

  void Js_output_boundary_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_output_boundary_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_output_boundary_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_OUTPUT_BOUNDARY_RIGHTSTANCE_HH
