/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 01:29:24 GMT-05:00
 */

#ifndef J_XPLUSCONTRIGHTIMPACT_HH
#define J_XPLUSCONTRIGHTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightImpact
{

  void J_xPlusContRightImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_xPlusContRightImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 10, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_xPlusContRightImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_XPLUSCONTRIGHTIMPACT_HH
