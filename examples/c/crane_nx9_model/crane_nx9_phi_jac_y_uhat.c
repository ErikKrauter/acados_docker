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
  #define CASADI_PREFIX(ID) crane_nx9_phi_jac_y_uhat_ ## ID
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
static const casadi_int casadi_s2[11] = {1, 4, 0, 1, 2, 3, 4, 0, 0, 0, 0};

/* crane_nx9_phi_jac_y_uhat:(i0[4],i1)->(o0[1x4],o1) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=4.7418203070092001e-02;
  a1=arg[1] ? arg[1][0] : 0;
  a1=(a0*a1);
  a2=arg[0] ? arg[0][2] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a5=9.8100000000000005e+00;
  a6=sin(a2);
  a6=(a5*a6);
  a4=(a4+a6);
  a6=2.;
  a7=arg[0] ? arg[0][1] : 0;
  a7=(a6*a7);
  a8=arg[0] ? arg[0][3] : 0;
  a9=(a7*a8);
  a4=(a4+a9);
  a9=arg[0] ? arg[0][0] : 0;
  a4=(a4/a9);
  a4=(a4/a9);
  if (res[0]!=0) res[0][0]=a4;
  a8=(a8/a9);
  a6=(a6*a8);
  a6=(-a6);
  if (res[0]!=0) res[0][1]=a6;
  a6=sin(a2);
  a1=(a1/a9);
  a6=(a6*a1);
  a2=cos(a2);
  a5=(a5/a9);
  a2=(a2*a5);
  a6=(a6-a2);
  if (res[0]!=0) res[0][2]=a6;
  a7=(a7/a9);
  a7=(-a7);
  if (res[0]!=0) res[0][3]=a7;
  a0=(a0*a3);
  a0=(a0/a9);
  a0=(-a0);
  if (res[1]!=0) res[1][0]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int crane_nx9_phi_jac_y_uhat(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void crane_nx9_phi_jac_y_uhat_incref(void) {
}

CASADI_SYMBOL_EXPORT void crane_nx9_phi_jac_y_uhat_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int crane_nx9_phi_jac_y_uhat_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int crane_nx9_phi_jac_y_uhat_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* crane_nx9_phi_jac_y_uhat_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* crane_nx9_phi_jac_y_uhat_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_nx9_phi_jac_y_uhat_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_nx9_phi_jac_y_uhat_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int crane_nx9_phi_jac_y_uhat_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
