/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 16:38:55 GMT-05:00
 */

#ifndef MMAT1_FIVE_LINK_WALKER_HH
#define MMAT1_FIVE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat1_five_link_walker_raw(double *p_output1, const double *var1);

  inline void Mmat1_five_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat1_five_link_walker_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT1_FIVE_LINK_WALKER_HH