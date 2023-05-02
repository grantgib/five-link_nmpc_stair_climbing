/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010-2014 Joel Andersson, Joris Gillis, Moritz Diehl,
 *                            K.U. Leuven. All rights reserved.
 *    Copyright (C) 2011-2014 Greg Horn
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */


      #include "qpoases_interface.hpp"
      #include <string>

      const std::string casadi::QpoasesInterface::meta_doc=
      "\n"
"Interface to QPOases Solver for quadratic programming\n"
"\n"
"\n"
">List of available options\n"
"\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"|       Id        |      Type       |     Default     |   Description   |\n"
"+=================+=================+=================+=================+\n"
"| CPUtime         | OT_DOUBLE         | None            | The maximum     |\n"
"|                 |                 |                 | allowed CPU     |\n"
"|                 |                 |                 | time in seconds |\n"
"|                 |                 |                 | for the whole   |\n"
"|                 |                 |                 | initialisation  |\n"
"|                 |                 |                 | (and the        |\n"
"|                 |                 |                 | actually        |\n"
"|                 |                 |                 | required one on |\n"
"|                 |                 |                 | output).        |\n"
"|                 |                 |                 | Disabled if     |\n"
"|                 |                 |                 | unset.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| boundRelaxation | OT_DOUBLE         | 10000           | Initial         |\n"
"|                 |                 |                 | relaxation of   |\n"
"|                 |                 |                 | bounds to start |\n"
"|                 |                 |                 | homotopy and    |\n"
"|                 |                 |                 | initial value   |\n"
"|                 |                 |                 | for far bounds. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| boundTolerance  | OT_DOUBLE         | 0.000           | If upper and    |\n"
"|                 |                 |                 | lower bounds    |\n"
"|                 |                 |                 | differ less     |\n"
"|                 |                 |                 | than this       |\n"
"|                 |                 |                 | tolerance, they |\n"
"|                 |                 |                 | are regarded    |\n"
"|                 |                 |                 | equal, i.e. as  |\n"
"|                 |                 |                 | equality        |\n"
"|                 |                 |                 | constraint.     |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableCholeskyR | OT_INT      | 0               | Specifies the   |\n"
"| efactorisation  |                 |                 | frequency of a  |\n"
"|                 |                 |                 | full re-        |\n"
"|                 |                 |                 | factorisation   |\n"
"|                 |                 |                 | of projected    |\n"
"|                 |                 |                 | Hessian matrix: |\n"
"|                 |                 |                 | 0: turns them   |\n"
"|                 |                 |                 | off, 1: uses    |\n"
"|                 |                 |                 | them at each    |\n"
"|                 |                 |                 | iteration etc.  |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableDriftCorr | OT_INT      | 1               | Specifies the   |\n"
"| ection          |                 |                 | frequency of    |\n"
"|                 |                 |                 | drift           |\n"
"|                 |                 |                 | corrections: 0: |\n"
"|                 |                 |                 | turns them off. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableEqualitie | OT_BOOL      | False           | Specifies       |\n"
"| s               |                 |                 | whether         |\n"
"|                 |                 |                 | equalities      |\n"
"|                 |                 |                 | should be       |\n"
"|                 |                 |                 | treated as      |\n"
"|                 |                 |                 | always active   |\n"
"|                 |                 |                 | (True) or not   |\n"
"|                 |                 |                 | (False)         |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableFarBounds | OT_BOOL      | True            | Enables the use |\n"
"|                 |                 |                 | of far bounds.  |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableFlippingB | OT_BOOL      | True            | Enables the use |\n"
"| ounds           |                 |                 | of flipping     |\n"
"|                 |                 |                 | bounds.         |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableFullLITes | OT_BOOL      | False           | Enables         |\n"
"| ts              |                 |                 | condition-      |\n"
"|                 |                 |                 | hardened (but   |\n"
"|                 |                 |                 | more expensive) |\n"
"|                 |                 |                 | LI test.        |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableNZCTests  | OT_BOOL      | True            | Enables nonzero |\n"
"|                 |                 |                 | curvature       |\n"
"|                 |                 |                 | tests.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableRamping   | OT_BOOL      | True            | Enables         |\n"
"|                 |                 |                 | ramping.        |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| enableRegularis | OT_BOOL      | False           | Enables         |\n"
"| ation           |                 |                 | automatic       |\n"
"|                 |                 |                 | Hessian         |\n"
"|                 |                 |                 | regularisation. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsDen          | OT_DOUBLE         | 0.000           | Denominator     |\n"
"|                 |                 |                 | tolerance for   |\n"
"|                 |                 |                 | ratio tests.    |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsFlipping     | OT_DOUBLE         | 0.000           | Tolerance of    |\n"
"|                 |                 |                 | squared         |\n"
"|                 |                 |                 | Cholesky        |\n"
"|                 |                 |                 | diagonal factor |\n"
"|                 |                 |                 | which triggers  |\n"
"|                 |                 |                 | flipping bound. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsIterRef      | OT_DOUBLE         | 0.000           | Early           |\n"
"|                 |                 |                 | termination     |\n"
"|                 |                 |                 | tolerance for   |\n"
"|                 |                 |                 | iterative       |\n"
"|                 |                 |                 | refinement.     |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsLITests      | OT_DOUBLE         | 0.000           | Tolerance for   |\n"
"|                 |                 |                 | linear          |\n"
"|                 |                 |                 | independence    |\n"
"|                 |                 |                 | tests.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsNZCTests     | OT_DOUBLE         | 0.000           | Tolerance for   |\n"
"|                 |                 |                 | nonzero         |\n"
"|                 |                 |                 | curvature       |\n"
"|                 |                 |                 | tests.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsNum          | OT_DOUBLE         | -0.000          | Numerator       |\n"
"|                 |                 |                 | tolerance for   |\n"
"|                 |                 |                 | ratio tests.    |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| epsRegularisati | OT_DOUBLE         | 0.000           | Scaling factor  |\n"
"| on              |                 |                 | of identity     |\n"
"|                 |                 |                 | matrix used for |\n"
"|                 |                 |                 | Hessian         |\n"
"|                 |                 |                 | regularisation. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| finalRamping    | OT_DOUBLE         | 1               | Final value for |\n"
"|                 |                 |                 | ramping         |\n"
"|                 |                 |                 | strategy.       |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| growFarBounds   | OT_DOUBLE         | 1000            | Factor to grow  |\n"
"|                 |                 |                 | far bounds.     |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| initialFarBound | OT_DOUBLE         | 1000000         | Initial size    |\n"
"| s               |                 |                 | for far bounds. |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| initialRamping  | OT_DOUBLE         | 0.500           | Start value for |\n"
"|                 |                 |                 | ramping         |\n"
"|                 |                 |                 | strategy.       |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| initialStatusBo | OT_STRING       | lower           | Initial status  |\n"
"| unds            |                 |                 | of bounds at    |\n"
"|                 |                 |                 | first           |\n"
"|                 |                 |                 | iteration.      |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| maxDualJump     | OT_DOUBLE         | 100000000       | Maximum allowed |\n"
"|                 |                 |                 | jump in dual    |\n"
"|                 |                 |                 | variables in    |\n"
"|                 |                 |                 | linear          |\n"
"|                 |                 |                 | independence    |\n"
"|                 |                 |                 | tests.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| maxPrimalJump   | OT_DOUBLE         | 100000000       | Maximum allowed |\n"
"|                 |                 |                 | jump in primal  |\n"
"|                 |                 |                 | variables in    |\n"
"|                 |                 |                 | nonzero         |\n"
"|                 |                 |                 | curvature       |\n"
"|                 |                 |                 | tests.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| nWSR            | OT_INT      | None            | The maximum     |\n"
"|                 |                 |                 | number of       |\n"
"|                 |                 |                 | working set     |\n"
"|                 |                 |                 | recalculations  |\n"
"|                 |                 |                 | to be performed |\n"
"|                 |                 |                 | during the      |\n"
"|                 |                 |                 | initial         |\n"
"|                 |                 |                 | homotopy.       |\n"
"|                 |                 |                 | Default is 5(nx |\n"
"|                 |                 |                 | + nc)           |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| numRefinementSt | OT_INT      | 1               | Maximum number  |\n"
"| eps             |                 |                 | of iterative    |\n"
"|                 |                 |                 | refinement      |\n"
"|                 |                 |                 | steps.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| numRegularisati | OT_INT      | 0               | Maximum number  |\n"
"| onSteps         |                 |                 | of successive   |\n"
"|                 |                 |                 | regularisation  |\n"
"|                 |                 |                 | steps.          |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| printLevel      | OT_STRING       | medium          | Defines the     |\n"
"|                 |                 |                 | amount of text  |\n"
"|                 |                 |                 | output during   |\n"
"|                 |                 |                 | QP solution,    |\n"
"|                 |                 |                 | see Section 5.7 |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| terminationTole | OT_DOUBLE         | 0.000           | Relative        |\n"
"| rance           |                 |                 | termination     |\n"
"|                 |                 |                 | tolerance to    |\n"
"|                 |                 |                 | stop homotopy.  |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"\n"
"\n"
"\n"
"\n"
;
