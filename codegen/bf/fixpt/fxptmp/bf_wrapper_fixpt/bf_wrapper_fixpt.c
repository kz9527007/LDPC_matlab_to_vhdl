/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bf_wrapper_fixpt.c
 *
 * Code generation for function 'bf_wrapper_fixpt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "bf_fixpt_logger.h"
#include "bf_wrapper_fixpt.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 10,    /* lineNo */
  "bf_wrapper_fixpt",                  /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/bf_wrapper_fixpt.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 28,  /* lineNo */
  "bf_fixpt",                          /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/bf_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "bf_fixpt",                          /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/bf_fixpt.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

/* Function Definitions */
void bf_wrapper_fixpt(const emlrtStack *sp, const real_T r[7], real_T iter,
                      real_T out[7])
{
  int32_T i0;
  real_T d0;
  uint8_T r_in[7];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  for (i0 = 0; i0 < 7; i0++) {
    d0 = muDoubleScalarFloor(r[i0]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 2.0);
    }

    r_in[i0] = (uint8_T)((uint8_T)(int8_T)d0 & 1);
  }

  st.site = &emlrtRSI;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  file name:    bf.m */
  /*  description:  out = bf(r,H,n) performs bit-flipping decoding for an ldpc code specified by the parity-check matrix H, */
  /*                where r is the received binary sequence, and n the number of decoding iterations. */
  /*  algorithm:    bit flipping decoding */
  /*  author:       y. jiang  */
  /*  date:         june 2010 */
  /*  revision:     1.0 */
  b_st.site = &b_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  d0 = muDoubleScalarFloor(iter);
  if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
    d0 = 0.0;
  } else {
    d0 = muDoubleScalarRem(d0, 128.0);
  }

  c_st.site = &g_emlrtRSI;
  b_bf_fixpt_logger(&c_st, r_in, (uint8_T)((uint8_T)(int8_T)d0 & 127), r_in);
  for (i0 = 0; i0 < 7; i0++) {
    out[i0] = r_in[i0];
  }
}

/* End of code generation (bf_wrapper_fixpt.c) */