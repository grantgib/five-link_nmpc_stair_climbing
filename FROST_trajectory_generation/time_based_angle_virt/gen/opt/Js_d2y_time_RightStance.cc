/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:20:01 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=4;
  p_output1[57]=4;
  p_output1[58]=4;
  p_output1[59]=4;
  p_output1[60]=4;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=1;
  p_output1[65]=2;
  p_output1[66]=5;
  p_output1[67]=12;
  p_output1[68]=19;
  p_output1[69]=24;
  p_output1[70]=28;
  p_output1[71]=32;
  p_output1[72]=36;
  p_output1[73]=40;
  p_output1[74]=44;
  p_output1[75]=48;
  p_output1[76]=49;
  p_output1[77]=1;
  p_output1[78]=2;
  p_output1[79]=7;
  p_output1[80]=14;
  p_output1[81]=21;
  p_output1[82]=25;
  p_output1[83]=29;
  p_output1[84]=33;
  p_output1[85]=37;
  p_output1[86]=41;
  p_output1[87]=45;
  p_output1[88]=48;
  p_output1[89]=49;
  p_output1[90]=1;
  p_output1[91]=2;
  p_output1[92]=5;
  p_output1[93]=6;
  p_output1[94]=7;
  p_output1[95]=12;
  p_output1[96]=13;
  p_output1[97]=14;
  p_output1[98]=19;
  p_output1[99]=20;
  p_output1[100]=21;
  p_output1[101]=26;
  p_output1[102]=30;
  p_output1[103]=34;
  p_output1[104]=38;
  p_output1[105]=42;
  p_output1[106]=46;
  p_output1[107]=48;
  p_output1[108]=49;
  p_output1[109]=1;
  p_output1[110]=2;
  p_output1[111]=5;
  p_output1[112]=8;
  p_output1[113]=9;
  p_output1[114]=12;
  p_output1[115]=15;
  p_output1[116]=16;
  p_output1[117]=19;
  p_output1[118]=22;
  p_output1[119]=23;
  p_output1[120]=27;
  p_output1[121]=31;
  p_output1[122]=35;
  p_output1[123]=39;
  p_output1[124]=43;
  p_output1[125]=47;
  p_output1[126]=48;
  p_output1[127]=49;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_d2y_time_RightStance.hh"

namespace RightStance
{

void Js_d2y_time_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
