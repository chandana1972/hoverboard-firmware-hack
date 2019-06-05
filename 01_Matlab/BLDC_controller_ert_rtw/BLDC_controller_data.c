/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BLDC_controller_data.c
 *
 * Code generated for Simulink model 'BLDC_controller'.
 *
 * Model version                  : 1.877
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Wed Jun  5 22:29:28 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "BLDC_controller.h"

/* Constant parameters (auto storage) */
const ConstP rtConstP = {
  /* Computed Parameter: r_trapPhaA_M1_Table
   * Referenced by: '<S18>/r_trapPhaA_M1'
   */
  { 1000, 1000, 1000, -1000, -1000, -1000, 1000 },

  /* Computed Parameter: r_trapPhaB_M1_Table
   * Referenced by: '<S18>/r_trapPhaB_M1'
   */
  { -1000, -1000, 1000, 1000, 1000, -1000, -1000 },

  /* Computed Parameter: r_trapPhaC_M1_Table
   * Referenced by: '<S18>/r_trapPhaC_M1'
   */
  { 1000, -1000, -1000, -1000, 1000, 1000, 1000 },

  /* Computed Parameter: r_sinPhaA_M1_Table
   * Referenced by: '<S19>/r_sinPhaA_M1'
   */
  { 500, 643, 766, 866, 940, 985, 1000, 985, 940, 866, 766, 643, 500, 342, 174,
    0, -174, -342, -500, -643, -766, -866, -940, -985, -1000, -985, -940, -866,
    -766, -643, -500, -342, -174, 0, 174, 342, 500 },

  /* Computed Parameter: r_sinPhaB_M1_Table
   * Referenced by: '<S19>/r_sinPhaB_M1'
   */
  { -1000, -985, -940, -866, -766, -643, -500, -342, -174, 0, 174, 342, 500, 643,
    766, 866, 940, 985, 1000, 985, 940, 866, 766, 643, 500, 342, 174, 0, -174,
    -342, -500, -643, -766, -866, -940, -985, -1000 },

  /* Computed Parameter: r_sinPhaC_M1_Table
   * Referenced by: '<S19>/r_sinPhaC_M1'
   */
  { 500, 342, 174, 0, -174, -342, -500, -643, -766, -866, -940, -985, -1000,
    -985, -940, -866, -766, -643, -500, -342, -174, 0, 174, 342, 500, 643, 766,
    866, 940, 985, 1000, 985, 940, 866, 766, 643, 500 },

  /* Computed Parameter: r_sin3PhaA_M1_Table
   * Referenced by: '<S20>/r_sin3PhaA_M1'
   */
  { 795, 930, 991, 996, 971, 942, 930, 942, 971, 996, 991, 930, 795, 584, 310, 0,
    -310, -584, -795, -930, -991, -996, -971, -942, -930, -942, -971, -996, -991,
    -930, -795, -584, -310, 0, 310, 584, 795 },

  /* Computed Parameter: r_sin3PhaB_M1_Table
   * Referenced by: '<S20>/r_sin3PhaB_M1'
   */
  { -930, -942, -971, -996, -991, -930, -795, -584, -310, 0, 310, 584, 795, 930,
    991, 996, 971, 942, 930, 942, 971, 996, 991, 930, 795, 584, 310, 0, -310,
    -584, -795, -930, -991, -996, -971, -942, -930 },

  /* Computed Parameter: r_sin3PhaC_M1_Table
   * Referenced by: '<S20>/r_sin3PhaC_M1'
   */
  { 795, 584, 310, 0, -310, -584, -795, -930, -991, -996, -971, -942, -930, -942,
    -971, -996, -991, -930, -795, -584, -310, 0, 310, 584, 795, 930, 991, 996,
    971, 942, 930, 942, 971, 996, 991, 930, 795 },

  /* Computed Parameter: z_commutMap_M1_table
   * Referenced by: '<S10>/z_commutMap_M1'
   */
  { 1000, -1000, 0, 1000, 0, -1000, 0, 1000, -1000, -1000, 1000, 0, -1000, 0,
    1000, 0, -1000, 1000 },

  /* Computed Parameter: vec_hallToPos_Value
   * Referenced by: '<S12>/vec_hallToPos'
   */
  { 0, 5, 3, 4, 1, 0, 2, 0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
