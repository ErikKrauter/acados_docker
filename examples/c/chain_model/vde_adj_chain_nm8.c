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
  #define CASADI_PREFIX(ID) vde_adj_chain_nm8_ ## ID
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

static const casadi_int casadi_s0[46] = {42, 1, 0, 42, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[49] = {45, 1, 0, 45, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* vde_adj_chain_nm8:(i0[42],i1[42],i2[3])->(o0[45]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a3, a4, a5, a6, a7, a8, a9;
  a0=1.;
  a1=3.3000000000000002e-02;
  a2=arg[0] ? arg[0][0] : 0;
  a3=casadi_sq(a2);
  a4=arg[0] ? arg[0][1] : 0;
  a5=casadi_sq(a4);
  a3=(a3+a5);
  a5=arg[0] ? arg[0][2] : 0;
  a6=casadi_sq(a5);
  a3=(a3+a6);
  a3=sqrt(a3);
  a6=(a1/a3);
  a7=(a0-a6);
  a8=3.3333333333333336e+01;
  a9=arg[1] ? arg[1][3] : 0;
  a9=(a8*a9);
  a10=(a7*a9);
  a11=(a2+a2);
  a6=(a6/a3);
  a12=arg[1] ? arg[1][5] : 0;
  a12=(a8*a12);
  a13=(a5*a12);
  a14=arg[1] ? arg[1][4] : 0;
  a14=(a8*a14);
  a15=(a4*a14);
  a13=(a13+a15);
  a15=(a2*a9);
  a13=(a13+a15);
  a6=(a6*a13);
  a3=(a3+a3);
  a6=(a6/a3);
  a11=(a11*a6);
  a10=(a10+a11);
  a11=arg[0] ? arg[0][6] : 0;
  a2=(a11-a2);
  a3=casadi_sq(a2);
  a13=arg[0] ? arg[0][7] : 0;
  a15=(a13-a4);
  a16=casadi_sq(a15);
  a3=(a3+a16);
  a16=arg[0] ? arg[0][8] : 0;
  a17=(a16-a5);
  a18=casadi_sq(a17);
  a3=(a3+a18);
  a3=sqrt(a3);
  a18=(a1/a3);
  a19=(a0-a18);
  a20=arg[1] ? arg[1][9] : 0;
  a20=(a8*a20);
  a9=(a9-a20);
  a21=(a19*a9);
  a22=(a2+a2);
  a18=(a18/a3);
  a23=arg[1] ? arg[1][11] : 0;
  a23=(a8*a23);
  a24=(a12-a23);
  a25=(a17*a24);
  a26=arg[1] ? arg[1][10] : 0;
  a26=(a8*a26);
  a27=(a14-a26);
  a28=(a15*a27);
  a25=(a25+a28);
  a2=(a2*a9);
  a25=(a25+a2);
  a18=(a18*a25);
  a3=(a3+a3);
  a18=(a18/a3);
  a22=(a22*a18);
  a21=(a21+a22);
  a10=(a10+a21);
  a10=(-a10);
  if (res[0]!=0) res[0][0]=a10;
  a14=(a7*a14);
  a4=(a4+a4);
  a4=(a4*a6);
  a14=(a14+a4);
  a27=(a19*a27);
  a15=(a15+a15);
  a15=(a15*a18);
  a27=(a27+a15);
  a14=(a14+a27);
  a14=(-a14);
  if (res[0]!=0) res[0][1]=a14;
  a7=(a7*a12);
  a5=(a5+a5);
  a5=(a5*a6);
  a7=(a7+a5);
  a19=(a19*a24);
  a17=(a17+a17);
  a17=(a17*a18);
  a19=(a19+a17);
  a7=(a7+a19);
  a7=(-a7);
  if (res[0]!=0) res[0][2]=a7;
  a7=arg[1] ? arg[1][0] : 0;
  if (res[0]!=0) res[0][3]=a7;
  a7=arg[1] ? arg[1][1] : 0;
  if (res[0]!=0) res[0][4]=a7;
  a7=arg[1] ? arg[1][2] : 0;
  if (res[0]!=0) res[0][5]=a7;
  a7=arg[0] ? arg[0][12] : 0;
  a11=(a7-a11);
  a17=casadi_sq(a11);
  a18=arg[0] ? arg[0][13] : 0;
  a13=(a18-a13);
  a24=casadi_sq(a13);
  a17=(a17+a24);
  a24=arg[0] ? arg[0][14] : 0;
  a16=(a24-a16);
  a5=casadi_sq(a16);
  a17=(a17+a5);
  a17=sqrt(a17);
  a5=(a1/a17);
  a6=(a0-a5);
  a12=arg[1] ? arg[1][15] : 0;
  a12=(a8*a12);
  a20=(a20-a12);
  a14=(a6*a20);
  a15=(a11+a11);
  a5=(a5/a17);
  a4=arg[1] ? arg[1][17] : 0;
  a4=(a8*a4);
  a23=(a23-a4);
  a10=(a16*a23);
  a22=arg[1] ? arg[1][16] : 0;
  a22=(a8*a22);
  a26=(a26-a22);
  a3=(a13*a26);
  a10=(a10+a3);
  a11=(a11*a20);
  a10=(a10+a11);
  a5=(a5*a10);
  a17=(a17+a17);
  a5=(a5/a17);
  a15=(a15*a5);
  a14=(a14+a15);
  a21=(a21-a14);
  if (res[0]!=0) res[0][6]=a21;
  a26=(a6*a26);
  a13=(a13+a13);
  a13=(a13*a5);
  a26=(a26+a13);
  a27=(a27-a26);
  if (res[0]!=0) res[0][7]=a27;
  a6=(a6*a23);
  a16=(a16+a16);
  a16=(a16*a5);
  a6=(a6+a16);
  a19=(a19-a6);
  if (res[0]!=0) res[0][8]=a19;
  a19=arg[1] ? arg[1][6] : 0;
  if (res[0]!=0) res[0][9]=a19;
  a19=arg[1] ? arg[1][7] : 0;
  if (res[0]!=0) res[0][10]=a19;
  a19=arg[1] ? arg[1][8] : 0;
  if (res[0]!=0) res[0][11]=a19;
  a19=arg[0] ? arg[0][18] : 0;
  a7=(a19-a7);
  a16=casadi_sq(a7);
  a5=arg[0] ? arg[0][19] : 0;
  a18=(a5-a18);
  a23=casadi_sq(a18);
  a16=(a16+a23);
  a23=arg[0] ? arg[0][20] : 0;
  a24=(a23-a24);
  a27=casadi_sq(a24);
  a16=(a16+a27);
  a16=sqrt(a16);
  a27=(a1/a16);
  a13=(a0-a27);
  a21=arg[1] ? arg[1][21] : 0;
  a21=(a8*a21);
  a12=(a12-a21);
  a15=(a13*a12);
  a17=(a7+a7);
  a27=(a27/a16);
  a10=arg[1] ? arg[1][23] : 0;
  a10=(a8*a10);
  a4=(a4-a10);
  a11=(a24*a4);
  a20=arg[1] ? arg[1][22] : 0;
  a20=(a8*a20);
  a22=(a22-a20);
  a3=(a18*a22);
  a11=(a11+a3);
  a7=(a7*a12);
  a11=(a11+a7);
  a27=(a27*a11);
  a16=(a16+a16);
  a27=(a27/a16);
  a17=(a17*a27);
  a15=(a15+a17);
  a14=(a14-a15);
  if (res[0]!=0) res[0][12]=a14;
  a22=(a13*a22);
  a18=(a18+a18);
  a18=(a18*a27);
  a22=(a22+a18);
  a26=(a26-a22);
  if (res[0]!=0) res[0][13]=a26;
  a13=(a13*a4);
  a24=(a24+a24);
  a24=(a24*a27);
  a13=(a13+a24);
  a6=(a6-a13);
  if (res[0]!=0) res[0][14]=a6;
  a6=arg[1] ? arg[1][12] : 0;
  if (res[0]!=0) res[0][15]=a6;
  a6=arg[1] ? arg[1][13] : 0;
  if (res[0]!=0) res[0][16]=a6;
  a6=arg[1] ? arg[1][14] : 0;
  if (res[0]!=0) res[0][17]=a6;
  a6=arg[0] ? arg[0][24] : 0;
  a19=(a6-a19);
  a24=casadi_sq(a19);
  a27=arg[0] ? arg[0][25] : 0;
  a5=(a27-a5);
  a4=casadi_sq(a5);
  a24=(a24+a4);
  a4=arg[0] ? arg[0][26] : 0;
  a23=(a4-a23);
  a26=casadi_sq(a23);
  a24=(a24+a26);
  a24=sqrt(a24);
  a26=(a1/a24);
  a18=(a0-a26);
  a14=arg[1] ? arg[1][27] : 0;
  a14=(a8*a14);
  a21=(a21-a14);
  a17=(a18*a21);
  a16=(a19+a19);
  a26=(a26/a24);
  a11=arg[1] ? arg[1][29] : 0;
  a11=(a8*a11);
  a10=(a10-a11);
  a7=(a23*a10);
  a12=arg[1] ? arg[1][28] : 0;
  a12=(a8*a12);
  a20=(a20-a12);
  a3=(a5*a20);
  a7=(a7+a3);
  a19=(a19*a21);
  a7=(a7+a19);
  a26=(a26*a7);
  a24=(a24+a24);
  a26=(a26/a24);
  a16=(a16*a26);
  a17=(a17+a16);
  a15=(a15-a17);
  if (res[0]!=0) res[0][18]=a15;
  a20=(a18*a20);
  a5=(a5+a5);
  a5=(a5*a26);
  a20=(a20+a5);
  a22=(a22-a20);
  if (res[0]!=0) res[0][19]=a22;
  a18=(a18*a10);
  a23=(a23+a23);
  a23=(a23*a26);
  a18=(a18+a23);
  a13=(a13-a18);
  if (res[0]!=0) res[0][20]=a13;
  a13=arg[1] ? arg[1][18] : 0;
  if (res[0]!=0) res[0][21]=a13;
  a13=arg[1] ? arg[1][19] : 0;
  if (res[0]!=0) res[0][22]=a13;
  a13=arg[1] ? arg[1][20] : 0;
  if (res[0]!=0) res[0][23]=a13;
  a13=arg[0] ? arg[0][30] : 0;
  a6=(a13-a6);
  a23=casadi_sq(a6);
  a26=arg[0] ? arg[0][31] : 0;
  a27=(a26-a27);
  a10=casadi_sq(a27);
  a23=(a23+a10);
  a10=arg[0] ? arg[0][32] : 0;
  a4=(a10-a4);
  a22=casadi_sq(a4);
  a23=(a23+a22);
  a23=sqrt(a23);
  a22=(a1/a23);
  a5=(a0-a22);
  a15=arg[1] ? arg[1][33] : 0;
  a15=(a8*a15);
  a14=(a14-a15);
  a16=(a5*a14);
  a24=(a6+a6);
  a22=(a22/a23);
  a7=arg[1] ? arg[1][35] : 0;
  a7=(a8*a7);
  a11=(a11-a7);
  a19=(a4*a11);
  a21=arg[1] ? arg[1][34] : 0;
  a8=(a8*a21);
  a12=(a12-a8);
  a21=(a27*a12);
  a19=(a19+a21);
  a6=(a6*a14);
  a19=(a19+a6);
  a22=(a22*a19);
  a23=(a23+a23);
  a22=(a22/a23);
  a24=(a24*a22);
  a16=(a16+a24);
  a17=(a17-a16);
  if (res[0]!=0) res[0][24]=a17;
  a12=(a5*a12);
  a27=(a27+a27);
  a27=(a27*a22);
  a12=(a12+a27);
  a20=(a20-a12);
  if (res[0]!=0) res[0][25]=a20;
  a5=(a5*a11);
  a4=(a4+a4);
  a4=(a4*a22);
  a5=(a5+a4);
  a18=(a18-a5);
  if (res[0]!=0) res[0][26]=a18;
  a18=arg[1] ? arg[1][24] : 0;
  if (res[0]!=0) res[0][27]=a18;
  a18=arg[1] ? arg[1][25] : 0;
  if (res[0]!=0) res[0][28]=a18;
  a18=arg[1] ? arg[1][26] : 0;
  if (res[0]!=0) res[0][29]=a18;
  a18=arg[0] ? arg[0][36] : 0;
  a18=(a18-a13);
  a13=casadi_sq(a18);
  a4=arg[0] ? arg[0][37] : 0;
  a4=(a4-a26);
  a26=casadi_sq(a4);
  a13=(a13+a26);
  a26=arg[0] ? arg[0][38] : 0;
  a26=(a26-a10);
  a10=casadi_sq(a26);
  a13=(a13+a10);
  a13=sqrt(a13);
  a1=(a1/a13);
  a0=(a0-a1);
  a10=(a0*a15);
  a22=(a18+a18);
  a1=(a1/a13);
  a11=(a26*a7);
  a20=(a4*a8);
  a11=(a11+a20);
  a18=(a18*a15);
  a11=(a11+a18);
  a1=(a1*a11);
  a13=(a13+a13);
  a1=(a1/a13);
  a22=(a22*a1);
  a10=(a10+a22);
  a16=(a16-a10);
  if (res[0]!=0) res[0][30]=a16;
  a8=(a0*a8);
  a4=(a4+a4);
  a4=(a4*a1);
  a8=(a8+a4);
  a12=(a12-a8);
  if (res[0]!=0) res[0][31]=a12;
  a0=(a0*a7);
  a26=(a26+a26);
  a26=(a26*a1);
  a0=(a0+a26);
  a5=(a5-a0);
  if (res[0]!=0) res[0][32]=a5;
  a5=arg[1] ? arg[1][30] : 0;
  if (res[0]!=0) res[0][33]=a5;
  a5=arg[1] ? arg[1][31] : 0;
  if (res[0]!=0) res[0][34]=a5;
  a5=arg[1] ? arg[1][32] : 0;
  if (res[0]!=0) res[0][35]=a5;
  if (res[0]!=0) res[0][36]=a10;
  if (res[0]!=0) res[0][37]=a8;
  if (res[0]!=0) res[0][38]=a0;
  a0=arg[1] ? arg[1][36] : 0;
  if (res[0]!=0) res[0][39]=a0;
  a0=arg[1] ? arg[1][37] : 0;
  if (res[0]!=0) res[0][40]=a0;
  a0=arg[1] ? arg[1][38] : 0;
  if (res[0]!=0) res[0][41]=a0;
  a0=arg[1] ? arg[1][39] : 0;
  if (res[0]!=0) res[0][42]=a0;
  a0=arg[1] ? arg[1][40] : 0;
  if (res[0]!=0) res[0][43]=a0;
  a0=arg[1] ? arg[1][41] : 0;
  if (res[0]!=0) res[0][44]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int vde_adj_chain_nm8(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void vde_adj_chain_nm8_incref(void) {
}

CASADI_SYMBOL_EXPORT void vde_adj_chain_nm8_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int vde_adj_chain_nm8_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int vde_adj_chain_nm8_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* vde_adj_chain_nm8_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* vde_adj_chain_nm8_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* vde_adj_chain_nm8_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* vde_adj_chain_nm8_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int vde_adj_chain_nm8_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
