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
  #define CASADI_PREFIX(ID) crane_dae_impl_ode_fun_jac_x_xdot_ ## ID
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
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
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

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[15] = {11, 1, 0, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
static const casadi_int casadi_s3[29] = {11, 9, 0, 3, 7, 8, 10, 13, 13, 15, 16, 17, 4, 8, 9, 0, 1, 4, 10, 1, 4, 9, 3, 4, 10, 5, 6, 6, 9};
static const casadi_int casadi_s4[22] = {11, 9, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 10, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s5[8] = {11, 2, 0, 2, 3, 8, 9, 10};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* crane_dae_impl_ode_fun_jac_x_xdot:(i0[9],i1[9],i2[2],i3[2])->(o0[11],o1[11x9,17nz],o2[11x9,10nz],o3[11x2,3nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0] ? arg[0][1] : 0;
  a1=arg[1] ? arg[1][0] : 0;
  a2=(a0-a1);
  if (res[0]!=0) res[0][0]=a2;
  a2=-4.0493711676434543e+01;
  a3=3.4087337273385997e-02;
  a4=arg[0] ? arg[0][2] : 0;
  a3=(a3*a4);
  a3=(a0-a3);
  a3=(a2*a3);
  a4=arg[1] ? arg[1][1] : 0;
  a3=(a3-a4);
  if (res[0]!=0) res[0][1]=a3;
  a3=arg[2] ? arg[2][1] : 0;
  a4=arg[1] ? arg[1][2] : 0;
  a4=(a3-a4);
  if (res[0]!=0) res[0][2]=a4;
  a4=arg[0] ? arg[0][4] : 0;
  a5=arg[1] ? arg[1][3] : 0;
  a5=(a4-a5);
  if (res[0]!=0) res[0][3]=a5;
  a5=4.7418203070092001e-02;
  a6=arg[2] ? arg[2][0] : 0;
  a7=(a5*a6);
  a8=arg[0] ? arg[0][3] : 0;
  a9=cos(a8);
  a9=(a7*a9);
  a10=9.8100000000000005e+00;
  a11=sin(a8);
  a11=(a10*a11);
  a9=(a9+a11);
  a11=2.;
  a12=(a11*a0);
  a13=(a12*a4);
  a9=(a9+a13);
  a13=arg[0] ? arg[0][0] : 0;
  a9=(a9/a13);
  a14=arg[1] ? arg[1][4] : 0;
  a14=(a9+a14);
  a14=(-a14);
  if (res[0]!=0) res[0][4]=a14;
  a14=arg[0] ? arg[0][6] : 0;
  a15=arg[1] ? arg[1][5] : 0;
  a15=(a14-a15);
  if (res[0]!=0) res[0][5]=a15;
  a15=-7.8182378879940387e+01;
  a16=arg[0] ? arg[0][7] : 0;
  a5=(a5*a16);
  a14=(a14-a5);
  a14=(a15*a14);
  a5=arg[1] ? arg[1][6] : 0;
  a14=(a14-a5);
  if (res[0]!=0) res[0][6]=a14;
  a14=arg[1] ? arg[1][7] : 0;
  a14=(a6-a14);
  if (res[0]!=0) res[0][7]=a14;
  a14=casadi_sq(a6);
  a5=casadi_sq(a13);
  a14=(a14+a5);
  a5=arg[3] ? arg[3][0] : 0;
  a14=(a14-a5);
  a16=cos(a13);
  a14=(a14+a16);
  a16=arg[1] ? arg[1][8] : 0;
  a14=(a14-a16);
  if (res[0]!=0) res[0][8]=a14;
  a14=casadi_sq(a8);
  a16=8.;
  a14=(a14/a16);
  a14=(a14+a13);
  a17=arg[0] ? arg[0][8] : 0;
  a16=(a16*a17);
  a14=(a14+a16);
  a3=sin(a3);
  a14=(a14+a3);
  a5=(a5-a14);
  if (res[0]!=0) res[0][9]=a5;
  a5=arg[3] ? arg[3][1] : 0;
  a14=1.0000000000000001e-01;
  a14=(a4+a14);
  a3=cos(a14);
  a0=(a6*a0);
  a1=(a1-a0);
  a0=casadi_sq(a1);
  a3=(a3+a0);
  a3=(a3-a5);
  a5=(a5-a3);
  if (res[0]!=0) res[0][10]=a5;
  a9=(a9/a13);
  if (res[1]!=0) res[1][0]=a9;
  a9=(a13+a13);
  a5=sin(a13);
  a9=(a9-a5);
  if (res[1]!=0) res[1][1]=a9;
  a9=-1.;
  if (res[1]!=0) res[1][2]=a9;
  a5=1.;
  if (res[1]!=0) res[1][3]=a5;
  if (res[1]!=0) res[1][4]=a2;
  a4=(a11*a4);
  a4=(a4/a13);
  a4=(-a4);
  if (res[1]!=0) res[1][5]=a4;
  a4=(a1+a1);
  a4=(a4*a6);
  if (res[1]!=0) res[1][6]=a4;
  a4=1.3803228073658729e+00;
  if (res[1]!=0) res[1][7]=a4;
  a4=cos(a8);
  a10=(a10*a4);
  a4=sin(a8);
  a7=(a7*a4);
  a10=(a10-a7);
  a10=(a10/a13);
  a10=(-a10);
  if (res[1]!=0) res[1][8]=a10;
  a10=1.2500000000000000e-01;
  a8=(a8+a8);
  a10=(a10*a8);
  a10=(-a10);
  if (res[1]!=0) res[1][9]=a10;
  if (res[1]!=0) res[1][10]=a5;
  a12=(a12/a13);
  a12=(-a12);
  if (res[1]!=0) res[1][11]=a12;
  a14=sin(a14);
  if (res[1]!=0) res[1][12]=a14;
  if (res[1]!=0) res[1][13]=a5;
  if (res[1]!=0) res[1][14]=a15;
  a15=3.7072679182318851e+00;
  if (res[1]!=0) res[1][15]=a15;
  a15=-8.;
  if (res[1]!=0) res[1][16]=a15;
  if (res[2]!=0) res[2][0]=a9;
  a1=(a1+a1);
  a1=(-a1);
  if (res[2]!=0) res[2][1]=a1;
  if (res[2]!=0) res[2][2]=a9;
  if (res[2]!=0) res[2][3]=a9;
  if (res[2]!=0) res[2][4]=a9;
  if (res[2]!=0) res[2][5]=a9;
  if (res[2]!=0) res[2][6]=a9;
  if (res[2]!=0) res[2][7]=a9;
  if (res[2]!=0) res[2][8]=a9;
  if (res[2]!=0) res[2][9]=a9;
  if (res[3]!=0) res[3][0]=a9;
  if (res[3]!=0) res[3][1]=a5;
  if (res[3]!=0) res[3][2]=a11;
  return 0;
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_fun_jac_x_xdot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_fun_jac_x_xdot_incref(void) {
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_fun_jac_x_xdot_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_fun_jac_x_xdot_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_fun_jac_x_xdot_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_fun_jac_x_xdot_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_fun_jac_x_xdot_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_fun_jac_x_xdot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_fun_jac_x_xdot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    case 2: return casadi_s4;
    case 3: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_fun_jac_x_xdot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
