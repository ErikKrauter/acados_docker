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
  #define CASADI_PREFIX(ID) pendulum_ode_impl_ode_fun_jac_x_xdot_z_ ## ID
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

static const casadi_int casadi_s0[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s1[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[13] = {4, 4, 0, 0, 1, 3, 6, 0, 1, 3, 1, 2, 3};
static const casadi_int casadi_s4[11] = {4, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3};
static const casadi_int casadi_s5[3] = {4, 0, 0};

/* pendulum_ode_impl_ode_fun_jac_x_xdot_z:(i0[4],i1[4],i2,i3[])->(o0[4],o1[4x4,6nz],o2[4x4,4nz],o3[4x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[1] ? arg[1][0] : 0;
  a1=arg[0] ? arg[0][1] : 0;
  a0=(a0-a1);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1] ? arg[1][1] : 0;
  a1=-8.0000000000000016e-02;
  a2=arg[0] ? arg[0][2] : 0;
  a3=sin(a2);
  a3=(a1*a3);
  a4=arg[0] ? arg[0][3] : 0;
  a5=(a3*a4);
  a6=(a5*a4);
  a7=9.8100000000000009e-01;
  a8=cos(a2);
  a8=(a7*a8);
  a9=sin(a2);
  a10=(a8*a9);
  a6=(a6+a10);
  a10=arg[2] ? arg[2][0] : 0;
  a6=(a6+a10);
  a11=1.1000000000000001e+00;
  a12=1.0000000000000001e-01;
  a13=cos(a2);
  a13=(a12*a13);
  a14=cos(a2);
  a15=(a13*a14);
  a11=(a11-a15);
  a6=(a6/a11);
  a0=(a0-a6);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[1] ? arg[1][2] : 0;
  a0=(a0-a4);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[1] ? arg[1][3] : 0;
  a15=cos(a2);
  a15=(a1*a15);
  a16=sin(a2);
  a17=(a15*a16);
  a18=(a17*a4);
  a19=(a18*a4);
  a20=cos(a2);
  a20=(a10*a20);
  a19=(a19+a20);
  a20=1.0791000000000002e+01;
  a21=sin(a2);
  a21=(a20*a21);
  a19=(a19+a21);
  a21=8.0000000000000004e-01;
  a22=(a21*a11);
  a19=(a19/a22);
  a0=(a0-a19);
  if (res[0]!=0) res[0][3]=a0;
  a0=-1.;
  if (res[1]!=0) res[1][0]=a0;
  a23=cos(a2);
  a23=(a1*a23);
  a23=(a4*a23);
  a23=(a4*a23);
  a24=cos(a2);
  a8=(a8*a24);
  a24=sin(a2);
  a7=(a7*a24);
  a9=(a9*a7);
  a8=(a8-a9);
  a23=(a23+a8);
  a23=(a23/a11);
  a6=(a6/a11);
  a8=sin(a2);
  a12=(a12*a8);
  a14=(a14*a12);
  a12=sin(a2);
  a13=(a13*a12);
  a14=(a14+a13);
  a6=(a6*a14);
  a23=(a23-a6);
  a23=(-a23);
  if (res[1]!=0) res[1][1]=a23;
  a23=cos(a2);
  a15=(a15*a23);
  a23=sin(a2);
  a1=(a1*a23);
  a16=(a16*a1);
  a15=(a15-a16);
  a15=(a4*a15);
  a15=(a4*a15);
  a16=sin(a2);
  a10=(a10*a16);
  a15=(a15-a10);
  a2=cos(a2);
  a20=(a20*a2);
  a15=(a15+a20);
  a15=(a15/a22);
  a19=(a19/a22);
  a21=(a21*a14);
  a19=(a19*a21);
  a15=(a15-a19);
  a15=(-a15);
  if (res[1]!=0) res[1][2]=a15;
  a3=(a4*a3);
  a3=(a3+a5);
  a3=(a3/a11);
  a3=(-a3);
  if (res[1]!=0) res[1][3]=a3;
  if (res[1]!=0) res[1][4]=a0;
  a4=(a4*a17);
  a4=(a4+a18);
  a4=(a4/a22);
  a4=(-a4);
  if (res[1]!=0) res[1][5]=a4;
  a4=1.;
  if (res[2]!=0) res[2][0]=a4;
  if (res[2]!=0) res[2][1]=a4;
  if (res[2]!=0) res[2][2]=a4;
  if (res[2]!=0) res[2][3]=a4;
  return 0;
}

CASADI_SYMBOL_EXPORT int pendulum_ode_impl_ode_fun_jac_x_xdot_z(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void pendulum_ode_impl_ode_fun_jac_x_xdot_z_incref(void) {
}

CASADI_SYMBOL_EXPORT void pendulum_ode_impl_ode_fun_jac_x_xdot_z_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int pendulum_ode_impl_ode_fun_jac_x_xdot_z_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int pendulum_ode_impl_ode_fun_jac_x_xdot_z_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT const char* pendulum_ode_impl_ode_fun_jac_x_xdot_z_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* pendulum_ode_impl_ode_fun_jac_x_xdot_z_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pendulum_ode_impl_ode_fun_jac_x_xdot_z_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pendulum_ode_impl_ode_fun_jac_x_xdot_z_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s3;
    case 2: return casadi_s4;
    case 3: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int pendulum_ode_impl_ode_fun_jac_x_xdot_z_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
