/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:24 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t178;
  double t182;
  double t383;
  double t437;
  double t1051;
  double t1180;
  double t1228;
  double t1274;
  double t1284;
  double t1237;
  double t1468;
  double t1578;
  double t1719;
  double t1737;
  double t1765;
  double t1789;
  double t1894;
  double t1909;
  double t1913;
  double t1915;
  double t1931;
  double t1937;
  double t1965;
  double t1966;
  double t1963;
  double t1964;
  double t1969;
  double t1970;
  double t1973;
  double t1974;
  double t1982;
  double t1983;
  double t1987;
  double t1991;
  double t2057;
  double t2058;
  t178 = 4.*var5[0];
  t182 = t178 + var7[0] + var3[0];
  t383 = -1. + var8[0];
  t437 = 1/t383;
  t1051 = -1.*var1[0];
  t1180 = t1051 + var1[1];
  t1228 = -0.333333333333333*t437*t1180;
  t1274 = 4.*var5[1];
  t1284 = t1274 + var7[1] + var3[1];
  t1237 = -1.33333333333333*t437*t1180;
  t1468 = 4.*var5[2];
  t1578 = t1468 + var7[2] + var3[2];
  t1719 = 4.*var5[3];
  t1737 = t1719 + var7[3] + var3[3];
  t1765 = 4.*var5[4];
  t1789 = t1765 + var7[4] + var3[4];
  t1894 = 4.*var5[5];
  t1909 = t1894 + var7[5] + var3[5];
  t1913 = 4.*var5[6];
  t1915 = t1913 + var7[6] + var3[6];
  t1931 = -1.*var7[0];
  t1937 = t1931 + var3[0];
  t1965 = -1.*var7[1];
  t1966 = t1965 + var3[1];
  t1963 = -0.25*t437*t1180;
  t1964 = 0.25*t437*t1180;
  t1969 = -1.*var7[2];
  t1970 = t1969 + var3[2];
  t1973 = -1.*var7[3];
  t1974 = t1973 + var3[3];
  t1982 = -1.*var7[4];
  t1983 = t1982 + var3[4];
  t1987 = -1.*var7[5];
  t1991 = t1987 + var3[5];
  t2057 = -1.*var7[6];
  t2058 = t2057 + var3[6];
  p_output1[0]=0.333333333333333*t182*t437;
  p_output1[1]=-0.333333333333333*t182*t437;
  p_output1[2]=-1.;
  p_output1[3]=t1228;
  p_output1[4]=t1237;
  p_output1[5]=1.;
  p_output1[6]=t1228;
  p_output1[7]=0.333333333333333*t1284*t437;
  p_output1[8]=-0.333333333333333*t1284*t437;
  p_output1[9]=-1.;
  p_output1[10]=t1228;
  p_output1[11]=t1237;
  p_output1[12]=1.;
  p_output1[13]=t1228;
  p_output1[14]=0.333333333333333*t1578*t437;
  p_output1[15]=-0.333333333333333*t1578*t437;
  p_output1[16]=-1.;
  p_output1[17]=t1228;
  p_output1[18]=t1237;
  p_output1[19]=1.;
  p_output1[20]=t1228;
  p_output1[21]=0.333333333333333*t1737*t437;
  p_output1[22]=-0.333333333333333*t1737*t437;
  p_output1[23]=-1.;
  p_output1[24]=t1228;
  p_output1[25]=t1237;
  p_output1[26]=1.;
  p_output1[27]=t1228;
  p_output1[28]=0.333333333333333*t1789*t437;
  p_output1[29]=-0.333333333333333*t1789*t437;
  p_output1[30]=-1.;
  p_output1[31]=t1228;
  p_output1[32]=t1237;
  p_output1[33]=1.;
  p_output1[34]=t1228;
  p_output1[35]=0.333333333333333*t1909*t437;
  p_output1[36]=-0.333333333333333*t1909*t437;
  p_output1[37]=-1.;
  p_output1[38]=t1228;
  p_output1[39]=t1237;
  p_output1[40]=1.;
  p_output1[41]=t1228;
  p_output1[42]=0.333333333333333*t1915*t437;
  p_output1[43]=-0.333333333333333*t1915*t437;
  p_output1[44]=-1.;
  p_output1[45]=t1228;
  p_output1[46]=t1237;
  p_output1[47]=1.;
  p_output1[48]=t1228;
  p_output1[49]=0.25*t1937*t437;
  p_output1[50]=-0.25*t1937*t437;
  p_output1[51]=-0.5;
  p_output1[52]=t1963;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t1964;
  p_output1[56]=0.25*t1966*t437;
  p_output1[57]=-0.25*t1966*t437;
  p_output1[58]=-0.5;
  p_output1[59]=t1963;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t1964;
  p_output1[63]=0.25*t1970*t437;
  p_output1[64]=-0.25*t1970*t437;
  p_output1[65]=-0.5;
  p_output1[66]=t1963;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t1964;
  p_output1[70]=0.25*t1974*t437;
  p_output1[71]=-0.25*t1974*t437;
  p_output1[72]=-0.5;
  p_output1[73]=t1963;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t1964;
  p_output1[77]=0.25*t1983*t437;
  p_output1[78]=-0.25*t1983*t437;
  p_output1[79]=-0.5;
  p_output1[80]=t1963;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t1964;
  p_output1[84]=0.25*t1991*t437;
  p_output1[85]=-0.25*t1991*t437;
  p_output1[86]=-0.5;
  p_output1[87]=t1963;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t1964;
  p_output1[91]=0.25*t2058*t437;
  p_output1[92]=-0.25*t2058*t437;
  p_output1[93]=-0.5;
  p_output1[94]=t1963;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t1964;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace RightStance
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
