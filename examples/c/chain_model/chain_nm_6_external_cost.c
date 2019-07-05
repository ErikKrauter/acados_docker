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
  #define CASADI_PREFIX(ID) chain_nm_6_external_cost_ ## ID
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

static const casadi_int casadi_s0[34] = {30, 1, 0, 30, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[37] = {33, 1, 0, 33, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
static const casadi_int casadi_s3[69] = {33, 33, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

/* chain_nm_6_external_cost:(i0[30],i1[3])->(o0[33],o1[33x33,33nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2;
  a0=5.0000000000000000e-01;
  a1=arg[1] ? arg[1][0] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][0]=a1;
  a1=arg[1] ? arg[1][1] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][1]=a1;
  a1=arg[1] ? arg[1][2] : 0;
  a1=(a1+a1);
  a0=(a0*a1);
  if (res[0]!=0) res[0][2]=a0;
  a0=5.0000000000000001e-03;
  a1=arg[0] ? arg[0][0] : 0;
  a2=1.9382859999999999e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][3]=a1;
  a1=arg[0] ? arg[0][1] : 0;
  a2=-5.8708560000000000e-18;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][4]=a1;
  a1=arg[0] ? arg[0][2] : 0;
  a2=-4.8382310000000001e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][5]=a1;
  a1=arg[0] ? arg[0][3] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][6]=a1;
  a1=arg[0] ? arg[0][4] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][7]=a1;
  a1=arg[0] ? arg[0][5] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][8]=a1;
  a1=arg[0] ? arg[0][6] : 0;
  a2=4.0021800000000002e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][9]=a1;
  a1=arg[0] ? arg[0][7] : 0;
  a2=-1.2122169999999999e-17;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][10]=a1;
  a1=arg[0] ? arg[0][8] : 0;
  a2=-6.6444579999999998e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][11]=a1;
  a1=arg[0] ? arg[0][9] : 0;
  a2=2.9571900000000000e-32;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][12]=a1;
  a1=arg[0] ? arg[0][10] : 0;
  a2=-1.0291060000000001e-31;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][13]=a1;
  a1=arg[0] ? arg[0][11] : 0;
  a2=-2.6061429999999998e-31;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][14]=a1;
  a1=arg[0] ? arg[0][12] : 0;
  a2=6.0822719999999997e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][15]=a1;
  a1=arg[0] ? arg[0][13] : 0;
  a2=-1.8422540000000001e-17;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][16]=a1;
  a1=arg[0] ? arg[0][14] : 0;
  a2=-5.0930640000000005e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][17]=a1;
  a1=arg[0] ? arg[0][15] : 0;
  a2=4.0979009999999996e-40;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][18]=a1;
  a1=arg[0] ? arg[0][16] : 0;
  a2=4.5409220000000000e-40;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][19]=a1;
  a1=arg[0] ? arg[0][17] : 0;
  a2=-2.3413739999999998e-40;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][20]=a1;
  a1=arg[0] ? arg[0][18] : 0;
  a2=8.0262710000000004e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][21]=a1;
  a1=arg[0] ? arg[0][19] : 0;
  a2=-2.4310700000000001e-17;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][22]=a1;
  a1=arg[0] ? arg[0][20] : 0;
  a2=-4.9198159999999998e-02;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][23]=a1;
  a1=arg[0] ? arg[0][21] : 0;
  a2=5.1107029999999997e-41;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][24]=a1;
  a1=arg[0] ? arg[0][22] : 0;
  a2=6.2387860000000004e-41;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][25]=a1;
  a1=arg[0] ? arg[0][23] : 0;
  a2=2.0514500000000000e-42;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][26]=a1;
  a1=arg[0] ? arg[0][24] : 0;
  a2=9.9221009999999998e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][27]=a1;
  a1=arg[0] ? arg[0][25] : 0;
  a2=-3.0052960000000000e-17;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][28]=a1;
  a1=arg[0] ? arg[0][26] : 0;
  a2=7.0682089999999997e-01;
  a1=(a1-a2);
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][29]=a1;
  a1=arg[0] ? arg[0][27] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][30]=a1;
  a1=arg[0] ? arg[0][28] : 0;
  a1=(a1+a1);
  a1=(a0*a1);
  if (res[0]!=0) res[0][31]=a1;
  a1=arg[0] ? arg[0][29] : 0;
  a1=(a1+a1);
  a0=(a0*a1);
  if (res[0]!=0) res[0][32]=a0;
  a0=1.;
  if (res[1]!=0) res[1][0]=a0;
  if (res[1]!=0) res[1][1]=a0;
  if (res[1]!=0) res[1][2]=a0;
  a0=1.0000000000000000e-02;
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
  if (res[1]!=0) res[1][19]=a0;
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
  return 0;
}

CASADI_SYMBOL_EXPORT int chain_nm_6_external_cost(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void chain_nm_6_external_cost_incref(void) {
}

CASADI_SYMBOL_EXPORT void chain_nm_6_external_cost_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int chain_nm_6_external_cost_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int chain_nm_6_external_cost_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* chain_nm_6_external_cost_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* chain_nm_6_external_cost_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* chain_nm_6_external_cost_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* chain_nm_6_external_cost_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int chain_nm_6_external_cost_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
