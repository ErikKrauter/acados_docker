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
  #define CASADI_PREFIX(ID) vde_chain_nm2_ ## ID
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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s2[24] = {6, 3, 0, 6, 12, 18, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};

/* vde_chain_nm2:(i0[6],i1[6x6],i2[6x3],i3[3])->(o0[6],o1[6x6],o2[6x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2;
  a0=arg[0] ? arg[0][3] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][4] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][5] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[3] ? arg[3][0] : 0;
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[3] ? arg[3][1] : 0;
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[3] ? arg[3][2] : 0;
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[1] ? arg[1][3] : 0;
  if (res[1]!=0) res[1][0]=a0;
  a0=arg[1] ? arg[1][4] : 0;
  if (res[1]!=0) res[1][1]=a0;
  a0=arg[1] ? arg[1][5] : 0;
  if (res[1]!=0) res[1][2]=a0;
  a0=0.;
  if (res[1]!=0) res[1][3]=a0;
  if (res[1]!=0) res[1][4]=a0;
  if (res[1]!=0) res[1][5]=a0;
  a1=arg[1] ? arg[1][9] : 0;
  if (res[1]!=0) res[1][6]=a1;
  a1=arg[1] ? arg[1][10] : 0;
  if (res[1]!=0) res[1][7]=a1;
  a1=arg[1] ? arg[1][11] : 0;
  if (res[1]!=0) res[1][8]=a1;
  if (res[1]!=0) res[1][9]=a0;
  if (res[1]!=0) res[1][10]=a0;
  if (res[1]!=0) res[1][11]=a0;
  a1=arg[1] ? arg[1][15] : 0;
  if (res[1]!=0) res[1][12]=a1;
  a1=arg[1] ? arg[1][16] : 0;
  if (res[1]!=0) res[1][13]=a1;
  a1=arg[1] ? arg[1][17] : 0;
  if (res[1]!=0) res[1][14]=a1;
  if (res[1]!=0) res[1][15]=a0;
  if (res[1]!=0) res[1][16]=a0;
  if (res[1]!=0) res[1][17]=a0;
  a1=arg[1] ? arg[1][21] : 0;
  if (res[1]!=0) res[1][18]=a1;
  a1=arg[1] ? arg[1][22] : 0;
  if (res[1]!=0) res[1][19]=a1;
  a1=arg[1] ? arg[1][23] : 0;
  if (res[1]!=0) res[1][20]=a1;
  if (res[1]!=0) res[1][21]=a0;
  if (res[1]!=0) res[1][22]=a0;
  if (res[1]!=0) res[1][23]=a0;
  a1=arg[1] ? arg[1][27] : 0;
  if (res[1]!=0) res[1][24]=a1;
  a1=arg[1] ? arg[1][28] : 0;
  if (res[1]!=0) res[1][25]=a1;
  a1=arg[1] ? arg[1][29] : 0;
  if (res[1]!=0) res[1][26]=a1;
  if (res[1]!=0) res[1][27]=a0;
  if (res[1]!=0) res[1][28]=a0;
  if (res[1]!=0) res[1][29]=a0;
  a1=arg[1] ? arg[1][33] : 0;
  if (res[1]!=0) res[1][30]=a1;
  a1=arg[1] ? arg[1][34] : 0;
  if (res[1]!=0) res[1][31]=a1;
  a1=arg[1] ? arg[1][35] : 0;
  if (res[1]!=0) res[1][32]=a1;
  if (res[1]!=0) res[1][33]=a0;
  if (res[1]!=0) res[1][34]=a0;
  if (res[1]!=0) res[1][35]=a0;
  a1=arg[2] ? arg[2][3] : 0;
  if (res[2]!=0) res[2][0]=a1;
  a1=arg[2] ? arg[2][4] : 0;
  if (res[2]!=0) res[2][1]=a1;
  a1=arg[2] ? arg[2][5] : 0;
  if (res[2]!=0) res[2][2]=a1;
  a1=1.;
  if (res[2]!=0) res[2][3]=a1;
  if (res[2]!=0) res[2][4]=a0;
  if (res[2]!=0) res[2][5]=a0;
  a2=arg[2] ? arg[2][9] : 0;
  if (res[2]!=0) res[2][6]=a2;
  a2=arg[2] ? arg[2][10] : 0;
  if (res[2]!=0) res[2][7]=a2;
  a2=arg[2] ? arg[2][11] : 0;
  if (res[2]!=0) res[2][8]=a2;
  if (res[2]!=0) res[2][9]=a0;
  if (res[2]!=0) res[2][10]=a1;
  if (res[2]!=0) res[2][11]=a0;
  a2=arg[2] ? arg[2][15] : 0;
  if (res[2]!=0) res[2][12]=a2;
  a2=arg[2] ? arg[2][16] : 0;
  if (res[2]!=0) res[2][13]=a2;
  a2=arg[2] ? arg[2][17] : 0;
  if (res[2]!=0) res[2][14]=a2;
  if (res[2]!=0) res[2][15]=a0;
  if (res[2]!=0) res[2][16]=a0;
  if (res[2]!=0) res[2][17]=a1;
  return 0;
}

CASADI_SYMBOL_EXPORT int vde_chain_nm2(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void vde_chain_nm2_incref(void) {
}

CASADI_SYMBOL_EXPORT void vde_chain_nm2_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int vde_chain_nm2_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int vde_chain_nm2_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT const char* vde_chain_nm2_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* vde_chain_nm2_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* vde_chain_nm2_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* vde_chain_nm2_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int vde_chain_nm2_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
