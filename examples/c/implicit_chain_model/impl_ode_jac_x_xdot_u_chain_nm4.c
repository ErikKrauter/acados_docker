/*
 * Copyright 2019 Gianluca Frison, Dimitris Kouzoupis, Robin Verschueren, Andrea Zanelli, Niels van Duijkeren, Jonathan Frey, Tommaso Sartor, Branimir Novoselnik, Rien Quirynen, Rezart Qelibari, Dang Doan, Jonas Koenemann, Yutao Chen, Tobias Schöls, Jonas Schlagenhauf, Moritz Diehl
 *
 * This file is part of acados.
 *
 * The 2-Clause BSD License
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) impl_ode_jac_x_xdot_u_chain_nm4_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[22] = {18, 1, 0, 18, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[345] = {18, 18, 0, 18, 36, 54, 72, 90, 108, 126, 144, 162, 180, 198, 216, 234, 252, 270, 288, 306, 324, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
static const casadi_int casadi_s3[60] = {18, 3, 0, 18, 36, 54, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* casadi_impl_ode_jac_x_xdot_u_chain_nm4:(i0[18],i1[18],i2[3])->(o0[18x18],o1[18x18],o2[18x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a3, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a1=3.3333333333333336e+01;
  a2=arg[0] ? arg[0][6] : 0;
  a3=arg[0] ? arg[0][0] : 0;
  a4=(a2-a3);
  a5=3.3000000000000002e-02;
  a6=casadi_sq(a4);
  a7=arg[0] ? arg[0][7] : 0;
  a8=arg[0] ? arg[0][1] : 0;
  a9=(a7-a8);
  a10=casadi_sq(a9);
  a6=(a6+a10);
  a10=arg[0] ? arg[0][8] : 0;
  a11=arg[0] ? arg[0][2] : 0;
  a12=(a10-a11);
  a13=casadi_sq(a12);
  a6=(a6+a13);
  a6=sqrt(a6);
  a13=(a5/a6);
  a14=(a13/a6);
  a15=(a4/a6);
  a15=(a14*a15);
  a16=(a4*a15);
  a17=1.;
  a13=(a17-a13);
  a16=(a16+a13);
  a18=casadi_sq(a3);
  a19=casadi_sq(a8);
  a18=(a18+a19);
  a19=casadi_sq(a11);
  a18=(a18+a19);
  a18=sqrt(a18);
  a19=(a5/a18);
  a20=(a19/a18);
  a21=(a3/a18);
  a21=(a20*a21);
  a22=(a3*a21);
  a19=(a17-a19);
  a22=(a22+a19);
  a22=(a16+a22);
  a22=(a1*a22);
  if (res[0]!=0) res[0][3]=a22;
  a22=(a9*a15);
  a23=(a8*a21);
  a23=(a22+a23);
  a23=(a1*a23);
  if (res[0]!=0) res[0][4]=a23;
  a15=(a12*a15);
  a21=(a11*a21);
  a21=(a15+a21);
  a21=(a1*a21);
  if (res[0]!=0) res[0][5]=a21;
  if (res[0]!=0) res[0][6]=a0;
  if (res[0]!=0) res[0][7]=a0;
  if (res[0]!=0) res[0][8]=a0;
  a16=(a1*a16);
  a16=(-a16);
  if (res[0]!=0) res[0][9]=a16;
  a22=(a1*a22);
  a22=(-a22);
  if (res[0]!=0) res[0][10]=a22;
  a15=(a1*a15);
  a15=(-a15);
  if (res[0]!=0) res[0][11]=a15;
  if (res[0]!=0) res[0][12]=a0;
  if (res[0]!=0) res[0][13]=a0;
  if (res[0]!=0) res[0][14]=a0;
  if (res[0]!=0) res[0][15]=a0;
  if (res[0]!=0) res[0][16]=a0;
  if (res[0]!=0) res[0][17]=a0;
  if (res[0]!=0) res[0][18]=a0;
  if (res[0]!=0) res[0][19]=a0;
  if (res[0]!=0) res[0][20]=a0;
  a15=(a9/a6);
  a15=(a14*a15);
  a22=(a4*a15);
  a16=(a8/a18);
  a16=(a20*a16);
  a21=(a3*a16);
  a21=(a22+a21);
  a21=(a1*a21);
  if (res[0]!=0) res[0][21]=a21;
  a21=(a9*a15);
  a21=(a21+a13);
  a23=(a8*a16);
  a23=(a23+a19);
  a23=(a21+a23);
  a23=(a1*a23);
  if (res[0]!=0) res[0][22]=a23;
  a15=(a12*a15);
  a16=(a11*a16);
  a16=(a15+a16);
  a16=(a1*a16);
  if (res[0]!=0) res[0][23]=a16;
  if (res[0]!=0) res[0][24]=a0;
  if (res[0]!=0) res[0][25]=a0;
  if (res[0]!=0) res[0][26]=a0;
  a22=(a1*a22);
  a22=(-a22);
  if (res[0]!=0) res[0][27]=a22;
  a21=(a1*a21);
  a21=(-a21);
  if (res[0]!=0) res[0][28]=a21;
  a15=(a1*a15);
  a15=(-a15);
  if (res[0]!=0) res[0][29]=a15;
  if (res[0]!=0) res[0][30]=a0;
  if (res[0]!=0) res[0][31]=a0;
  if (res[0]!=0) res[0][32]=a0;
  if (res[0]!=0) res[0][33]=a0;
  if (res[0]!=0) res[0][34]=a0;
  if (res[0]!=0) res[0][35]=a0;
  if (res[0]!=0) res[0][36]=a0;
  if (res[0]!=0) res[0][37]=a0;
  if (res[0]!=0) res[0][38]=a0;
  a15=(a12/a6);
  a15=(a14*a15);
  a21=(a4*a15);
  a18=(a11/a18);
  a20=(a20*a18);
  a3=(a3*a20);
  a3=(a21+a3);
  a3=(a1*a3);
  if (res[0]!=0) res[0][39]=a3;
  a3=(a9*a15);
  a8=(a8*a20);
  a8=(a3+a8);
  a8=(a1*a8);
  if (res[0]!=0) res[0][40]=a8;
  a15=(a12*a15);
  a15=(a15+a13);
  a11=(a11*a20);
  a11=(a11+a19);
  a11=(a15+a11);
  a11=(a1*a11);
  if (res[0]!=0) res[0][41]=a11;
  if (res[0]!=0) res[0][42]=a0;
  if (res[0]!=0) res[0][43]=a0;
  if (res[0]!=0) res[0][44]=a0;
  a21=(a1*a21);
  a21=(-a21);
  if (res[0]!=0) res[0][45]=a21;
  a3=(a1*a3);
  a3=(-a3);
  if (res[0]!=0) res[0][46]=a3;
  a15=(a1*a15);
  a15=(-a15);
  if (res[0]!=0) res[0][47]=a15;
  if (res[0]!=0) res[0][48]=a0;
  if (res[0]!=0) res[0][49]=a0;
  if (res[0]!=0) res[0][50]=a0;
  if (res[0]!=0) res[0][51]=a0;
  if (res[0]!=0) res[0][52]=a0;
  if (res[0]!=0) res[0][53]=a0;
  a15=-1.;
  if (res[0]!=0) res[0][54]=a15;
  if (res[0]!=0) res[0][55]=a0;
  if (res[0]!=0) res[0][56]=a0;
  if (res[0]!=0) res[0][57]=a0;
  if (res[0]!=0) res[0][58]=a0;
  if (res[0]!=0) res[0][59]=a0;
  if (res[0]!=0) res[0][60]=a0;
  if (res[0]!=0) res[0][61]=a0;
  if (res[0]!=0) res[0][62]=a0;
  if (res[0]!=0) res[0][63]=a0;
  if (res[0]!=0) res[0][64]=a0;
  if (res[0]!=0) res[0][65]=a0;
  if (res[0]!=0) res[0][66]=a0;
  if (res[0]!=0) res[0][67]=a0;
  if (res[0]!=0) res[0][68]=a0;
  if (res[0]!=0) res[0][69]=a0;
  if (res[0]!=0) res[0][70]=a0;
  if (res[0]!=0) res[0][71]=a0;
  if (res[0]!=0) res[0][72]=a0;
  if (res[0]!=0) res[0][73]=a15;
  if (res[0]!=0) res[0][74]=a0;
  if (res[0]!=0) res[0][75]=a0;
  if (res[0]!=0) res[0][76]=a0;
  if (res[0]!=0) res[0][77]=a0;
  if (res[0]!=0) res[0][78]=a0;
  if (res[0]!=0) res[0][79]=a0;
  if (res[0]!=0) res[0][80]=a0;
  if (res[0]!=0) res[0][81]=a0;
  if (res[0]!=0) res[0][82]=a0;
  if (res[0]!=0) res[0][83]=a0;
  if (res[0]!=0) res[0][84]=a0;
  if (res[0]!=0) res[0][85]=a0;
  if (res[0]!=0) res[0][86]=a0;
  if (res[0]!=0) res[0][87]=a0;
  if (res[0]!=0) res[0][88]=a0;
  if (res[0]!=0) res[0][89]=a0;
  if (res[0]!=0) res[0][90]=a0;
  if (res[0]!=0) res[0][91]=a0;
  if (res[0]!=0) res[0][92]=a15;
  if (res[0]!=0) res[0][93]=a0;
  if (res[0]!=0) res[0][94]=a0;
  if (res[0]!=0) res[0][95]=a0;
  if (res[0]!=0) res[0][96]=a0;
  if (res[0]!=0) res[0][97]=a0;
  if (res[0]!=0) res[0][98]=a0;
  if (res[0]!=0) res[0][99]=a0;
  if (res[0]!=0) res[0][100]=a0;
  if (res[0]!=0) res[0][101]=a0;
  if (res[0]!=0) res[0][102]=a0;
  if (res[0]!=0) res[0][103]=a0;
  if (res[0]!=0) res[0][104]=a0;
  if (res[0]!=0) res[0][105]=a0;
  if (res[0]!=0) res[0][106]=a0;
  if (res[0]!=0) res[0][107]=a0;
  if (res[0]!=0) res[0][108]=a0;
  if (res[0]!=0) res[0][109]=a0;
  if (res[0]!=0) res[0][110]=a0;
  a3=(a4/a6);
  a3=(a14*a3);
  a21=(a4*a3);
  a21=(a21+a13);
  a11=(a1*a21);
  a11=(-a11);
  if (res[0]!=0) res[0][111]=a11;
  a11=(a9*a3);
  a19=(a1*a11);
  a19=(-a19);
  if (res[0]!=0) res[0][112]=a19;
  a3=(a12*a3);
  a19=(a1*a3);
  a19=(-a19);
  if (res[0]!=0) res[0][113]=a19;
  if (res[0]!=0) res[0][114]=a0;
  if (res[0]!=0) res[0][115]=a0;
  if (res[0]!=0) res[0][116]=a0;
  a19=arg[0] ? arg[0][12] : 0;
  a19=(a19-a2);
  a2=casadi_sq(a19);
  a20=arg[0] ? arg[0][13] : 0;
  a20=(a20-a7);
  a7=casadi_sq(a20);
  a2=(a2+a7);
  a7=arg[0] ? arg[0][14] : 0;
  a7=(a7-a10);
  a10=casadi_sq(a7);
  a2=(a2+a10);
  a2=sqrt(a2);
  a5=(a5/a2);
  a10=(a5/a2);
  a8=(a19/a2);
  a8=(a10*a8);
  a18=(a19*a8);
  a5=(a17-a5);
  a18=(a18+a5);
  a18=(a18+a21);
  a18=(a1*a18);
  if (res[0]!=0) res[0][117]=a18;
  a18=(a20*a8);
  a18=(a18+a11);
  a18=(a1*a18);
  if (res[0]!=0) res[0][118]=a18;
  a8=(a7*a8);
  a8=(a8+a3);
  a8=(a1*a8);
  if (res[0]!=0) res[0][119]=a8;
  if (res[0]!=0) res[0][120]=a0;
  if (res[0]!=0) res[0][121]=a0;
  if (res[0]!=0) res[0][122]=a0;
  if (res[0]!=0) res[0][123]=a0;
  if (res[0]!=0) res[0][124]=a0;
  if (res[0]!=0) res[0][125]=a0;
  if (res[0]!=0) res[0][126]=a0;
  if (res[0]!=0) res[0][127]=a0;
  if (res[0]!=0) res[0][128]=a0;
  a8=(a9/a6);
  a8=(a14*a8);
  a3=(a4*a8);
  a18=(a1*a3);
  a18=(-a18);
  if (res[0]!=0) res[0][129]=a18;
  a18=(a9*a8);
  a18=(a18+a13);
  a11=(a1*a18);
  a11=(-a11);
  if (res[0]!=0) res[0][130]=a11;
  a8=(a12*a8);
  a11=(a1*a8);
  a11=(-a11);
  if (res[0]!=0) res[0][131]=a11;
  if (res[0]!=0) res[0][132]=a0;
  if (res[0]!=0) res[0][133]=a0;
  if (res[0]!=0) res[0][134]=a0;
  a11=(a20/a2);
  a11=(a10*a11);
  a21=(a19*a11);
  a21=(a21+a3);
  a21=(a1*a21);
  if (res[0]!=0) res[0][135]=a21;
  a21=(a20*a11);
  a21=(a21+a5);
  a21=(a21+a18);
  a21=(a1*a21);
  if (res[0]!=0) res[0][136]=a21;
  a11=(a7*a11);
  a11=(a11+a8);
  a11=(a1*a11);
  if (res[0]!=0) res[0][137]=a11;
  if (res[0]!=0) res[0][138]=a0;
  if (res[0]!=0) res[0][139]=a0;
  if (res[0]!=0) res[0][140]=a0;
  if (res[0]!=0) res[0][141]=a0;
  if (res[0]!=0) res[0][142]=a0;
  if (res[0]!=0) res[0][143]=a0;
  if (res[0]!=0) res[0][144]=a0;
  if (res[0]!=0) res[0][145]=a0;
  if (res[0]!=0) res[0][146]=a0;
  a6=(a12/a6);
  a14=(a14*a6);
  a4=(a4*a14);
  a6=(a1*a4);
  a6=(-a6);
  if (res[0]!=0) res[0][147]=a6;
  a9=(a9*a14);
  a6=(a1*a9);
  a6=(-a6);
  if (res[0]!=0) res[0][148]=a6;
  a12=(a12*a14);
  a12=(a12+a13);
  a13=(a1*a12);
  a13=(-a13);
  if (res[0]!=0) res[0][149]=a13;
  if (res[0]!=0) res[0][150]=a0;
  if (res[0]!=0) res[0][151]=a0;
  if (res[0]!=0) res[0][152]=a0;
  a13=(a7/a2);
  a13=(a10*a13);
  a14=(a19*a13);
  a14=(a14+a4);
  a14=(a1*a14);
  if (res[0]!=0) res[0][153]=a14;
  a14=(a20*a13);
  a14=(a14+a9);
  a14=(a1*a14);
  if (res[0]!=0) res[0][154]=a14;
  a13=(a7*a13);
  a13=(a13+a5);
  a13=(a13+a12);
  a13=(a1*a13);
  if (res[0]!=0) res[0][155]=a13;
  if (res[0]!=0) res[0][156]=a0;
  if (res[0]!=0) res[0][157]=a0;
  if (res[0]!=0) res[0][158]=a0;
  if (res[0]!=0) res[0][159]=a0;
  if (res[0]!=0) res[0][160]=a0;
  if (res[0]!=0) res[0][161]=a0;
  if (res[0]!=0) res[0][162]=a0;
  if (res[0]!=0) res[0][163]=a0;
  if (res[0]!=0) res[0][164]=a0;
  if (res[0]!=0) res[0][165]=a0;
  if (res[0]!=0) res[0][166]=a0;
  if (res[0]!=0) res[0][167]=a0;
  if (res[0]!=0) res[0][168]=a15;
  if (res[0]!=0) res[0][169]=a0;
  if (res[0]!=0) res[0][170]=a0;
  if (res[0]!=0) res[0][171]=a0;
  if (res[0]!=0) res[0][172]=a0;
  if (res[0]!=0) res[0][173]=a0;
  if (res[0]!=0) res[0][174]=a0;
  if (res[0]!=0) res[0][175]=a0;
  if (res[0]!=0) res[0][176]=a0;
  if (res[0]!=0) res[0][177]=a0;
  if (res[0]!=0) res[0][178]=a0;
  if (res[0]!=0) res[0][179]=a0;
  if (res[0]!=0) res[0][180]=a0;
  if (res[0]!=0) res[0][181]=a0;
  if (res[0]!=0) res[0][182]=a0;
  if (res[0]!=0) res[0][183]=a0;
  if (res[0]!=0) res[0][184]=a0;
  if (res[0]!=0) res[0][185]=a0;
  if (res[0]!=0) res[0][186]=a0;
  if (res[0]!=0) res[0][187]=a15;
  if (res[0]!=0) res[0][188]=a0;
  if (res[0]!=0) res[0][189]=a0;
  if (res[0]!=0) res[0][190]=a0;
  if (res[0]!=0) res[0][191]=a0;
  if (res[0]!=0) res[0][192]=a0;
  if (res[0]!=0) res[0][193]=a0;
  if (res[0]!=0) res[0][194]=a0;
  if (res[0]!=0) res[0][195]=a0;
  if (res[0]!=0) res[0][196]=a0;
  if (res[0]!=0) res[0][197]=a0;
  if (res[0]!=0) res[0][198]=a0;
  if (res[0]!=0) res[0][199]=a0;
  if (res[0]!=0) res[0][200]=a0;
  if (res[0]!=0) res[0][201]=a0;
  if (res[0]!=0) res[0][202]=a0;
  if (res[0]!=0) res[0][203]=a0;
  if (res[0]!=0) res[0][204]=a0;
  if (res[0]!=0) res[0][205]=a0;
  if (res[0]!=0) res[0][206]=a15;
  if (res[0]!=0) res[0][207]=a0;
  if (res[0]!=0) res[0][208]=a0;
  if (res[0]!=0) res[0][209]=a0;
  if (res[0]!=0) res[0][210]=a0;
  if (res[0]!=0) res[0][211]=a0;
  if (res[0]!=0) res[0][212]=a0;
  if (res[0]!=0) res[0][213]=a0;
  if (res[0]!=0) res[0][214]=a0;
  if (res[0]!=0) res[0][215]=a0;
  if (res[0]!=0) res[0][216]=a0;
  if (res[0]!=0) res[0][217]=a0;
  if (res[0]!=0) res[0][218]=a0;
  if (res[0]!=0) res[0][219]=a0;
  if (res[0]!=0) res[0][220]=a0;
  if (res[0]!=0) res[0][221]=a0;
  if (res[0]!=0) res[0][222]=a0;
  if (res[0]!=0) res[0][223]=a0;
  if (res[0]!=0) res[0][224]=a0;
  a13=(a19/a2);
  a13=(a10*a13);
  a12=(a19*a13);
  a12=(a12+a5);
  a12=(a1*a12);
  a12=(-a12);
  if (res[0]!=0) res[0][225]=a12;
  a12=(a20*a13);
  a12=(a1*a12);
  a12=(-a12);
  if (res[0]!=0) res[0][226]=a12;
  a13=(a7*a13);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][227]=a13;
  if (res[0]!=0) res[0][228]=a0;
  if (res[0]!=0) res[0][229]=a0;
  if (res[0]!=0) res[0][230]=a0;
  if (res[0]!=0) res[0][231]=a0;
  if (res[0]!=0) res[0][232]=a0;
  if (res[0]!=0) res[0][233]=a0;
  if (res[0]!=0) res[0][234]=a0;
  if (res[0]!=0) res[0][235]=a0;
  if (res[0]!=0) res[0][236]=a0;
  if (res[0]!=0) res[0][237]=a0;
  if (res[0]!=0) res[0][238]=a0;
  if (res[0]!=0) res[0][239]=a0;
  if (res[0]!=0) res[0][240]=a0;
  if (res[0]!=0) res[0][241]=a0;
  if (res[0]!=0) res[0][242]=a0;
  a13=(a20/a2);
  a13=(a10*a13);
  a12=(a19*a13);
  a12=(a1*a12);
  a12=(-a12);
  if (res[0]!=0) res[0][243]=a12;
  a12=(a20*a13);
  a12=(a12+a5);
  a12=(a1*a12);
  a12=(-a12);
  if (res[0]!=0) res[0][244]=a12;
  a13=(a7*a13);
  a13=(a1*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][245]=a13;
  if (res[0]!=0) res[0][246]=a0;
  if (res[0]!=0) res[0][247]=a0;
  if (res[0]!=0) res[0][248]=a0;
  if (res[0]!=0) res[0][249]=a0;
  if (res[0]!=0) res[0][250]=a0;
  if (res[0]!=0) res[0][251]=a0;
  if (res[0]!=0) res[0][252]=a0;
  if (res[0]!=0) res[0][253]=a0;
  if (res[0]!=0) res[0][254]=a0;
  if (res[0]!=0) res[0][255]=a0;
  if (res[0]!=0) res[0][256]=a0;
  if (res[0]!=0) res[0][257]=a0;
  if (res[0]!=0) res[0][258]=a0;
  if (res[0]!=0) res[0][259]=a0;
  if (res[0]!=0) res[0][260]=a0;
  a2=(a7/a2);
  a10=(a10*a2);
  a19=(a19*a10);
  a19=(a1*a19);
  a19=(-a19);
  if (res[0]!=0) res[0][261]=a19;
  a20=(a20*a10);
  a20=(a1*a20);
  a20=(-a20);
  if (res[0]!=0) res[0][262]=a20;
  a7=(a7*a10);
  a7=(a7+a5);
  a1=(a1*a7);
  a1=(-a1);
  if (res[0]!=0) res[0][263]=a1;
  if (res[0]!=0) res[0][264]=a0;
  if (res[0]!=0) res[0][265]=a0;
  if (res[0]!=0) res[0][266]=a0;
  if (res[0]!=0) res[0][267]=a0;
  if (res[0]!=0) res[0][268]=a0;
  if (res[0]!=0) res[0][269]=a0;
  if (res[0]!=0) res[0][270]=a0;
  if (res[0]!=0) res[0][271]=a0;
  if (res[0]!=0) res[0][272]=a0;
  if (res[0]!=0) res[0][273]=a0;
  if (res[0]!=0) res[0][274]=a0;
  if (res[0]!=0) res[0][275]=a0;
  if (res[0]!=0) res[0][276]=a0;
  if (res[0]!=0) res[0][277]=a0;
  if (res[0]!=0) res[0][278]=a0;
  if (res[0]!=0) res[0][279]=a0;
  if (res[0]!=0) res[0][280]=a0;
  if (res[0]!=0) res[0][281]=a0;
  if (res[0]!=0) res[0][282]=a15;
  if (res[0]!=0) res[0][283]=a0;
  if (res[0]!=0) res[0][284]=a0;
  if (res[0]!=0) res[0][285]=a0;
  if (res[0]!=0) res[0][286]=a0;
  if (res[0]!=0) res[0][287]=a0;
  if (res[0]!=0) res[0][288]=a0;
  if (res[0]!=0) res[0][289]=a0;
  if (res[0]!=0) res[0][290]=a0;
  if (res[0]!=0) res[0][291]=a0;
  if (res[0]!=0) res[0][292]=a0;
  if (res[0]!=0) res[0][293]=a0;
  if (res[0]!=0) res[0][294]=a0;
  if (res[0]!=0) res[0][295]=a0;
  if (res[0]!=0) res[0][296]=a0;
  if (res[0]!=0) res[0][297]=a0;
  if (res[0]!=0) res[0][298]=a0;
  if (res[0]!=0) res[0][299]=a0;
  if (res[0]!=0) res[0][300]=a0;
  if (res[0]!=0) res[0][301]=a15;
  if (res[0]!=0) res[0][302]=a0;
  if (res[0]!=0) res[0][303]=a0;
  if (res[0]!=0) res[0][304]=a0;
  if (res[0]!=0) res[0][305]=a0;
  if (res[0]!=0) res[0][306]=a0;
  if (res[0]!=0) res[0][307]=a0;
  if (res[0]!=0) res[0][308]=a0;
  if (res[0]!=0) res[0][309]=a0;
  if (res[0]!=0) res[0][310]=a0;
  if (res[0]!=0) res[0][311]=a0;
  if (res[0]!=0) res[0][312]=a0;
  if (res[0]!=0) res[0][313]=a0;
  if (res[0]!=0) res[0][314]=a0;
  if (res[0]!=0) res[0][315]=a0;
  if (res[0]!=0) res[0][316]=a0;
  if (res[0]!=0) res[0][317]=a0;
  if (res[0]!=0) res[0][318]=a0;
  if (res[0]!=0) res[0][319]=a0;
  if (res[0]!=0) res[0][320]=a15;
  if (res[0]!=0) res[0][321]=a0;
  if (res[0]!=0) res[0][322]=a0;
  if (res[0]!=0) res[0][323]=a0;
  if (res[1]!=0) res[1][0]=a17;
  if (res[1]!=0) res[1][1]=a0;
  if (res[1]!=0) res[1][2]=a0;
  if (res[1]!=0) res[1][3]=a0;
  if (res[1]!=0) res[1][4]=a0;
  if (res[1]!=0) res[1][5]=a0;
  if (res[1]!=0) res[1][6]=a0;
  if (res[1]!=0) res[1][7]=a0;
  if (res[1]!=0) res[1][8]=a0;
  if (res[1]!=0) res[1][9]=a0;
  if (res[1]!=0) res[1][10]=a0;
  if (res[1]!=0) res[1][11]=a0;
  if (res[1]!=0) res[1][12]=a0;
  if (res[1]!=0) res[1][13]=a0;
  if (res[1]!=0) res[1][14]=a0;
  if (res[1]!=0) res[1][15]=a0;
  if (res[1]!=0) res[1][16]=a0;
  if (res[1]!=0) res[1][17]=a0;
  if (res[1]!=0) res[1][18]=a0;
  if (res[1]!=0) res[1][19]=a17;
  if (res[1]!=0) res[1][20]=a0;
  if (res[1]!=0) res[1][21]=a0;
  if (res[1]!=0) res[1][22]=a0;
  if (res[1]!=0) res[1][23]=a0;
  if (res[1]!=0) res[1][24]=a0;
  if (res[1]!=0) res[1][25]=a0;
  if (res[1]!=0) res[1][26]=a0;
  if (res[1]!=0) res[1][27]=a0;
  if (res[1]!=0) res[1][28]=a0;
  if (res[1]!=0) res[1][29]=a0;
  if (res[1]!=0) res[1][30]=a0;
  if (res[1]!=0) res[1][31]=a0;
  if (res[1]!=0) res[1][32]=a0;
  if (res[1]!=0) res[1][33]=a0;
  if (res[1]!=0) res[1][34]=a0;
  if (res[1]!=0) res[1][35]=a0;
  if (res[1]!=0) res[1][36]=a0;
  if (res[1]!=0) res[1][37]=a0;
  if (res[1]!=0) res[1][38]=a17;
  if (res[1]!=0) res[1][39]=a0;
  if (res[1]!=0) res[1][40]=a0;
  if (res[1]!=0) res[1][41]=a0;
  if (res[1]!=0) res[1][42]=a0;
  if (res[1]!=0) res[1][43]=a0;
  if (res[1]!=0) res[1][44]=a0;
  if (res[1]!=0) res[1][45]=a0;
  if (res[1]!=0) res[1][46]=a0;
  if (res[1]!=0) res[1][47]=a0;
  if (res[1]!=0) res[1][48]=a0;
  if (res[1]!=0) res[1][49]=a0;
  if (res[1]!=0) res[1][50]=a0;
  if (res[1]!=0) res[1][51]=a0;
  if (res[1]!=0) res[1][52]=a0;
  if (res[1]!=0) res[1][53]=a0;
  if (res[1]!=0) res[1][54]=a0;
  if (res[1]!=0) res[1][55]=a0;
  if (res[1]!=0) res[1][56]=a0;
  if (res[1]!=0) res[1][57]=a17;
  if (res[1]!=0) res[1][58]=a0;
  if (res[1]!=0) res[1][59]=a0;
  if (res[1]!=0) res[1][60]=a0;
  if (res[1]!=0) res[1][61]=a0;
  if (res[1]!=0) res[1][62]=a0;
  if (res[1]!=0) res[1][63]=a0;
  if (res[1]!=0) res[1][64]=a0;
  if (res[1]!=0) res[1][65]=a0;
  if (res[1]!=0) res[1][66]=a0;
  if (res[1]!=0) res[1][67]=a0;
  if (res[1]!=0) res[1][68]=a0;
  if (res[1]!=0) res[1][69]=a0;
  if (res[1]!=0) res[1][70]=a0;
  if (res[1]!=0) res[1][71]=a0;
  if (res[1]!=0) res[1][72]=a0;
  if (res[1]!=0) res[1][73]=a0;
  if (res[1]!=0) res[1][74]=a0;
  if (res[1]!=0) res[1][75]=a0;
  if (res[1]!=0) res[1][76]=a17;
  if (res[1]!=0) res[1][77]=a0;
  if (res[1]!=0) res[1][78]=a0;
  if (res[1]!=0) res[1][79]=a0;
  if (res[1]!=0) res[1][80]=a0;
  if (res[1]!=0) res[1][81]=a0;
  if (res[1]!=0) res[1][82]=a0;
  if (res[1]!=0) res[1][83]=a0;
  if (res[1]!=0) res[1][84]=a0;
  if (res[1]!=0) res[1][85]=a0;
  if (res[1]!=0) res[1][86]=a0;
  if (res[1]!=0) res[1][87]=a0;
  if (res[1]!=0) res[1][88]=a0;
  if (res[1]!=0) res[1][89]=a0;
  if (res[1]!=0) res[1][90]=a0;
  if (res[1]!=0) res[1][91]=a0;
  if (res[1]!=0) res[1][92]=a0;
  if (res[1]!=0) res[1][93]=a0;
  if (res[1]!=0) res[1][94]=a0;
  if (res[1]!=0) res[1][95]=a17;
  if (res[1]!=0) res[1][96]=a0;
  if (res[1]!=0) res[1][97]=a0;
  if (res[1]!=0) res[1][98]=a0;
  if (res[1]!=0) res[1][99]=a0;
  if (res[1]!=0) res[1][100]=a0;
  if (res[1]!=0) res[1][101]=a0;
  if (res[1]!=0) res[1][102]=a0;
  if (res[1]!=0) res[1][103]=a0;
  if (res[1]!=0) res[1][104]=a0;
  if (res[1]!=0) res[1][105]=a0;
  if (res[1]!=0) res[1][106]=a0;
  if (res[1]!=0) res[1][107]=a0;
  if (res[1]!=0) res[1][108]=a0;
  if (res[1]!=0) res[1][109]=a0;
  if (res[1]!=0) res[1][110]=a0;
  if (res[1]!=0) res[1][111]=a0;
  if (res[1]!=0) res[1][112]=a0;
  if (res[1]!=0) res[1][113]=a0;
  if (res[1]!=0) res[1][114]=a17;
  if (res[1]!=0) res[1][115]=a0;
  if (res[1]!=0) res[1][116]=a0;
  if (res[1]!=0) res[1][117]=a0;
  if (res[1]!=0) res[1][118]=a0;
  if (res[1]!=0) res[1][119]=a0;
  if (res[1]!=0) res[1][120]=a0;
  if (res[1]!=0) res[1][121]=a0;
  if (res[1]!=0) res[1][122]=a0;
  if (res[1]!=0) res[1][123]=a0;
  if (res[1]!=0) res[1][124]=a0;
  if (res[1]!=0) res[1][125]=a0;
  if (res[1]!=0) res[1][126]=a0;
  if (res[1]!=0) res[1][127]=a0;
  if (res[1]!=0) res[1][128]=a0;
  if (res[1]!=0) res[1][129]=a0;
  if (res[1]!=0) res[1][130]=a0;
  if (res[1]!=0) res[1][131]=a0;
  if (res[1]!=0) res[1][132]=a0;
  if (res[1]!=0) res[1][133]=a17;
  if (res[1]!=0) res[1][134]=a0;
  if (res[1]!=0) res[1][135]=a0;
  if (res[1]!=0) res[1][136]=a0;
  if (res[1]!=0) res[1][137]=a0;
  if (res[1]!=0) res[1][138]=a0;
  if (res[1]!=0) res[1][139]=a0;
  if (res[1]!=0) res[1][140]=a0;
  if (res[1]!=0) res[1][141]=a0;
  if (res[1]!=0) res[1][142]=a0;
  if (res[1]!=0) res[1][143]=a0;
  if (res[1]!=0) res[1][144]=a0;
  if (res[1]!=0) res[1][145]=a0;
  if (res[1]!=0) res[1][146]=a0;
  if (res[1]!=0) res[1][147]=a0;
  if (res[1]!=0) res[1][148]=a0;
  if (res[1]!=0) res[1][149]=a0;
  if (res[1]!=0) res[1][150]=a0;
  if (res[1]!=0) res[1][151]=a0;
  if (res[1]!=0) res[1][152]=a17;
  if (res[1]!=0) res[1][153]=a0;
  if (res[1]!=0) res[1][154]=a0;
  if (res[1]!=0) res[1][155]=a0;
  if (res[1]!=0) res[1][156]=a0;
  if (res[1]!=0) res[1][157]=a0;
  if (res[1]!=0) res[1][158]=a0;
  if (res[1]!=0) res[1][159]=a0;
  if (res[1]!=0) res[1][160]=a0;
  if (res[1]!=0) res[1][161]=a0;
  if (res[1]!=0) res[1][162]=a0;
  if (res[1]!=0) res[1][163]=a0;
  if (res[1]!=0) res[1][164]=a0;
  if (res[1]!=0) res[1][165]=a0;
  if (res[1]!=0) res[1][166]=a0;
  if (res[1]!=0) res[1][167]=a0;
  if (res[1]!=0) res[1][168]=a0;
  if (res[1]!=0) res[1][169]=a0;
  if (res[1]!=0) res[1][170]=a0;
  if (res[1]!=0) res[1][171]=a17;
  if (res[1]!=0) res[1][172]=a0;
  if (res[1]!=0) res[1][173]=a0;
  if (res[1]!=0) res[1][174]=a0;
  if (res[1]!=0) res[1][175]=a0;
  if (res[1]!=0) res[1][176]=a0;
  if (res[1]!=0) res[1][177]=a0;
  if (res[1]!=0) res[1][178]=a0;
  if (res[1]!=0) res[1][179]=a0;
  if (res[1]!=0) res[1][180]=a0;
  if (res[1]!=0) res[1][181]=a0;
  if (res[1]!=0) res[1][182]=a0;
  if (res[1]!=0) res[1][183]=a0;
  if (res[1]!=0) res[1][184]=a0;
  if (res[1]!=0) res[1][185]=a0;
  if (res[1]!=0) res[1][186]=a0;
  if (res[1]!=0) res[1][187]=a0;
  if (res[1]!=0) res[1][188]=a0;
  if (res[1]!=0) res[1][189]=a0;
  if (res[1]!=0) res[1][190]=a17;
  if (res[1]!=0) res[1][191]=a0;
  if (res[1]!=0) res[1][192]=a0;
  if (res[1]!=0) res[1][193]=a0;
  if (res[1]!=0) res[1][194]=a0;
  if (res[1]!=0) res[1][195]=a0;
  if (res[1]!=0) res[1][196]=a0;
  if (res[1]!=0) res[1][197]=a0;
  if (res[1]!=0) res[1][198]=a0;
  if (res[1]!=0) res[1][199]=a0;
  if (res[1]!=0) res[1][200]=a0;
  if (res[1]!=0) res[1][201]=a0;
  if (res[1]!=0) res[1][202]=a0;
  if (res[1]!=0) res[1][203]=a0;
  if (res[1]!=0) res[1][204]=a0;
  if (res[1]!=0) res[1][205]=a0;
  if (res[1]!=0) res[1][206]=a0;
  if (res[1]!=0) res[1][207]=a0;
  if (res[1]!=0) res[1][208]=a0;
  if (res[1]!=0) res[1][209]=a17;
  if (res[1]!=0) res[1][210]=a0;
  if (res[1]!=0) res[1][211]=a0;
  if (res[1]!=0) res[1][212]=a0;
  if (res[1]!=0) res[1][213]=a0;
  if (res[1]!=0) res[1][214]=a0;
  if (res[1]!=0) res[1][215]=a0;
  if (res[1]!=0) res[1][216]=a0;
  if (res[1]!=0) res[1][217]=a0;
  if (res[1]!=0) res[1][218]=a0;
  if (res[1]!=0) res[1][219]=a0;
  if (res[1]!=0) res[1][220]=a0;
  if (res[1]!=0) res[1][221]=a0;
  if (res[1]!=0) res[1][222]=a0;
  if (res[1]!=0) res[1][223]=a0;
  if (res[1]!=0) res[1][224]=a0;
  if (res[1]!=0) res[1][225]=a0;
  if (res[1]!=0) res[1][226]=a0;
  if (res[1]!=0) res[1][227]=a0;
  if (res[1]!=0) res[1][228]=a17;
  if (res[1]!=0) res[1][229]=a0;
  if (res[1]!=0) res[1][230]=a0;
  if (res[1]!=0) res[1][231]=a0;
  if (res[1]!=0) res[1][232]=a0;
  if (res[1]!=0) res[1][233]=a0;
  if (res[1]!=0) res[1][234]=a0;
  if (res[1]!=0) res[1][235]=a0;
  if (res[1]!=0) res[1][236]=a0;
  if (res[1]!=0) res[1][237]=a0;
  if (res[1]!=0) res[1][238]=a0;
  if (res[1]!=0) res[1][239]=a0;
  if (res[1]!=0) res[1][240]=a0;
  if (res[1]!=0) res[1][241]=a0;
  if (res[1]!=0) res[1][242]=a0;
  if (res[1]!=0) res[1][243]=a0;
  if (res[1]!=0) res[1][244]=a0;
  if (res[1]!=0) res[1][245]=a0;
  if (res[1]!=0) res[1][246]=a0;
  if (res[1]!=0) res[1][247]=a17;
  if (res[1]!=0) res[1][248]=a0;
  if (res[1]!=0) res[1][249]=a0;
  if (res[1]!=0) res[1][250]=a0;
  if (res[1]!=0) res[1][251]=a0;
  if (res[1]!=0) res[1][252]=a0;
  if (res[1]!=0) res[1][253]=a0;
  if (res[1]!=0) res[1][254]=a0;
  if (res[1]!=0) res[1][255]=a0;
  if (res[1]!=0) res[1][256]=a0;
  if (res[1]!=0) res[1][257]=a0;
  if (res[1]!=0) res[1][258]=a0;
  if (res[1]!=0) res[1][259]=a0;
  if (res[1]!=0) res[1][260]=a0;
  if (res[1]!=0) res[1][261]=a0;
  if (res[1]!=0) res[1][262]=a0;
  if (res[1]!=0) res[1][263]=a0;
  if (res[1]!=0) res[1][264]=a0;
  if (res[1]!=0) res[1][265]=a0;
  if (res[1]!=0) res[1][266]=a17;
  if (res[1]!=0) res[1][267]=a0;
  if (res[1]!=0) res[1][268]=a0;
  if (res[1]!=0) res[1][269]=a0;
  if (res[1]!=0) res[1][270]=a0;
  if (res[1]!=0) res[1][271]=a0;
  if (res[1]!=0) res[1][272]=a0;
  if (res[1]!=0) res[1][273]=a0;
  if (res[1]!=0) res[1][274]=a0;
  if (res[1]!=0) res[1][275]=a0;
  if (res[1]!=0) res[1][276]=a0;
  if (res[1]!=0) res[1][277]=a0;
  if (res[1]!=0) res[1][278]=a0;
  if (res[1]!=0) res[1][279]=a0;
  if (res[1]!=0) res[1][280]=a0;
  if (res[1]!=0) res[1][281]=a0;
  if (res[1]!=0) res[1][282]=a0;
  if (res[1]!=0) res[1][283]=a0;
  if (res[1]!=0) res[1][284]=a0;
  if (res[1]!=0) res[1][285]=a17;
  if (res[1]!=0) res[1][286]=a0;
  if (res[1]!=0) res[1][287]=a0;
  if (res[1]!=0) res[1][288]=a0;
  if (res[1]!=0) res[1][289]=a0;
  if (res[1]!=0) res[1][290]=a0;
  if (res[1]!=0) res[1][291]=a0;
  if (res[1]!=0) res[1][292]=a0;
  if (res[1]!=0) res[1][293]=a0;
  if (res[1]!=0) res[1][294]=a0;
  if (res[1]!=0) res[1][295]=a0;
  if (res[1]!=0) res[1][296]=a0;
  if (res[1]!=0) res[1][297]=a0;
  if (res[1]!=0) res[1][298]=a0;
  if (res[1]!=0) res[1][299]=a0;
  if (res[1]!=0) res[1][300]=a0;
  if (res[1]!=0) res[1][301]=a0;
  if (res[1]!=0) res[1][302]=a0;
  if (res[1]!=0) res[1][303]=a0;
  if (res[1]!=0) res[1][304]=a17;
  if (res[1]!=0) res[1][305]=a0;
  if (res[1]!=0) res[1][306]=a0;
  if (res[1]!=0) res[1][307]=a0;
  if (res[1]!=0) res[1][308]=a0;
  if (res[1]!=0) res[1][309]=a0;
  if (res[1]!=0) res[1][310]=a0;
  if (res[1]!=0) res[1][311]=a0;
  if (res[1]!=0) res[1][312]=a0;
  if (res[1]!=0) res[1][313]=a0;
  if (res[1]!=0) res[1][314]=a0;
  if (res[1]!=0) res[1][315]=a0;
  if (res[1]!=0) res[1][316]=a0;
  if (res[1]!=0) res[1][317]=a0;
  if (res[1]!=0) res[1][318]=a0;
  if (res[1]!=0) res[1][319]=a0;
  if (res[1]!=0) res[1][320]=a0;
  if (res[1]!=0) res[1][321]=a0;
  if (res[1]!=0) res[1][322]=a0;
  if (res[1]!=0) res[1][323]=a17;
  if (res[2]!=0) res[2][0]=a0;
  if (res[2]!=0) res[2][1]=a0;
  if (res[2]!=0) res[2][2]=a0;
  if (res[2]!=0) res[2][3]=a0;
  if (res[2]!=0) res[2][4]=a0;
  if (res[2]!=0) res[2][5]=a0;
  if (res[2]!=0) res[2][6]=a0;
  if (res[2]!=0) res[2][7]=a0;
  if (res[2]!=0) res[2][8]=a0;
  if (res[2]!=0) res[2][9]=a0;
  if (res[2]!=0) res[2][10]=a0;
  if (res[2]!=0) res[2][11]=a0;
  if (res[2]!=0) res[2][12]=a0;
  if (res[2]!=0) res[2][13]=a0;
  if (res[2]!=0) res[2][14]=a0;
  if (res[2]!=0) res[2][15]=a15;
  if (res[2]!=0) res[2][16]=a0;
  if (res[2]!=0) res[2][17]=a0;
  if (res[2]!=0) res[2][18]=a0;
  if (res[2]!=0) res[2][19]=a0;
  if (res[2]!=0) res[2][20]=a0;
  if (res[2]!=0) res[2][21]=a0;
  if (res[2]!=0) res[2][22]=a0;
  if (res[2]!=0) res[2][23]=a0;
  if (res[2]!=0) res[2][24]=a0;
  if (res[2]!=0) res[2][25]=a0;
  if (res[2]!=0) res[2][26]=a0;
  if (res[2]!=0) res[2][27]=a0;
  if (res[2]!=0) res[2][28]=a0;
  if (res[2]!=0) res[2][29]=a0;
  if (res[2]!=0) res[2][30]=a0;
  if (res[2]!=0) res[2][31]=a0;
  if (res[2]!=0) res[2][32]=a0;
  if (res[2]!=0) res[2][33]=a0;
  if (res[2]!=0) res[2][34]=a15;
  if (res[2]!=0) res[2][35]=a0;
  if (res[2]!=0) res[2][36]=a0;
  if (res[2]!=0) res[2][37]=a0;
  if (res[2]!=0) res[2][38]=a0;
  if (res[2]!=0) res[2][39]=a0;
  if (res[2]!=0) res[2][40]=a0;
  if (res[2]!=0) res[2][41]=a0;
  if (res[2]!=0) res[2][42]=a0;
  if (res[2]!=0) res[2][43]=a0;
  if (res[2]!=0) res[2][44]=a0;
  if (res[2]!=0) res[2][45]=a0;
  if (res[2]!=0) res[2][46]=a0;
  if (res[2]!=0) res[2][47]=a0;
  if (res[2]!=0) res[2][48]=a0;
  if (res[2]!=0) res[2][49]=a0;
  if (res[2]!=0) res[2][50]=a0;
  if (res[2]!=0) res[2][51]=a0;
  if (res[2]!=0) res[2][52]=a0;
  if (res[2]!=0) res[2][53]=a15;
  return 0;
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_jac_x_xdot_u_chain_nm4(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_jac_x_xdot_u_chain_nm4_incref(void) {
}

CASADI_SYMBOL_EXPORT void casadi_impl_ode_jac_x_xdot_u_chain_nm4_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_jac_x_xdot_u_chain_nm4_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int casadi_impl_ode_jac_x_xdot_u_chain_nm4_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_jac_x_xdot_u_chain_nm4_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* casadi_impl_ode_jac_x_xdot_u_chain_nm4_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_jac_x_xdot_u_chain_nm4_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* casadi_impl_ode_jac_x_xdot_u_chain_nm4_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s2;
    case 2: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int casadi_impl_ode_jac_x_xdot_u_chain_nm4_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
