/*
 * File: FMS.c
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.1006
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Aug 21 08:40:05 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FMS.h"
#include "FMS_private.h"

/* Named constants for Chart: '<S1>/Control_Mode' */
#define FMS_IN_Acro                    ((uint8_T)1U)
#define FMS_IN_Altitude_Hold           ((uint8_T)2U)
#define FMS_IN_Manual                  ((uint8_T)3U)
#define FMS_IN_Mission                 ((uint8_T)4U)
#define FMS_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define FMS_IN_Position                ((uint8_T)5U)
#define FMS_IN_Unknow                  ((uint8_T)6U)

/* Named constants for Chart: '<S20>/Motion_State' */
#define FMS_IN_Brake                   ((uint8_T)1U)
#define FMS_IN_Hold                    ((uint8_T)2U)
#define FMS_IN_Move                    ((uint8_T)3U)

/* Named constants for Chart: '<S2>/State_Management' */
#define FMS_IN_Arm                     ((uint8_T)1U)
#define FMS_IN_Disarm                  ((uint8_T)2U)
#define FMS_IN_Motor_Test              ((uint8_T)3U)
#define FMS_IN_Standby                 ((uint8_T)4U)

/* Named constants for Chart: '<S89>/Arm_Event' */
#define FMS_IN_Idle                    ((uint8_T)1U)
#define FMS_IN_arm_event               ((uint8_T)2U)
#define FMS_IN_ready                   ((uint8_T)3U)

/* Named constants for Chart: '<S89>/Disarm_Event' */
#define FMS_IN_Disarm_d                ((uint8_T)1U)
#define FMS_IN_Idle_b                  ((uint8_T)2U)
#define FMS_IN_On_Ground               ((uint8_T)3U)

const FMS_Out_Bus FMS_rtZFMS_Out_Bus = {
  0U,                                  /* timestamp */
  0.0F,                                /* p_cmd */
  0.0F,                                /* q_cmd */
  0.0F,                                /* r_cmd */
  0.0F,                                /* phi_cmd */
  0.0F,                                /* theta_cmd */
  0.0F,                                /* psi_rate_cmd */
  0.0F,                                /* u_cmd */
  0.0F,                                /* v_cmd */
  0.0F,                                /* w_cmd */
  0U,                                  /* throttle_cmd */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  ,                                    /* actuator_cmd */
  0U,                                  /* state */
  0U,                                  /* mode */
  0U,                                  /* reset */
  0U                                   /* reserved */
} ;                                    /* FMS_Out_Bus ground */

/* Exported block parameters */
struct_5vUBwe4VfGkNikzOx8lYKF FMS_PARAM = {
  0.15F,
  0.15F,
  0.1F,
  0.1F,
  0.95F,
  1.0F,
  5.0F,
  2.5F,
  2.5F,
  1.04719758F,
  0.52359879F
} ;                                    /* Variable: FMS_PARAM
                                        * Referenced by:
                                        *   '<S12>/Gain'
                                        *   '<S12>/Gain1'
                                        *   '<S106>/Constant'
                                        *   '<S106>/Dead Zone'
                                        *   '<S107>/Constant'
                                        *   '<S107>/Dead Zone'
                                        *   '<S108>/Constant'
                                        *   '<S108>/Dead Zone'
                                        *   '<S109>/Constant'
                                        *   '<S109>/Dead Zone'
                                        *   '<S21>/Saturation'
                                        *   '<S46>/Saturation'
                                        *   '<S46>/Saturation1'
                                        *   '<S28>/Gain2'
                                        *   '<S29>/Gain1'
                                        *   '<S65>/Gain1'
                                        *   '<S65>/Gain5'
                                        *   '<S65>/Gain6'
                                        *   '<S66>/Gain1'
                                        *   '<S66>/Gain2'
                                        *   '<S66>/Gain4'
                                        *   '<S36>/Dead Zone'
                                        *   '<S36>/Gain'
                                        *   '<S70>/Dead Zone'
                                        *   '<S70>/Gain'
                                        *   '<S71>/Dead Zone'
                                        *   '<S71>/Gain'
                                        *   '<S72>/Dead Zone'
                                        *   '<S72>/Gain'
                                        */

struct_TYt7YeNdxIDXfczXumtXXB FMS_EXPORT = {
  4U,

  { 66, 97, 115, 101, 32, 70, 77, 83, 32, 118, 48, 46, 49, 46, 48, 0 }
} ;                                    /* Variable: FMS_EXPORT
                                        * Referenced by: '<S82>/Constant'
                                        */

/* Block signals (default storage) */
B_FMS_T FMS_B;

/* Block states (default storage) */
DW_FMS_T FMS_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FMS_T FMS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FMS_T FMS_Y;

/* Real-time model */
RT_MODEL_FMS_T FMS_M_;
RT_MODEL_FMS_T *const FMS_M = &FMS_M_;

/* Forward declaration for local functions */
static void FMS_Unknow(const uint32_T *mode);

/* Function for Chart: '<S1>/Control_Mode' */
static void FMS_Unknow(const uint32_T *mode)
{
  FMS_B.control_mode = FMS_DW.local_mode;
  switch (*mode) {
   case 5U:
    FMS_DW.is_c1_FMS = FMS_IN_Acro;
    FMS_DW.local_mode = 5U;
    break;

   case 4U:
    FMS_DW.is_c1_FMS = FMS_IN_Manual;
    FMS_DW.local_mode = 4U;
    break;

   case 3U:
    FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
    FMS_DW.local_mode = 3U;
    break;

   case 2U:
    FMS_DW.is_c1_FMS = FMS_IN_Position;
    FMS_DW.local_mode = 2U;
    break;

   case 1U:
    FMS_DW.is_c1_FMS = FMS_IN_Mission;
    FMS_DW.local_mode = 1U;
    break;

   default:
    FMS_DW.is_c1_FMS = FMS_IN_Unknow;
    FMS_DW.local_mode = 0U;
    break;
  }
}

/* Model step function */
void FMS_step(void)
{
  real32_T rtb_a_a;
  real32_T rtb_Transpose[9];
  real32_T rtb_MatrixConcatenate3[3];
  uint16_T rtb_Divide_n;
  boolean_T rtb_LogicalOperator1;
  real32_T rtb_stick_throttle_raw;
  real32_T rtb_Integrator1_p;
  boolean_T rtb_Compare_nv;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_Compare_cv;
  real32_T rtb_stick_yaw_raw;
  uint8_T rtb_State;
  uint32_T rtb_BusAssignment_timestamp;
  boolean_T rtb_FixPtRelationalOperator_p;
  real32_T rtb_Add_b0;
  boolean_T rtb_LogicalOperator4;
  int32_T rtb_state_p;
  boolean_T rtb_Compare_pm;
  boolean_T rtb_LogicalOperator2;
  int32_T rtb_state;
  int32_T rtb_state_a;
  real32_T rtb_Subtract3_a;
  real32_T rtb_Sign5_g;
  real32_T rtb_Divide_h;
  real32_T rtb_Sign5_k;
  real32_T rtb_Abs_a;
  uint32_T mode;
  int32_T i;
  real32_T rtb_Transpose_0[9];
  real32_T rtb_TmpSignalConversionAtDela_0;
  real32_T rtb_Divide_on_idx_0;
  real32_T rtb_Divide_on_idx_1;
  real32_T rtb_Divide_on_idx_2;
  real32_T rtb_Divide_on_idx_3;
  real32_T y;
  real32_T rtb_a_idx_0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
  /* Sqrt: '<S104>/Sqrt' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Math: '<S104>/Square'
   *  Sum: '<S104>/Sum of Elements'
   */
  rtb_a_a = sqrtf(((FMS_U.INS_Output.quat[0] * FMS_U.INS_Output.quat[0] +
                    FMS_U.INS_Output.quat[1] * FMS_U.INS_Output.quat[1]) +
                   FMS_U.INS_Output.quat[2] * FMS_U.INS_Output.quat[2]) +
                  FMS_U.INS_Output.quat[3] * FMS_U.INS_Output.quat[3]);

  /* Product: '<S100>/Divide' incorporates:
   *  Inport: '<Root>/INS_Output'
   */
  rtb_Divide_on_idx_0 = FMS_U.INS_Output.quat[0] / rtb_a_a;
  rtb_Divide_on_idx_1 = FMS_U.INS_Output.quat[1] / rtb_a_a;
  rtb_Divide_on_idx_2 = FMS_U.INS_Output.quat[2] / rtb_a_a;
  rtb_Divide_on_idx_3 = FMS_U.INS_Output.quat[3] / rtb_a_a;

  /* Math: '<S101>/Square' incorporates:
   *  Math: '<S102>/Square'
   *  Math: '<S103>/Square'
   */
  rtb_Add_b0 = rtb_Divide_on_idx_0 * rtb_Divide_on_idx_0;

  /* Math: '<S101>/Square2' incorporates:
   *  Math: '<S102>/Square2'
   *  Math: '<S103>/Square2'
   */
  rtb_stick_throttle_raw = rtb_Divide_on_idx_2 * rtb_Divide_on_idx_2;

  /* Math: '<S101>/Square1' incorporates:
   *  Math: '<S102>/Square1'
   *  Math: '<S103>/Square1'
   */
  rtb_a_a = rtb_Divide_on_idx_1 * rtb_Divide_on_idx_1;

  /* Math: '<S101>/Square3' incorporates:
   *  Math: '<S102>/Square3'
   *  Math: '<S103>/Square3'
   */
  rtb_stick_yaw_raw = rtb_Divide_on_idx_3 * rtb_Divide_on_idx_3;

  /* Sum: '<S101>/Subtract' incorporates:
   *  Math: '<S101>/Square'
   *  Math: '<S101>/Square1'
   *  Math: '<S101>/Square2'
   *  Math: '<S101>/Square3'
   *  Sum: '<S101>/Add'
   *  Sum: '<S101>/Add1'
   */
  rtb_Transpose[0] = (rtb_Add_b0 + rtb_a_a) - (rtb_stick_throttle_raw +
    rtb_stick_yaw_raw);

  /* Product: '<S101>/Multiply' incorporates:
   *  Product: '<S102>/Multiply'
   */
  rtb_Abs_a = rtb_Divide_on_idx_1 * rtb_Divide_on_idx_2;

  /* Product: '<S101>/Multiply1' incorporates:
   *  Product: '<S102>/Multiply1'
   */
  rtb_Sign5_g = rtb_Divide_on_idx_0 * rtb_Divide_on_idx_3;

  /* Gain: '<S101>/Gain' incorporates:
   *  Product: '<S101>/Multiply'
   *  Product: '<S101>/Multiply1'
   *  Sum: '<S101>/Subtract1'
   */
  rtb_Transpose[1] = (rtb_Abs_a - rtb_Sign5_g) * 2.0F;

  /* Product: '<S101>/Multiply2' incorporates:
   *  Product: '<S103>/Multiply'
   */
  rtb_Integrator1_p = rtb_Divide_on_idx_1 * rtb_Divide_on_idx_3;

  /* Product: '<S101>/Multiply3' incorporates:
   *  Product: '<S103>/Multiply1'
   */
  rtb_TmpSignalConversionAtDela_0 = rtb_Divide_on_idx_0 * rtb_Divide_on_idx_2;

  /* Gain: '<S101>/Gain1' incorporates:
   *  Product: '<S101>/Multiply2'
   *  Product: '<S101>/Multiply3'
   *  Sum: '<S101>/Add2'
   */
  rtb_Transpose[2] = (rtb_Integrator1_p + rtb_TmpSignalConversionAtDela_0) *
    2.0F;

  /* Gain: '<S102>/Gain' incorporates:
   *  Sum: '<S102>/Add3'
   */
  rtb_Transpose[3] = (rtb_Abs_a + rtb_Sign5_g) * 2.0F;

  /* Sum: '<S102>/Subtract' incorporates:
   *  Sum: '<S102>/Add'
   *  Sum: '<S102>/Add1'
   */
  rtb_Transpose[4] = (rtb_Add_b0 + rtb_stick_throttle_raw) - (rtb_a_a +
    rtb_stick_yaw_raw);

  /* Product: '<S102>/Multiply2' incorporates:
   *  Product: '<S103>/Multiply2'
   */
  rtb_Abs_a = rtb_Divide_on_idx_2 * rtb_Divide_on_idx_3;

  /* Product: '<S102>/Multiply3' incorporates:
   *  Product: '<S103>/Multiply3'
   */
  rtb_Sign5_g = rtb_Divide_on_idx_0 * rtb_Divide_on_idx_1;

  /* Gain: '<S102>/Gain1' incorporates:
   *  Product: '<S102>/Multiply2'
   *  Product: '<S102>/Multiply3'
   *  Sum: '<S102>/Subtract1'
   */
  rtb_Transpose[5] = (rtb_Abs_a - rtb_Sign5_g) * 2.0F;

  /* Gain: '<S103>/Gain' incorporates:
   *  Sum: '<S103>/Subtract2'
   */
  rtb_Transpose[6] = (rtb_Integrator1_p - rtb_TmpSignalConversionAtDela_0) *
    2.0F;

  /* Gain: '<S103>/Gain1' incorporates:
   *  Sum: '<S103>/Add2'
   */
  rtb_Transpose[7] = (rtb_Abs_a + rtb_Sign5_g) * 2.0F;

  /* Sum: '<S103>/Subtract' incorporates:
   *  Sum: '<S103>/Add'
   *  Sum: '<S103>/Add1'
   */
  rtb_Transpose[8] = (rtb_Add_b0 + rtb_stick_yaw_raw) - (rtb_a_a +
    rtb_stick_throttle_raw);

  /* Math: '<S84>/Transpose' */
  for (i = 0; i < 3; i++) {
    rtb_Transpose_0[3 * i] = rtb_Transpose[i];
    rtb_Transpose_0[1 + 3 * i] = rtb_Transpose[i + 3];
    rtb_Transpose_0[2 + 3 * i] = rtb_Transpose[i + 6];
  }

  for (i = 0; i < 9; i++) {
    rtb_Transpose[i] = rtb_Transpose_0[i];
  }

  /* End of Math: '<S84>/Transpose' */

  /* Product: '<S84>/Multiply' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  SignalConversion: '<S84>/ConcatBufferAtMatrix Concatenate3In1'
   *  SignalConversion: '<S84>/ConcatBufferAtMatrix Concatenate3In2'
   *  SignalConversion: '<S84>/ConcatBufferAtMatrix Concatenate3In3'
   */
  for (i = 0; i < 3; i++) {
    rtb_MatrixConcatenate3[i] = rtb_Transpose[i + 6] * FMS_U.INS_Output.az +
      (rtb_Transpose[i + 3] * FMS_U.INS_Output.ay + rtb_Transpose[i] *
       FMS_U.INS_Output.ax);
  }

  /* End of Product: '<S84>/Multiply' */

  /* DiscreteIntegrator: '<S96>/Discrete-Time Integrator5' */
  if (FMS_DW.DiscreteTimeIntegrator5_IC_LOAD != 0) {
    FMS_DW.DiscreteTimeIntegrator5_DSTATE = rtb_MatrixConcatenate3[2];
  }

  /* Product: '<S84>/Divide' incorporates:
   *  Inport: '<Root>/Control_Out'
   *  Sum: '<S84>/Sum of Elements'
   */
  rtb_Divide_n = (uint16_T)((uint32_T)(uint16_T)((((uint32_T)
    FMS_U.Control_Out.actuator_cmd[0] + FMS_U.Control_Out.actuator_cmd[1]) +
    FMS_U.Control_Out.actuator_cmd[2]) + FMS_U.Control_Out.actuator_cmd[3]) >> 2);

  /* DiscreteIntegrator: '<S97>/Discrete-Time Integrator5' incorporates:
   *  DataTypeConversion: '<S97>/Data Type Conversion'
   */
  if (FMS_DW.DiscreteTimeIntegrator5_IC_LO_n != 0) {
    FMS_DW.DiscreteTimeIntegrator5_DSTAT_n = rtb_Divide_n;
  }

  /* Logic: '<S84>/Logical Operator1' incorporates:
   *  Constant: '<S95>/Constant'
   *  Constant: '<S98>/Lower Limit'
   *  Constant: '<S98>/Upper Limit'
   *  DiscreteIntegrator: '<S96>/Discrete-Time Integrator5'
   *  DiscreteIntegrator: '<S97>/Discrete-Time Integrator5'
   *  Logic: '<S98>/AND'
   *  RelationalOperator: '<S95>/Compare'
   *  RelationalOperator: '<S98>/Lower Test'
   *  RelationalOperator: '<S98>/Upper Test'
   */
  rtb_LogicalOperator1 = ((-10.806F <= FMS_DW.DiscreteTimeIntegrator5_DSTATE) &&
    (FMS_DW.DiscreteTimeIntegrator5_DSTATE <= -8.806F) &&
    (FMS_DW.DiscreteTimeIntegrator5_DSTAT_n < 1200.0F));

  /* Saturate: '<S86>/Saturation2' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.rs_lr > 1.0F) {
    rtb_Divide_on_idx_2 = 1.0F;
  } else if (FMS_U.Pilot_Cmd.rs_lr < -1.0F) {
    rtb_Divide_on_idx_2 = -1.0F;
  } else {
    rtb_Divide_on_idx_2 = FMS_U.Pilot_Cmd.rs_lr;
  }

  /* End of Saturate: '<S86>/Saturation2' */

  /* Saturate: '<S86>/Saturation3' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.rs_ud > 1.0F) {
    rtb_Divide_on_idx_3 = 1.0F;
  } else if (FMS_U.Pilot_Cmd.rs_ud < -1.0F) {
    rtb_Divide_on_idx_3 = -1.0F;
  } else {
    rtb_Divide_on_idx_3 = FMS_U.Pilot_Cmd.rs_ud;
  }

  /* End of Saturate: '<S86>/Saturation3' */

  /* Saturate: '<S86>/Saturation1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.ls_ud > 1.0F) {
    rtb_stick_throttle_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.ls_ud < -1.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    rtb_stick_throttle_raw = FMS_U.Pilot_Cmd.ls_ud;
  }

  /* End of Saturate: '<S86>/Saturation1' */

  /* Chart: '<S89>/Arm_Event' */
  if (FMS_DW.is_active_c5_FMS == 0U) {
    FMS_DW.is_active_c5_FMS = 1U;
    FMS_DW.is_c5_FMS = FMS_IN_Idle;
    FMS_B.arm_event = 0.0;
  } else {
    switch (FMS_DW.is_c5_FMS) {
     case FMS_IN_Idle:
      FMS_B.arm_event = 0.0;
      if ((rtb_stick_throttle_raw < -0.8) && (rtb_Divide_on_idx_2 < -0.8) &&
          (rtb_Divide_on_idx_3 < -0.8)) {
        FMS_DW.is_c5_FMS = FMS_IN_ready;
      }
      break;

     case FMS_IN_arm_event:
      FMS_DW.is_c5_FMS = FMS_IN_Idle;
      FMS_B.arm_event = 0.0;
      break;

     default:
      if ((fabsf(rtb_Divide_on_idx_2) < 0.15) && (fabsf(rtb_Divide_on_idx_3) <
           0.15)) {
        FMS_DW.is_c5_FMS = FMS_IN_arm_event;
        FMS_B.arm_event = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S89>/Arm_Event' */

  /* Chart: '<S89>/Disarm_Event' incorporates:
   *  Delay: '<Root>/Delay'
   */
  if (FMS_DW.temporalCounter_i1 < 511U) {
    FMS_DW.temporalCounter_i1++;
  }

  if (FMS_DW.is_active_c12_FMS == 0U) {
    FMS_DW.is_active_c12_FMS = 1U;
    FMS_DW.is_c12_FMS = FMS_IN_Idle_b;
    FMS_B.disarm_event = 0.0;
  } else {
    switch (FMS_DW.is_c12_FMS) {
     case FMS_IN_Disarm_d:
      FMS_DW.is_c12_FMS = FMS_IN_Idle_b;
      FMS_B.disarm_event = 0.0;
      break;

     case FMS_IN_Idle_b:
      FMS_B.disarm_event = 0.0;
      if (rtb_LogicalOperator1 && (FMS_Y.FMS_Output.state == 2)) {
        FMS_DW.is_c12_FMS = FMS_IN_On_Ground;
        FMS_DW.temporalCounter_i1 = 0U;
      }
      break;

     default:
      if (!rtb_LogicalOperator1) {
        FMS_DW.is_c12_FMS = FMS_IN_Idle_b;
        FMS_B.disarm_event = 0.0;
      } else {
        if (FMS_DW.temporalCounter_i1 >= 375U) {
          FMS_DW.is_c12_FMS = FMS_IN_Disarm_d;
          FMS_B.disarm_event = 1.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S89>/Disarm_Event' */

  /* Logic: '<S89>/Logical Operator' */
  rtb_LogicalOperator1 = (FMS_B.arm_event != 0.0);

  /* DeadZone: '<S107>/Dead Zone' */
  if (rtb_stick_throttle_raw > FMS_PARAM.THROTTLE_DZ) {
    rtb_Integrator1_p = rtb_stick_throttle_raw - FMS_PARAM.THROTTLE_DZ;
  } else if (rtb_stick_throttle_raw >= -FMS_PARAM.THROTTLE_DZ) {
    rtb_Integrator1_p = 0.0F;
  } else {
    rtb_Integrator1_p = rtb_stick_throttle_raw - (-FMS_PARAM.THROTTLE_DZ);
  }

  /* End of DeadZone: '<S107>/Dead Zone' */

  /* Signum: '<S107>/Sign' */
  if (rtb_Integrator1_p < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else if (rtb_Integrator1_p > 0.0F) {
    rtb_Add_b0 = 1.0F;
  } else {
    rtb_Add_b0 = rtb_Integrator1_p;
  }

  /* End of Signum: '<S107>/Sign' */

  /* Sum: '<S107>/Add' incorporates:
   *  Constant: '<S107>/Constant'
   *  Product: '<S107>/Multiply'
   */
  rtb_a_a = rtb_Add_b0 * FMS_PARAM.THROTTLE_DZ + rtb_Integrator1_p;

  /* DeadZone: '<S109>/Dead Zone' */
  if (rtb_Divide_on_idx_3 > FMS_PARAM.PITCH_DZ) {
    rtb_Integrator1_p = rtb_Divide_on_idx_3 - FMS_PARAM.PITCH_DZ;
  } else if (rtb_Divide_on_idx_3 >= -FMS_PARAM.PITCH_DZ) {
    rtb_Integrator1_p = 0.0F;
  } else {
    rtb_Integrator1_p = rtb_Divide_on_idx_3 - (-FMS_PARAM.PITCH_DZ);
  }

  /* End of DeadZone: '<S109>/Dead Zone' */

  /* Signum: '<S109>/Sign' */
  if (rtb_Integrator1_p < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else if (rtb_Integrator1_p > 0.0F) {
    rtb_Add_b0 = 1.0F;
  } else {
    rtb_Add_b0 = rtb_Integrator1_p;
  }

  /* End of Signum: '<S109>/Sign' */

  /* Sum: '<S109>/Add' incorporates:
   *  Constant: '<S109>/Constant'
   *  Product: '<S109>/Multiply'
   */
  rtb_Divide_on_idx_0 = rtb_Add_b0 * FMS_PARAM.PITCH_DZ + rtb_Integrator1_p;

  /* DeadZone: '<S108>/Dead Zone' */
  if (rtb_Divide_on_idx_2 > FMS_PARAM.ROLL_DZ) {
    rtb_Integrator1_p = rtb_Divide_on_idx_2 - FMS_PARAM.ROLL_DZ;
  } else if (rtb_Divide_on_idx_2 >= -FMS_PARAM.ROLL_DZ) {
    rtb_Integrator1_p = 0.0F;
  } else {
    rtb_Integrator1_p = rtb_Divide_on_idx_2 - (-FMS_PARAM.ROLL_DZ);
  }

  /* End of DeadZone: '<S108>/Dead Zone' */

  /* Signum: '<S108>/Sign' */
  if (rtb_Integrator1_p < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else if (rtb_Integrator1_p > 0.0F) {
    rtb_Add_b0 = 1.0F;
  } else {
    rtb_Add_b0 = rtb_Integrator1_p;
  }

  /* End of Signum: '<S108>/Sign' */

  /* Sum: '<S108>/Add' incorporates:
   *  Constant: '<S108>/Constant'
   *  Product: '<S108>/Multiply'
   */
  rtb_Divide_on_idx_1 = rtb_Add_b0 * FMS_PARAM.ROLL_DZ + rtb_Integrator1_p;

  /* RelationalOperator: '<S90>/Compare' incorporates:
   *  Constant: '<S90>/Constant'
   *  Inport: '<Root>/Pilot_Cmd'
   */
  rtb_Compare_nv = (FMS_U.Pilot_Cmd.cmd_1 == 1000U);

  /* RelationalOperator: '<S91>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S91>/Delay Input1'
   *
   * Block description for '<S91>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = ((int32_T)rtb_Compare_nv > (int32_T)
    FMS_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S94>/Constant'
   *  Inport: '<Root>/Pilot_Cmd'
   */
  rtb_Compare_cv = (FMS_U.Pilot_Cmd.cmd_2 == 2000U);

  /* Trigonometry: '<S105>/Trigonometric Function2' incorporates:
   *  Gain: '<S85>/Gain'
   *  Inport: '<Root>/INS_Output'
   *  Trigonometry: '<S105>/Trigonometric Function'
   */
  rtb_Add_b0 = arm_sin_f32(-FMS_U.INS_Output.psi);

  /* Gain: '<S105>/Gain' incorporates:
   *  Trigonometry: '<S105>/Trigonometric Function2'
   */
  rtb_Transpose[3] = -rtb_Add_b0;

  /* Trigonometry: '<S105>/Trigonometric Function' */
  rtb_Transpose[1] = rtb_Add_b0;

  /* Trigonometry: '<S105>/Trigonometric Function1' incorporates:
   *  Gain: '<S85>/Gain'
   *  Inport: '<Root>/INS_Output'
   *  Trigonometry: '<S105>/Trigonometric Function3'
   */
  rtb_Add_b0 = arm_cos_f32(-FMS_U.INS_Output.psi);
  rtb_Transpose[0] = rtb_Add_b0;

  /* Trigonometry: '<S105>/Trigonometric Function3' */
  rtb_Transpose[4] = rtb_Add_b0;

  /* Constant: '<S105>/Constant4' */
  rtb_Transpose[5] = 0.0F;

  /* Constant: '<S105>/Constant3' */
  rtb_Transpose[2] = 0.0F;

  /* Constant: '<S105>/Constant' */
  rtb_Transpose[8] = 1.0F;

  /* Constant: '<S105>/Constant1' */
  rtb_Transpose[7] = 0.0F;

  /* Constant: '<S105>/Constant2' */
  rtb_Transpose[6] = 0.0F;

  /* Saturate: '<S86>/Saturation' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  if (FMS_U.Pilot_Cmd.ls_lr > 1.0F) {
    rtb_stick_yaw_raw = 1.0F;
  } else if (FMS_U.Pilot_Cmd.ls_lr < -1.0F) {
    rtb_stick_yaw_raw = -1.0F;
  } else {
    rtb_stick_yaw_raw = FMS_U.Pilot_Cmd.ls_lr;
  }

  /* End of Saturate: '<S86>/Saturation' */

  /* DeadZone: '<S106>/Dead Zone' */
  if (rtb_stick_yaw_raw > FMS_PARAM.YAW_DZ) {
    rtb_Integrator1_p = rtb_stick_yaw_raw - FMS_PARAM.YAW_DZ;
  } else if (rtb_stick_yaw_raw >= -FMS_PARAM.YAW_DZ) {
    rtb_Integrator1_p = 0.0F;
  } else {
    rtb_Integrator1_p = rtb_stick_yaw_raw - (-FMS_PARAM.YAW_DZ);
  }

  /* End of DeadZone: '<S106>/Dead Zone' */

  /* Signum: '<S106>/Sign' */
  if (rtb_Integrator1_p < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else if (rtb_Integrator1_p > 0.0F) {
    rtb_Add_b0 = 1.0F;
  } else {
    rtb_Add_b0 = rtb_Integrator1_p;
  }

  /* End of Signum: '<S106>/Sign' */

  /* Sum: '<S106>/Add' incorporates:
   *  Constant: '<S106>/Constant'
   *  Product: '<S106>/Multiply'
   */
  rtb_Add_b0 = rtb_Add_b0 * FMS_PARAM.YAW_DZ + rtb_Integrator1_p;

  /* SignalConversion: '<S86>/TmpSignal ConversionAtSignal Copy4Inport1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  mode = FMS_U.Pilot_Cmd.mode;

  /* Update for DiscreteIntegrator: '<S96>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S96>/Gain'
   *  Sum: '<S96>/Sum5'
   */
  FMS_DW.DiscreteTimeIntegrator5_IC_LOAD = 0U;
  FMS_DW.DiscreteTimeIntegrator5_DSTATE += (rtb_MatrixConcatenate3[2] -
    FMS_DW.DiscreteTimeIntegrator5_DSTATE) * 2.0F * 0.004F;

  /* Update for DiscreteIntegrator: '<S97>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S97>/Gain'
   *  Sum: '<S97>/Sum5'
   */
  FMS_DW.DiscreteTimeIntegrator5_IC_LO_n = 0U;
  FMS_DW.DiscreteTimeIntegrator5_DSTAT_n += ((real32_T)rtb_Divide_n -
    FMS_DW.DiscreteTimeIntegrator5_DSTAT_n) * 10.0F * 0.004F;

  /* Update for UnitDelay: '<S91>/Delay Input1'
   *
   * Block description for '<S91>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE = rtb_Compare_nv;

  /* End of Outputs for SubSystem: '<Root>/Input_Process' */

  /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
  /* Chart: '<S2>/State_Management' incorporates:
   *  Delay: '<Root>/Delay'
   *  Logic: '<S89>/Logical Operator1'
   */
  if (FMS_DW.temporalCounter_i1_g < 8191U) {
    FMS_DW.temporalCounter_i1_g++;
  }

  if (FMS_DW.is_active_c4_FMS == 0U) {
    FMS_DW.is_active_c4_FMS = 1U;
    FMS_DW.is_c4_FMS = FMS_IN_Disarm;
    rtb_State = 0U;
    FMS_B.PWM_Cmd = 1000U;
  } else {
    guard1 = false;
    guard2 = false;
    switch (FMS_DW.is_c4_FMS) {
     case FMS_IN_Arm:
      rtb_State = 2U;

      /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
      if ((FMS_B.disarm_event != 0.0) || rtb_FixPtRelationalOperator) {
        FMS_DW.is_c4_FMS = FMS_IN_Disarm;
        rtb_State = 0U;
        FMS_B.PWM_Cmd = 1000U;
      }

      /* End of Outputs for SubSystem: '<Root>/Input_Process' */
      break;

     case FMS_IN_Disarm:
      rtb_State = 0U;
      if (rtb_Compare_cv && rtb_LogicalOperator1) {
        FMS_DW.is_c4_FMS = FMS_IN_Motor_Test;
        rtb_State = 1U;
      } else {
        if (rtb_LogicalOperator1 && (FMS_Y.FMS_Output.mode > 0)) {
          FMS_DW.is_c4_FMS = FMS_IN_Standby;
          FMS_DW.temporalCounter_i1_g = 0U;
          rtb_State = 1U;
          FMS_B.PWM_Cmd = 1150U;
        }
      }
      break;

     case FMS_IN_Motor_Test:
      rtb_State = 1U;
      if ((!rtb_Compare_cv) || rtb_LogicalOperator1) {
        FMS_DW.is_c4_FMS = FMS_IN_Disarm;
        rtb_State = 0U;
        FMS_B.PWM_Cmd = 1000U;
      } else {
        rtb_Abs_a = roundf((rtb_stick_throttle_raw + 1.0F) * 500.0F);
        if (rtb_Abs_a < 65536.0F) {
          rtb_Divide_n = (uint16_T)rtb_Abs_a;
        } else {
          rtb_Divide_n = MAX_uint16_T;
        }

        rtb_BusAssignment_timestamp = 1000U + rtb_Divide_n;
        if (rtb_BusAssignment_timestamp > 65535U) {
          rtb_BusAssignment_timestamp = 65535U;
        }

        FMS_B.PWM_Cmd = (uint16_T)rtb_BusAssignment_timestamp;
      }
      break;

     default:
      rtb_State = 1U;
      if (FMS_DW.temporalCounter_i1_g >= 7500U) {
        guard1 = true;
      } else if ((rtb_stick_throttle_raw > 0.0F) && (FMS_Y.FMS_Output.mode >= 1)
                 && (FMS_Y.FMS_Output.mode <= 3)) {
        guard2 = true;
      } else if (rtb_LogicalOperator1 || rtb_FixPtRelationalOperator) {
        guard1 = true;
      } else {
        if ((rtb_stick_throttle_raw > -0.7) && (FMS_Y.FMS_Output.mode >= 4) &&
            (FMS_Y.FMS_Output.mode <= 5)) {
          guard2 = true;
        }
      }
      break;
    }

    if (guard2) {
      FMS_DW.is_c4_FMS = FMS_IN_Arm;
      rtb_State = 2U;
    }

    if (guard1) {
      FMS_DW.is_c4_FMS = FMS_IN_Disarm;
      rtb_State = 0U;
      FMS_B.PWM_Cmd = 1000U;
    }
  }

  /* End of Chart: '<S2>/State_Management' */

  /* BusAssignment: '<S2>/Bus Assignment' incorporates:
   *  DiscreteIntegrator: '<S82>/Discrete-Time Integrator'
   */
  rtb_BusAssignment_timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;

  /* Update for DiscreteIntegrator: '<S82>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S82>/Constant'
   */
  FMS_DW.DiscreteTimeIntegrator_DSTATE += FMS_EXPORT.period;

  /* Outputs for Atomic SubSystem: '<Root>/Control_Mode' */
  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  BusAssignment: '<S2>/Bus Assignment'
   *  Constant: '<S54>/Constant'
   */
  rtb_LogicalOperator1 = (rtb_State == 2);

  /* End of Outputs for SubSystem: '<Root>/FMS_State' */

  /* RelationalOperator: '<S60>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S60>/Delay Input1'
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_p = ((int32_T)rtb_LogicalOperator1 > (int32_T)
    FMS_DW.DelayInput1_DSTATE_m);

  /* Chart: '<S1>/Control_Mode' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   *  SignalConversion: '<S86>/TmpSignal ConversionAtSignal Copy4Inport1'
   */
  if (FMS_DW.is_active_c1_FMS == 0U) {
    FMS_DW.is_active_c1_FMS = 1U;

    /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
    switch (FMS_U.Pilot_Cmd.mode) {
     case 5U:
      FMS_DW.is_c1_FMS = FMS_IN_Acro;
      FMS_DW.local_mode = 5U;
      break;

     case 4U:
      FMS_DW.is_c1_FMS = FMS_IN_Manual;
      FMS_DW.local_mode = 4U;
      break;

     case 3U:
      FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
      FMS_DW.local_mode = 3U;
      break;

     case 2U:
      FMS_DW.is_c1_FMS = FMS_IN_Position;
      FMS_DW.local_mode = 2U;
      break;

     case 1U:
      FMS_DW.is_c1_FMS = FMS_IN_Mission;
      FMS_DW.local_mode = 1U;
      break;

     default:
      FMS_DW.is_c1_FMS = FMS_IN_Unknow;
      FMS_DW.local_mode = 0U;
      break;
    }

    /* End of Outputs for SubSystem: '<Root>/Input_Process' */
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    switch (FMS_DW.is_c1_FMS) {
     case FMS_IN_Acro:
      FMS_B.control_mode = FMS_DW.local_mode;

      /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
      switch (FMS_U.Pilot_Cmd.mode) {
       case 5U:
        FMS_DW.is_c1_FMS = FMS_IN_Acro;
        FMS_DW.local_mode = 5U;
        break;

       case 4U:
        FMS_DW.is_c1_FMS = FMS_IN_Manual;
        FMS_DW.local_mode = 4U;
        break;

       case 3U:
        FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
        FMS_DW.local_mode = 3U;
        break;

       case 2U:
        FMS_DW.is_c1_FMS = FMS_IN_Position;
        FMS_DW.local_mode = 2U;
        break;

       case 1U:
        FMS_DW.is_c1_FMS = FMS_IN_Mission;
        FMS_DW.local_mode = 1U;
        break;

       default:
        FMS_DW.is_c1_FMS = FMS_IN_Unknow;
        FMS_DW.local_mode = 0U;
        break;
      }

      /* End of Outputs for SubSystem: '<Root>/Input_Process' */
      break;

     case FMS_IN_Altitude_Hold:
      if ((FMS_U.INS_Output.flag & 128U) != 0U) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          guard1 = true;
        } else {
          /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
          switch (FMS_U.Pilot_Cmd.mode) {
           case 3U:
            FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
            FMS_DW.local_mode = 3U;
            break;

           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }

          /* End of Outputs for SubSystem: '<Root>/Input_Process' */
        }
      } else {
        guard1 = true;
      }
      break;

     case FMS_IN_Manual:
      if ((FMS_U.INS_Output.flag & 4U) != 0U) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          guard2 = true;
        } else {
          /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
          switch (FMS_U.Pilot_Cmd.mode) {
           case 4U:
            FMS_DW.is_c1_FMS = FMS_IN_Manual;
            FMS_DW.local_mode = 4U;
            break;

           case 3U:
            FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
            FMS_DW.local_mode = 3U;
            break;

           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }

          /* End of Outputs for SubSystem: '<Root>/Input_Process' */
        }
      } else {
        guard2 = true;
      }
      break;

     case FMS_IN_Mission:
      if (((FMS_U.INS_Output.flag & 8U) != 0U) && ((FMS_U.INS_Output.flag & 32U)
           != 0U)) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          FMS_DW.is_c1_FMS = FMS_IN_Manual;
          FMS_DW.local_mode = 4U;
        } else if (FMS_U.Pilot_Cmd.mode == 3U) {
          FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
          FMS_DW.local_mode = 3U;
        } else if (FMS_U.Pilot_Cmd.mode == 2U) {
          guard3 = true;
        } else {
          /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
          if (FMS_U.Pilot_Cmd.mode == 1U) {
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
          } else {
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
          }

          /* End of Outputs for SubSystem: '<Root>/Input_Process' */
        }
      } else {
        guard3 = true;
      }
      break;

     case FMS_IN_Position:
      if (((FMS_U.INS_Output.flag & 8U) != 0U) && ((FMS_U.INS_Output.flag & 64U)
           != 0U) && ((FMS_U.INS_Output.flag & 128U) != 0U)) {
        FMS_B.control_mode = FMS_DW.local_mode;
        if (FMS_U.Pilot_Cmd.mode == 5U) {
          FMS_DW.is_c1_FMS = FMS_IN_Acro;
          FMS_DW.local_mode = 5U;
        } else if (FMS_U.Pilot_Cmd.mode == 4U) {
          FMS_DW.is_c1_FMS = FMS_IN_Manual;
          FMS_DW.local_mode = 4U;
        } else if (FMS_U.Pilot_Cmd.mode == 3U) {
          guard4 = true;
        } else {
          /* Outputs for Atomic SubSystem: '<Root>/Input_Process' */
          switch (FMS_U.Pilot_Cmd.mode) {
           case 2U:
            FMS_DW.is_c1_FMS = FMS_IN_Position;
            FMS_DW.local_mode = 2U;
            break;

           case 1U:
            FMS_DW.is_c1_FMS = FMS_IN_Mission;
            FMS_DW.local_mode = 1U;
            break;

           default:
            FMS_DW.is_c1_FMS = FMS_IN_Unknow;
            FMS_DW.local_mode = 0U;
            break;
          }

          /* End of Outputs for SubSystem: '<Root>/Input_Process' */
        }
      } else {
        guard4 = true;
      }
      break;

     default:
      FMS_Unknow(&mode);
      break;
    }

    if (guard4) {
      FMS_DW.is_c1_FMS = FMS_IN_Altitude_Hold;
      FMS_DW.local_mode = 3U;
    }

    if (guard3) {
      FMS_DW.is_c1_FMS = FMS_IN_Position;
      FMS_DW.local_mode = 2U;
    }

    if (guard2) {
      FMS_DW.is_c1_FMS = FMS_IN_Acro;
      FMS_DW.local_mode = 5U;
    }

    if (guard1) {
      FMS_DW.is_c1_FMS = FMS_IN_Manual;
      FMS_DW.local_mode = 4U;
    }
  }

  /* End of Chart: '<S1>/Control_Mode' */

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  rtb_Compare_nv = (rtb_Add_b0 != 0.0F);

  /* Chart: '<S20>/Motion_State' incorporates:
   *  Abs: '<S24>/Abs'
   *  Inport: '<Root>/INS_Output'
   */
  if (FMS_DW.temporalCounter_i1_gq < 255U) {
    FMS_DW.temporalCounter_i1_gq++;
  }

  if (FMS_DW.is_active_c3_FMS == 0U) {
    FMS_DW.is_active_c3_FMS = 1U;
    FMS_DW.is_c3_FMS = FMS_IN_Move;
    rtb_state_p = 0;
  } else {
    switch (FMS_DW.is_c3_FMS) {
     case FMS_IN_Brake:
      rtb_state_p = 1;
      if ((fabsf(FMS_U.INS_Output.r) <= 0.1) || (FMS_DW.temporalCounter_i1_gq >=
           250U)) {
        FMS_DW.is_c3_FMS = FMS_IN_Hold;
        rtb_state_p = 2;
      } else {
        if (rtb_Compare_nv) {
          FMS_DW.is_c3_FMS = FMS_IN_Move;
          rtb_state_p = 0;
        }
      }
      break;

     case FMS_IN_Hold:
      rtb_state_p = 2;
      if (rtb_Compare_nv) {
        FMS_DW.is_c3_FMS = FMS_IN_Move;
        rtb_state_p = 0;
      }
      break;

     default:
      rtb_state_p = 0;
      if (!rtb_Compare_nv) {
        FMS_DW.is_c3_FMS = FMS_IN_Brake;
        FMS_DW.temporalCounter_i1_gq = 0U;
        rtb_state_p = 1;
      }
      break;
    }
  }

  /* End of Chart: '<S20>/Motion_State' */

  /* Logic: '<S49>/Logical Operator' incorporates:
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S52>/Compare'
   */
  rtb_Compare_nv = ((rtb_Divide_on_idx_0 != 0.0F) || (rtb_Divide_on_idx_1 !=
    0.0F));

  /* Chart: '<S47>/XY_Motion_SM' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Math: '<S48>/Math Function'
   *  Math: '<S48>/Math Function1'
   *  Sqrt: '<S48>/Sqrt'
   *  Sum: '<S48>/Add'
   */
  if (FMS_DW.temporalCounter_i1_cu < 1023U) {
    FMS_DW.temporalCounter_i1_cu++;
  }

  if (FMS_DW.is_active_c13_FMS == 0U) {
    FMS_DW.is_active_c13_FMS = 1U;
    FMS_DW.is_c13_FMS = FMS_IN_Move;
    rtb_state_a = 0;
  } else {
    switch (FMS_DW.is_c13_FMS) {
     case FMS_IN_Brake:
      rtb_state_a = 1;
      if ((sqrtf(FMS_U.INS_Output.vn * FMS_U.INS_Output.vn + FMS_U.INS_Output.ve
                 * FMS_U.INS_Output.ve) <= 0.2) || (FMS_DW.temporalCounter_i1_cu
           >= 625U)) {
        FMS_DW.is_c13_FMS = FMS_IN_Hold;
        rtb_state_a = 2;
      } else {
        if (rtb_Compare_nv) {
          FMS_DW.is_c13_FMS = FMS_IN_Move;
          rtb_state_a = 0;
        }
      }
      break;

     case FMS_IN_Hold:
      rtb_state_a = 2;
      if (rtb_Compare_nv) {
        FMS_DW.is_c13_FMS = FMS_IN_Move;
        rtb_state_a = 0;
      }
      break;

     default:
      rtb_state_a = 0;
      if (!rtb_Compare_nv) {
        FMS_DW.is_c13_FMS = FMS_IN_Brake;
        FMS_DW.temporalCounter_i1_cu = 0U;
        rtb_state_a = 1;
      }
      break;
    }
  }

  /* End of Chart: '<S47>/XY_Motion_SM' */

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   */
  rtb_Compare_nv = (rtb_a_a != 0.0F);

  /* Chart: '<S47>/Z_Motion_SM' incorporates:
   *  Abs: '<S48>/Abs'
   *  Inport: '<Root>/INS_Output'
   */
  if (FMS_DW.temporalCounter_i1_c < 511U) {
    FMS_DW.temporalCounter_i1_c++;
  }

  if (FMS_DW.is_active_c10_FMS == 0U) {
    FMS_DW.is_active_c10_FMS = 1U;
    FMS_DW.is_c10_FMS = FMS_IN_Move;
    rtb_state = 0;
  } else {
    switch (FMS_DW.is_c10_FMS) {
     case FMS_IN_Brake:
      rtb_state = 1;
      if ((fabsf(FMS_U.INS_Output.vd) <= 0.15) || (FMS_DW.temporalCounter_i1_c >=
           375U)) {
        FMS_DW.is_c10_FMS = FMS_IN_Hold;
        rtb_state = 2;
      } else {
        if (rtb_Compare_nv) {
          FMS_DW.is_c10_FMS = FMS_IN_Move;
          rtb_state = 0;
        }
      }
      break;

     case FMS_IN_Hold:
      rtb_state = 2;
      if (rtb_Compare_nv) {
        FMS_DW.is_c10_FMS = FMS_IN_Move;
        rtb_state = 0;
      }
      break;

     default:
      rtb_state = 0;
      if (!rtb_Compare_nv) {
        FMS_DW.is_c10_FMS = FMS_IN_Brake;
        FMS_DW.temporalCounter_i1_c = 0U;
        rtb_state = 1;
      }
      break;
    }
  }

  /* End of Chart: '<S47>/Z_Motion_SM' */

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   */
  rtb_Compare_nv = (rtb_state_a == 2);
  rtb_FixPtRelationalOperator = (rtb_state == 2);

  /* Logic: '<S45>/Logical Operator1' incorporates:
   *  Constant: '<S56>/Constant'
   *  Constant: '<S57>/Constant'
   *  RelationalOperator: '<S56>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   */
  rtb_Compare_cv = ((FMS_B.control_mode == 1U) || (FMS_B.control_mode == 2U));

  /* Delay: '<S77>/Delay' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  SignalConversion: '<S77>/TmpSignal ConversionAtDelayInport2'
   */
  if (FMS_DW.icLoad != 0) {
    FMS_DW.Delay_DSTATE_g[0] = FMS_U.INS_Output.x_R;
    FMS_DW.Delay_DSTATE_g[1] = FMS_U.INS_Output.y_R;
  }

  /* End of Delay: '<S77>/Delay' */

  /* Switch: '<S77>/Switch1' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Logic: '<S45>/Logical Operator'
   *  Logic: '<S45>/Logical Operator2'
   *  RelationalOperator: '<S59>/FixPt Relational Operator'
   *  RelationalOperator: '<S61>/FixPt Relational Operator'
   *  SignalConversion: '<S77>/TmpSignal ConversionAtDelayInport2'
   *  UnitDelay: '<S59>/Delay Input1'
   *  UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S59>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare_nv > (int32_T)FMS_DW.DelayInput1_DSTATE_i[0]) ||
      rtb_FixPtRelationalOperator_p || ((int32_T)rtb_Compare_cv > (int32_T)
       FMS_DW.DelayInput1_DSTATE_n)) {
    FMS_DW.Delay_DSTATE_g[0] = FMS_U.INS_Output.x_R;
    FMS_DW.Delay_DSTATE_g[1] = FMS_U.INS_Output.y_R;
  }

  /* End of Switch: '<S77>/Switch1' */

  /* Logic: '<S45>/Logical Operator4' incorporates:
   *  Constant: '<S58>/Constant'
   *  RelationalOperator: '<S58>/Compare'
   */
  rtb_LogicalOperator4 = (rtb_Compare_cv || (FMS_B.control_mode == 3U));

  /* Delay: '<S78>/Delay' incorporates:
   *  Gain: '<S76>/Gain'
   *  Inport: '<Root>/INS_Output'
   */
  if (FMS_DW.icLoad_a != 0) {
    FMS_DW.Delay_DSTATE_f = -FMS_U.INS_Output.h_R;
  }

  /* End of Delay: '<S78>/Delay' */

  /* Switch: '<S78>/Switch1' incorporates:
   *  Gain: '<S76>/Gain'
   *  Inport: '<Root>/INS_Output'
   *  Logic: '<S45>/Logical Operator'
   *  Logic: '<S45>/Logical Operator3'
   *  RelationalOperator: '<S61>/FixPt Relational Operator'
   *  RelationalOperator: '<S62>/FixPt Relational Operator'
   *  UnitDelay: '<S61>/Delay Input1'
   *  UnitDelay: '<S62>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S62>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_FixPtRelationalOperator > (int32_T)
       FMS_DW.DelayInput1_DSTATE_i[1]) || rtb_FixPtRelationalOperator_p ||
      ((int32_T)rtb_LogicalOperator4 > (int32_T)FMS_DW.DelayInput1_DSTATE_p)) {
    FMS_DW.Delay_DSTATE_f = -FMS_U.INS_Output.h_R;
  }

  /* End of Switch: '<S78>/Switch1' */

  /* Sum: '<S75>/Sum' incorporates:
   *  Gain: '<S76>/Gain'
   *  Inport: '<Root>/INS_Output'
   */
  rtb_Abs_a = FMS_DW.Delay_DSTATE_g[0] - FMS_U.INS_Output.x_R;
  rtb_Sign5_g = FMS_DW.Delay_DSTATE_g[1] - FMS_U.INS_Output.y_R;
  rtb_Integrator1_p = FMS_DW.Delay_DSTATE_f - (-FMS_U.INS_Output.h_R);

  /* Product: '<S75>/Multiply' */
  for (i = 0; i < 3; i++) {
    rtb_MatrixConcatenate3[i] = rtb_Transpose[i + 6] * rtb_Integrator1_p +
      (rtb_Transpose[i + 3] * rtb_Sign5_g + rtb_Transpose[i] * rtb_Abs_a);
  }

  /* End of Product: '<S75>/Multiply' */

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   */
  rtb_FixPtRelationalOperator_p = (rtb_state_p == 2);

  /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  BusAssignment: '<S2>/Bus Assignment'
   *  Constant: '<S39>/Constant'
   */
  rtb_Compare_pm = (rtb_State == 2);

  /* End of Outputs for SubSystem: '<Root>/FMS_State' */

  /* Logic: '<S22>/Logical Operator2' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   */
  rtb_LogicalOperator2 = ((FMS_B.control_mode >= 1U) || (FMS_B.control_mode <=
    4U));

  /* Delay: '<S32>/Delay' incorporates:
   *  Inport: '<Root>/INS_Output'
   */
  if (FMS_DW.icLoad_k != 0) {
    FMS_DW.Delay_DSTATE_l = FMS_U.INS_Output.psi;
  }

  /* End of Delay: '<S32>/Delay' */

  /* Switch: '<S32>/Switch1' incorporates:
   *  Inport: '<Root>/INS_Output'
   *  Logic: '<S22>/Logical Operator1'
   *  RelationalOperator: '<S41>/FixPt Relational Operator'
   *  RelationalOperator: '<S42>/FixPt Relational Operator'
   *  RelationalOperator: '<S43>/FixPt Relational Operator'
   *  UnitDelay: '<S41>/Delay Input1'
   *  UnitDelay: '<S42>/Delay Input1'
   *  UnitDelay: '<S43>/Delay Input1'
   *
   * Block description for '<S41>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S42>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S43>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_FixPtRelationalOperator_p > (int32_T)
       FMS_DW.DelayInput1_DSTATE_g) || ((int32_T)rtb_Compare_pm > (int32_T)
       FMS_DW.DelayInput1_DSTATE_c) || ((int32_T)rtb_LogicalOperator2 > (int32_T)
       FMS_DW.DelayInput1_DSTATE_pc)) {
    FMS_DW.Delay_DSTATE_l = FMS_U.INS_Output.psi;
  }

  /* End of Switch: '<S32>/Switch1' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S35>/Constant'
   *  DeadZone: '<S36>/Dead Zone'
   *  Gain: '<S28>/Gain2'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  Switch: '<S29>/Switch1'
   */
  if (rtb_state_p == 2) {
    /* Sum: '<S30>/Sum' incorporates:
     *  Inport: '<Root>/INS_Output'
     */
    rtb_Add_b0 = FMS_DW.Delay_DSTATE_l - FMS_U.INS_Output.psi;

    /* Abs: '<S33>/Abs' */
    rtb_Abs_a = fabsf(rtb_Add_b0);

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Product: '<S33>/Multiply'
     *  RelationalOperator: '<S34>/Compare'
     *  Sum: '<S33>/Subtract'
     */
    if (rtb_Abs_a > 3.14159274F) {
      /* Signum: '<S33>/Sign' */
      if (rtb_Add_b0 < 0.0F) {
        rtb_Add_b0 = -1.0F;
      } else {
        if (rtb_Add_b0 > 0.0F) {
          rtb_Add_b0 = 1.0F;
        }
      }

      /* End of Signum: '<S33>/Sign' */
      rtb_Add_b0 *= rtb_Abs_a - 6.28318548F;
    }

    /* End of Switch: '<S33>/Switch' */
    rtb_Integrator1_p = FMS_PARAM.YAW_P * rtb_Add_b0;
  } else if (rtb_state_p == 1) {
    /* Switch: '<S29>/Switch1' incorporates:
     *  Constant: '<S29>/Constant'
     */
    rtb_Integrator1_p = 0.0F;
  } else {
    if (rtb_Add_b0 > FMS_PARAM.YAW_DZ) {
      /* DeadZone: '<S36>/Dead Zone' incorporates:
       *  Switch: '<S29>/Switch1'
       */
      rtb_Add_b0 -= FMS_PARAM.YAW_DZ;
    } else if (rtb_Add_b0 >= -FMS_PARAM.YAW_DZ) {
      /* DeadZone: '<S36>/Dead Zone' incorporates:
       *  Switch: '<S29>/Switch1'
       */
      rtb_Add_b0 = 0.0F;
    } else {
      /* DeadZone: '<S36>/Dead Zone' incorporates:
       *  Switch: '<S29>/Switch1'
       */
      rtb_Add_b0 -= -FMS_PARAM.YAW_DZ;
    }

    /* Switch: '<S29>/Switch1' incorporates:
     *  DeadZone: '<S36>/Dead Zone'
     *  Gain: '<S29>/Gain1'
     *  Gain: '<S36>/Gain'
     */
    rtb_Integrator1_p = 1.0F / (1.0F - FMS_PARAM.YAW_DZ) * rtb_Add_b0 *
      FMS_PARAM.YAW_RATE_LIM;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Switch: '<S46>/Switch1' incorporates:
   *  Constant: '<S64>/Constant'
   *  DiscreteIntegrator: '<S69>/Integrator1'
   *  Gain: '<S66>/Gain4'
   *  RelationalOperator: '<S64>/Compare'
   */
  if (rtb_state == 2) {
    rtb_Add_b0 = FMS_PARAM.Z_P * rtb_MatrixConcatenate3[2];
  } else {
    rtb_Add_b0 = FMS_DW.Integrator1_DSTATE_l;
  }

  /* End of Switch: '<S46>/Switch1' */

  /* Switch: '<S46>/Switch' incorporates:
   *  Constant: '<S63>/Constant'
   *  DiscreteIntegrator: '<S68>/Integrator1'
   *  Gain: '<S66>/Gain1'
   *  Gain: '<S66>/Gain2'
   *  RelationalOperator: '<S63>/Compare'
   */
  if (rtb_state_a == 2) {
    rtb_TmpSignalConversionAtDela_0 = FMS_PARAM.XY_P * rtb_MatrixConcatenate3[0];
    rtb_Abs_a = FMS_PARAM.XY_P * rtb_MatrixConcatenate3[1];
  } else {
    rtb_TmpSignalConversionAtDela_0 = FMS_DW.Integrator1_DSTATE_f[0];
    rtb_Abs_a = FMS_DW.Integrator1_DSTATE_f[1];
  }

  /* End of Switch: '<S46>/Switch' */

  /* Saturate: '<S46>/Saturation' */
  rtb_Sign5_g = rtb_TmpSignalConversionAtDela_0;
  if (rtb_TmpSignalConversionAtDela_0 > FMS_PARAM.VEL_XY_LIM) {
    rtb_Sign5_g = FMS_PARAM.VEL_XY_LIM;
  } else {
    if (rtb_TmpSignalConversionAtDela_0 < -FMS_PARAM.VEL_XY_LIM) {
      rtb_Sign5_g = -FMS_PARAM.VEL_XY_LIM;
    }
  }

  rtb_TmpSignalConversionAtDela_0 = rtb_Sign5_g;
  rtb_Sign5_g = rtb_Abs_a;
  if (rtb_Abs_a > FMS_PARAM.VEL_XY_LIM) {
    rtb_Sign5_g = FMS_PARAM.VEL_XY_LIM;
  } else {
    if (rtb_Abs_a < -FMS_PARAM.VEL_XY_LIM) {
      rtb_Sign5_g = -FMS_PARAM.VEL_XY_LIM;
    }
  }

  /* End of Saturate: '<S46>/Saturation' */

  /* SwitchCase: '<S1>/Mode_Switch_Case' */
  switch ((int32_T)FMS_B.control_mode) {
   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* BusAssignment: '<S8>/Bus Assignment' incorporates:
     *  BusAssignment: '<S2>/Bus Assignment'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S8>/position_mode'
     *  Delay: '<Root>/Delay'
     *  Product: '<S81>/Multiply'
     *  RelationalOperator: '<S79>/Compare'
     *  SignalConversion: '<S2>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = rtb_BusAssignment_timestamp;

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    for (i = 0; i < 16; i++) {
      /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
      FMS_Y.FMS_Output.actuator_cmd[i] = FMS_B.PWM_Cmd;

      /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    }

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.state = rtb_State;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = (uint8_T)(rtb_State < 2);
    FMS_Y.FMS_Output.reserved = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.mode = 2U;
    FMS_Y.FMS_Output.u_cmd = rtb_TmpSignalConversionAtDela_0;
    FMS_Y.FMS_Output.v_cmd = rtb_Sign5_g;

    /* End of Outputs for SubSystem: '<S1>/Position_Mode' */

    /* Saturate: '<S46>/Saturation1' */
    if (rtb_Add_b0 > FMS_PARAM.VEL_Z_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = FMS_PARAM.VEL_Z_LIM;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    } else if (rtb_Add_b0 < -FMS_PARAM.VEL_Z_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = -FMS_PARAM.VEL_Z_LIM;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    } else {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = rtb_Add_b0;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    }

    /* Saturate: '<S21>/Saturation' */
    if (rtb_Integrator1_p > FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    } else if (rtb_Integrator1_p < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    } else {
      /* Outputs for IfAction SubSystem: '<S1>/Position_Mode' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* BusAssignment: '<S8>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_Integrator1_p;

      /* End of Outputs for SubSystem: '<S1>/Position_Mode' */
    }
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* BusAssignment: '<S5>/Bus Assignment' incorporates:
     *  BusAssignment: '<S2>/Bus Assignment'
     *  Constant: '<S5>/alt_hold_mode'
     *  Constant: '<S79>/Constant'
     *  Delay: '<Root>/Delay'
     *  DiscreteIntegrator: '<S16>/Integrator1'
     *  DiscreteIntegrator: '<S17>/Integrator1'
     *  Product: '<S81>/Multiply'
     *  RelationalOperator: '<S79>/Compare'
     *  SignalConversion: '<S2>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = rtb_BusAssignment_timestamp;

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    for (i = 0; i < 16; i++) {
      /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
      FMS_Y.FMS_Output.actuator_cmd[i] = FMS_B.PWM_Cmd;

      /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    }

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.state = rtb_State;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = (uint8_T)(rtb_State < 2);
    FMS_Y.FMS_Output.reserved = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.mode = 3U;
    FMS_Y.FMS_Output.phi_cmd = FMS_DW.Integrator1_DSTATE_e;
    FMS_Y.FMS_Output.theta_cmd = FMS_DW.Integrator1_DSTATE;

    /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */

    /* Saturate: '<S46>/Saturation1' */
    if (rtb_Add_b0 > FMS_PARAM.VEL_Z_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = FMS_PARAM.VEL_Z_LIM;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    } else if (rtb_Add_b0 < -FMS_PARAM.VEL_Z_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = -FMS_PARAM.VEL_Z_LIM;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    } else {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.w_cmd = rtb_Add_b0;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    }

    /* Saturate: '<S21>/Saturation' */
    if (rtb_Integrator1_p > FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    } else if (rtb_Integrator1_p < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    } else {
      /* Outputs for IfAction SubSystem: '<S1>/Altitude_Hold_Mode' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* BusAssignment: '<S5>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_Integrator1_p;

      /* End of Outputs for SubSystem: '<S1>/Altitude_Hold_Mode' */
    }
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S1>/Stabilize_Mode' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* BusAssignment: '<S9>/Bus Assignment' incorporates:
     *  BusAssignment: '<S2>/Bus Assignment'
     *  Constant: '<S14>/Constant'
     *  Constant: '<S14>/Constant1'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S9>/stabilize_mode'
     *  Delay: '<Root>/Delay'
     *  DiscreteIntegrator: '<S16>/Integrator1'
     *  DiscreteIntegrator: '<S17>/Integrator1'
     *  Gain: '<S14>/Gain'
     *  Product: '<S81>/Multiply'
     *  RelationalOperator: '<S79>/Compare'
     *  SignalConversion: '<S2>/TmpHiddenBufferAtBus AssignmentInport1'
     *  Sum: '<S14>/Add'
     *  Sum: '<S14>/Sum'
     */
    FMS_Y.FMS_Output.timestamp = rtb_BusAssignment_timestamp;

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    for (i = 0; i < 16; i++) {
      /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
      FMS_Y.FMS_Output.actuator_cmd[i] = FMS_B.PWM_Cmd;

      /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    }

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.state = rtb_State;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = (uint8_T)(rtb_State < 2);
    FMS_Y.FMS_Output.reserved = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.mode = 4U;
    FMS_Y.FMS_Output.throttle_cmd = (uint32_T)fmodf(floorf
      ((rtb_stick_throttle_raw + 1.0F) * 500.0F), 4.2949673E+9F) + 1000U;
    FMS_Y.FMS_Output.phi_cmd = FMS_DW.Integrator1_DSTATE_e;
    FMS_Y.FMS_Output.theta_cmd = FMS_DW.Integrator1_DSTATE;

    /* End of Outputs for SubSystem: '<S1>/Stabilize_Mode' */

    /* Saturate: '<S21>/Saturation' */
    if (rtb_Integrator1_p > FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Stabilize_Mode' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* BusAssignment: '<S9>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Stabilize_Mode' */
    } else if (rtb_Integrator1_p < -FMS_PARAM.YAW_RATE_LIM) {
      /* Outputs for IfAction SubSystem: '<S1>/Stabilize_Mode' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* BusAssignment: '<S9>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;

      /* End of Outputs for SubSystem: '<S1>/Stabilize_Mode' */
    } else {
      /* Outputs for IfAction SubSystem: '<S1>/Stabilize_Mode' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* BusAssignment: '<S9>/Bus Assignment' incorporates:
       *  Delay: '<Root>/Delay'
       */
      FMS_Y.FMS_Output.psi_rate_cmd = rtb_Integrator1_p;

      /* End of Outputs for SubSystem: '<S1>/Stabilize_Mode' */
    }
    break;

   case 5:
    /* Outputs for IfAction SubSystem: '<S1>/Acro_Mode' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* BusAssignment: '<S4>/Bus Assignment' incorporates:
     *  BusAssignment: '<S2>/Bus Assignment'
     *  Constant: '<S14>/Constant'
     *  Constant: '<S14>/Constant1'
     *  Constant: '<S4>/Constant'
     *  Constant: '<S79>/Constant'
     *  Delay: '<Root>/Delay'
     *  Gain: '<S11>/Gain'
     *  Gain: '<S11>/Gain1'
     *  Gain: '<S11>/Gain2'
     *  Gain: '<S14>/Gain'
     *  Product: '<S81>/Multiply'
     *  RelationalOperator: '<S79>/Compare'
     *  SignalConversion: '<S2>/TmpHiddenBufferAtBus AssignmentInport1'
     *  Sum: '<S14>/Add'
     *  Sum: '<S14>/Sum'
     */
    FMS_Y.FMS_Output.timestamp = rtb_BusAssignment_timestamp;

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    for (i = 0; i < 16; i++) {
      /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
      FMS_Y.FMS_Output.actuator_cmd[i] = FMS_B.PWM_Cmd;

      /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    }

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.state = rtb_State;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = (uint8_T)(rtb_State < 2);
    FMS_Y.FMS_Output.reserved = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.mode = 5U;
    FMS_Y.FMS_Output.throttle_cmd = (uint32_T)fmodf(floorf
      ((rtb_stick_throttle_raw + 1.0F) * 500.0F), 4.2949673E+9F) + 1000U;
    FMS_Y.FMS_Output.p_cmd = 1.04719758F * rtb_Divide_on_idx_2;
    FMS_Y.FMS_Output.q_cmd = -1.04719758F * rtb_Divide_on_idx_3;
    FMS_Y.FMS_Output.r_cmd = 1.04719758F * rtb_stick_yaw_raw;

    /* End of BusAssignment: '<S4>/Bus Assignment' */
    /* End of Outputs for SubSystem: '<S1>/Acro_Mode' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Unknown_Mode' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* BusAssignment: '<S10>/Bus Assignment' incorporates:
     *  BusAssignment: '<S2>/Bus Assignment'
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant2'
     *  Constant: '<S79>/Constant'
     *  Delay: '<Root>/Delay'
     *  Product: '<S81>/Multiply'
     *  RelationalOperator: '<S79>/Compare'
     *  SignalConversion: '<S2>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Output.timestamp = rtb_BusAssignment_timestamp;

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.p_cmd = 0.0F;
    FMS_Y.FMS_Output.q_cmd = 0.0F;
    FMS_Y.FMS_Output.r_cmd = 0.0F;
    FMS_Y.FMS_Output.phi_cmd = 0.0F;
    FMS_Y.FMS_Output.theta_cmd = 0.0F;
    FMS_Y.FMS_Output.psi_rate_cmd = 0.0F;
    FMS_Y.FMS_Output.u_cmd = 0.0F;
    FMS_Y.FMS_Output.v_cmd = 0.0F;
    FMS_Y.FMS_Output.w_cmd = 0.0F;
    FMS_Y.FMS_Output.throttle_cmd = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    for (i = 0; i < 16; i++) {
      /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
      FMS_Y.FMS_Output.actuator_cmd[i] = FMS_B.PWM_Cmd;

      /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    }

    /* Outputs for Atomic SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.state = rtb_State;
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = (uint8_T)(rtb_State < 2);
    FMS_Y.FMS_Output.reserved = 0U;

    /* End of Outputs for SubSystem: '<Root>/FMS_State' */
    FMS_Y.FMS_Output.mode = 0U;
    FMS_Y.FMS_Output.reset = 1U;

    /* End of BusAssignment: '<S10>/Bus Assignment' */
    /* End of Outputs for SubSystem: '<S1>/Unknown_Mode' */
    break;
  }

  /* End of SwitchCase: '<S1>/Mode_Switch_Case' */

  /* Switch: '<S65>/Switch1' incorporates:
   *  Constant: '<S67>/Constant'
   *  DeadZone: '<S70>/Dead Zone'
   *  Gain: '<S65>/Gain1'
   *  Gain: '<S65>/Gain5'
   *  Gain: '<S70>/Gain'
   *  Gain: '<S71>/Gain'
   *  RelationalOperator: '<S67>/Compare'
   */
  if (rtb_state_a == 1) {
    rtb_TmpSignalConversionAtDela_0 = 0.0F;
    rtb_Abs_a = 0.0F;
  } else {
    if (rtb_Divide_on_idx_0 > FMS_PARAM.PITCH_DZ) {
      /* DeadZone: '<S70>/Dead Zone' */
      rtb_Divide_on_idx_2 = rtb_Divide_on_idx_0 - FMS_PARAM.PITCH_DZ;
    } else if (rtb_Divide_on_idx_0 >= -FMS_PARAM.PITCH_DZ) {
      /* DeadZone: '<S70>/Dead Zone' */
      rtb_Divide_on_idx_2 = 0.0F;
    } else {
      /* DeadZone: '<S70>/Dead Zone' */
      rtb_Divide_on_idx_2 = rtb_Divide_on_idx_0 - (-FMS_PARAM.PITCH_DZ);
    }

    rtb_TmpSignalConversionAtDela_0 = 1.0F / (1.0F - FMS_PARAM.PITCH_DZ) *
      rtb_Divide_on_idx_2 * FMS_PARAM.VEL_XY_LIM;

    /* DeadZone: '<S71>/Dead Zone' incorporates:
     *  DeadZone: '<S70>/Dead Zone'
     *  Gain: '<S65>/Gain1'
     *  Gain: '<S70>/Gain'
     */
    if (rtb_Divide_on_idx_1 > FMS_PARAM.ROLL_DZ) {
      rtb_Divide_on_idx_2 = rtb_Divide_on_idx_1 - FMS_PARAM.ROLL_DZ;
    } else if (rtb_Divide_on_idx_1 >= -FMS_PARAM.ROLL_DZ) {
      rtb_Divide_on_idx_2 = 0.0F;
    } else {
      rtb_Divide_on_idx_2 = rtb_Divide_on_idx_1 - (-FMS_PARAM.ROLL_DZ);
    }

    /* End of DeadZone: '<S71>/Dead Zone' */
    rtb_Abs_a = 1.0F / (1.0F - FMS_PARAM.ROLL_DZ) * rtb_Divide_on_idx_2 *
      FMS_PARAM.VEL_XY_LIM;
  }

  /* End of Switch: '<S65>/Switch1' */

  /* Product: '<S73>/Multiply1' incorporates:
   *  Constant: '<S73>/const1'
   *  DiscreteIntegrator: '<S68>/Integrator'
   */
  rtb_Sign5_g = FMS_DW.Integrator_DSTATE[0] * 0.05F;

  /* Sum: '<S73>/Add' incorporates:
   *  DiscreteIntegrator: '<S68>/Integrator1'
   *  Sum: '<S68>/Subtract'
   */
  rtb_Add_b0 = (FMS_DW.Integrator1_DSTATE_f[0] - rtb_TmpSignalConversionAtDela_0)
    + rtb_Sign5_g;

  /* Signum: '<S73>/Sign' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Divide_on_idx_2 = -1.0F;
  } else if (rtb_Add_b0 > 0.0F) {
    rtb_Divide_on_idx_2 = 1.0F;
  } else {
    rtb_Divide_on_idx_2 = rtb_Add_b0;
  }

  /* Sum: '<S73>/Add2' incorporates:
   *  Abs: '<S73>/Abs'
   *  Gain: '<S73>/Gain'
   *  Gain: '<S73>/Gain1'
   *  Product: '<S73>/Multiply2'
   *  Product: '<S73>/Multiply3'
   *  Sqrt: '<S73>/Sqrt'
   *  Sum: '<S73>/Add1'
   *  Sum: '<S73>/Subtract'
   */
  rtb_Divide_on_idx_2 = (sqrtf((8.0F * fabsf(rtb_Add_b0) + FMS_ConstB.d) *
    FMS_ConstB.d) - FMS_ConstB.d) * 0.5F * rtb_Divide_on_idx_2 + rtb_Sign5_g;

  /* Sum: '<S73>/Add4' */
  rtb_Sign5_g += rtb_Add_b0 - rtb_Divide_on_idx_2;

  /* Sum: '<S73>/Add3' */
  rtb_stick_throttle_raw = rtb_Add_b0 + FMS_ConstB.d;

  /* Sum: '<S73>/Subtract1' */
  rtb_Add_b0 -= FMS_ConstB.d;

  /* Signum: '<S73>/Sign1' */
  if (rtb_stick_throttle_raw < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    if (rtb_stick_throttle_raw > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign2' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* Sum: '<S73>/Add2' incorporates:
   *  Gain: '<S73>/Gain2'
   *  Product: '<S73>/Multiply4'
   *  Sum: '<S73>/Add5'
   *  Sum: '<S73>/Subtract2'
   */
  rtb_Divide_on_idx_3 = (rtb_stick_throttle_raw - rtb_Add_b0) * 0.5F *
    rtb_Sign5_g + rtb_Divide_on_idx_2;

  /* Product: '<S73>/Multiply1' incorporates:
   *  Constant: '<S73>/const1'
   *  DiscreteIntegrator: '<S68>/Integrator'
   */
  rtb_Sign5_g = FMS_DW.Integrator_DSTATE[1] * 0.05F;

  /* Sum: '<S73>/Add' incorporates:
   *  DiscreteIntegrator: '<S68>/Integrator1'
   *  Sum: '<S68>/Subtract'
   */
  rtb_Add_b0 = (FMS_DW.Integrator1_DSTATE_f[1] - rtb_Abs_a) + rtb_Sign5_g;

  /* Signum: '<S73>/Sign' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Divide_on_idx_2 = -1.0F;
  } else if (rtb_Add_b0 > 0.0F) {
    rtb_Divide_on_idx_2 = 1.0F;
  } else {
    rtb_Divide_on_idx_2 = rtb_Add_b0;
  }

  /* Sum: '<S73>/Add2' incorporates:
   *  Abs: '<S73>/Abs'
   *  Gain: '<S73>/Gain'
   *  Gain: '<S73>/Gain1'
   *  Product: '<S73>/Multiply2'
   *  Product: '<S73>/Multiply3'
   *  Sqrt: '<S73>/Sqrt'
   *  Sum: '<S73>/Add1'
   *  Sum: '<S73>/Subtract'
   */
  rtb_Divide_on_idx_2 = (sqrtf((8.0F * fabsf(rtb_Add_b0) + FMS_ConstB.d) *
    FMS_ConstB.d) - FMS_ConstB.d) * 0.5F * rtb_Divide_on_idx_2 + rtb_Sign5_g;

  /* Sum: '<S73>/Add4' */
  rtb_Sign5_g += rtb_Add_b0 - rtb_Divide_on_idx_2;

  /* Sum: '<S73>/Add3' */
  rtb_stick_throttle_raw = rtb_Add_b0 + FMS_ConstB.d;

  /* Sum: '<S73>/Subtract1' */
  rtb_Add_b0 -= FMS_ConstB.d;

  /* Signum: '<S73>/Sign1' */
  if (rtb_stick_throttle_raw < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    if (rtb_stick_throttle_raw > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign2' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* Sum: '<S73>/Add5' incorporates:
   *  Gain: '<S73>/Gain2'
   *  Product: '<S73>/Multiply4'
   *  Sum: '<S73>/Subtract2'
   */
  rtb_Divide_on_idx_2 += (rtb_stick_throttle_raw - rtb_Add_b0) * 0.5F *
    rtb_Sign5_g;

  /* Switch: '<S65>/Switch2' incorporates:
   *  Constant: '<S65>/brake_speed1'
   *  DeadZone: '<S72>/Dead Zone'
   *  Gain: '<S65>/Gain6'
   *  Gain: '<S72>/Gain'
   */
  if (rtb_state > 0) {
    rtb_Add_b0 = 0.0F;
  } else {
    if (rtb_a_a > FMS_PARAM.THROTTLE_DZ) {
      /* DeadZone: '<S72>/Dead Zone' */
      rtb_a_a -= FMS_PARAM.THROTTLE_DZ;
    } else if (rtb_a_a >= -FMS_PARAM.THROTTLE_DZ) {
      /* DeadZone: '<S72>/Dead Zone' */
      rtb_a_a = 0.0F;
    } else {
      /* DeadZone: '<S72>/Dead Zone' */
      rtb_a_a -= -FMS_PARAM.THROTTLE_DZ;
    }

    rtb_Add_b0 = 1.0F / (1.0F - FMS_PARAM.THROTTLE_DZ) * rtb_a_a *
      -FMS_PARAM.VEL_Z_LIM;
  }

  /* End of Switch: '<S65>/Switch2' */

  /* Sum: '<S69>/Subtract' incorporates:
   *  DiscreteIntegrator: '<S69>/Integrator1'
   */
  rtb_stick_throttle_raw = FMS_DW.Integrator1_DSTATE_l - rtb_Add_b0;

  /* Product: '<S74>/Multiply1' incorporates:
   *  Constant: '<S74>/const1'
   *  DiscreteIntegrator: '<S69>/Integrator'
   */
  rtb_Add_b0 = FMS_DW.Integrator_DSTATE_o * 0.05F;

  /* Sum: '<S74>/Add' */
  rtb_a_a = rtb_stick_throttle_raw + rtb_Add_b0;

  /* Signum: '<S74>/Sign' */
  if (rtb_a_a < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else if (rtb_a_a > 0.0F) {
    rtb_stick_throttle_raw = 1.0F;
  } else {
    rtb_stick_throttle_raw = rtb_a_a;
  }

  /* End of Signum: '<S74>/Sign' */

  /* Sum: '<S74>/Add2' incorporates:
   *  Abs: '<S74>/Abs'
   *  Gain: '<S74>/Gain'
   *  Gain: '<S74>/Gain1'
   *  Product: '<S74>/Multiply2'
   *  Product: '<S74>/Multiply3'
   *  Sqrt: '<S74>/Sqrt'
   *  Sum: '<S74>/Add1'
   *  Sum: '<S74>/Subtract'
   */
  rtb_Subtract3_a = (sqrtf((8.0F * fabsf(rtb_a_a) + FMS_ConstB.d_k) *
    FMS_ConstB.d_k) - FMS_ConstB.d_k) * 0.5F * rtb_stick_throttle_raw +
    rtb_Add_b0;

  /* Sum: '<S74>/Add4' */
  rtb_Add_b0 += rtb_a_a - rtb_Subtract3_a;

  /* Sum: '<S74>/Add3' */
  rtb_stick_throttle_raw = rtb_a_a + FMS_ConstB.d_k;

  /* Sum: '<S74>/Subtract1' */
  rtb_a_a -= FMS_ConstB.d_k;

  /* Signum: '<S74>/Sign1' */
  if (rtb_stick_throttle_raw < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    if (rtb_stick_throttle_raw > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    }
  }

  /* End of Signum: '<S74>/Sign1' */

  /* Signum: '<S74>/Sign2' */
  if (rtb_a_a < 0.0F) {
    rtb_a_a = -1.0F;
  } else {
    if (rtb_a_a > 0.0F) {
      rtb_a_a = 1.0F;
    }
  }

  /* End of Signum: '<S74>/Sign2' */

  /* Sum: '<S74>/Add5' incorporates:
   *  Gain: '<S74>/Gain2'
   *  Product: '<S74>/Multiply4'
   *  Sum: '<S74>/Subtract2'
   */
  rtb_Subtract3_a += (rtb_stick_throttle_raw - rtb_a_a) * 0.5F * rtb_Add_b0;

  /* Sum: '<S74>/Subtract3' */
  rtb_stick_throttle_raw = rtb_Subtract3_a - FMS_ConstB.d_k;

  /* Sum: '<S74>/Add6' */
  rtb_stick_yaw_raw = rtb_Subtract3_a + FMS_ConstB.d_k;

  /* Product: '<S74>/Divide' */
  rtb_Abs_a = rtb_Subtract3_a / FMS_ConstB.d_k;

  /* Signum: '<S74>/Sign5' incorporates:
   *  Signum: '<S74>/Sign6'
   */
  if (rtb_Subtract3_a < 0.0F) {
    rtb_Sign5_g = -1.0F;

    /* Signum: '<S74>/Sign6' */
    rtb_Integrator1_p = -1.0F;
  } else if (rtb_Subtract3_a > 0.0F) {
    rtb_Sign5_g = 1.0F;

    /* Signum: '<S74>/Sign6' */
    rtb_Integrator1_p = 1.0F;
  } else {
    rtb_Sign5_g = rtb_Subtract3_a;

    /* Signum: '<S74>/Sign6' */
    rtb_Integrator1_p = rtb_Subtract3_a;
  }

  /* End of Signum: '<S74>/Sign5' */

  /* Product: '<S18>/Multiply1' incorporates:
   *  Constant: '<S18>/const1'
   *  DiscreteIntegrator: '<S16>/Integrator'
   */
  rtb_Subtract3_a = FMS_DW.Integrator_DSTATE_c * 0.04F;

  /* Sum: '<S18>/Add' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator1'
   *  Gain: '<S12>/Gain'
   *  Sum: '<S16>/Subtract'
   */
  rtb_Add_b0 = (FMS_DW.Integrator1_DSTATE_e - FMS_PARAM.ROLL_PITCH_LIM *
                rtb_Divide_on_idx_1) + rtb_Subtract3_a;

  /* Signum: '<S18>/Sign' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_a_a = -1.0F;
  } else if (rtb_Add_b0 > 0.0F) {
    rtb_a_a = 1.0F;
  } else {
    rtb_a_a = rtb_Add_b0;
  }

  /* End of Signum: '<S18>/Sign' */

  /* Sum: '<S18>/Add2' incorporates:
   *  Abs: '<S18>/Abs'
   *  Gain: '<S18>/Gain'
   *  Gain: '<S18>/Gain1'
   *  Product: '<S18>/Multiply2'
   *  Product: '<S18>/Multiply3'
   *  Sqrt: '<S18>/Sqrt'
   *  Sum: '<S18>/Add1'
   *  Sum: '<S18>/Subtract'
   */
  rtb_a_a = (sqrtf((8.0F * fabsf(rtb_Add_b0) + FMS_ConstB.d_e) * FMS_ConstB.d_e)
             - FMS_ConstB.d_e) * 0.5F * rtb_a_a + rtb_Subtract3_a;

  /* Sum: '<S18>/Add4' */
  rtb_TmpSignalConversionAtDela_0 = (rtb_Add_b0 - rtb_a_a) + rtb_Subtract3_a;

  /* Sum: '<S18>/Add3' */
  rtb_Divide_on_idx_1 = rtb_Add_b0 + FMS_ConstB.d_e;

  /* Sum: '<S18>/Subtract1' */
  rtb_Add_b0 -= FMS_ConstB.d_e;

  /* Signum: '<S18>/Sign1' */
  if (rtb_Divide_on_idx_1 < 0.0F) {
    rtb_Divide_on_idx_1 = -1.0F;
  } else {
    if (rtb_Divide_on_idx_1 > 0.0F) {
      rtb_Divide_on_idx_1 = 1.0F;
    }
  }

  /* End of Signum: '<S18>/Sign1' */

  /* Signum: '<S18>/Sign2' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* End of Signum: '<S18>/Sign2' */

  /* Sum: '<S18>/Add5' incorporates:
   *  Gain: '<S18>/Gain2'
   *  Product: '<S18>/Multiply4'
   *  Sum: '<S18>/Subtract2'
   */
  rtb_a_a += (rtb_Divide_on_idx_1 - rtb_Add_b0) * 0.5F *
    rtb_TmpSignalConversionAtDela_0;

  /* Sum: '<S18>/Subtract3' */
  rtb_Divide_on_idx_1 = rtb_a_a - FMS_ConstB.d_e;

  /* Sum: '<S18>/Add6' */
  rtb_TmpSignalConversionAtDela_0 = rtb_a_a + FMS_ConstB.d_e;

  /* Product: '<S18>/Divide' */
  rtb_Divide_h = rtb_a_a / FMS_ConstB.d_e;

  /* Signum: '<S18>/Sign5' incorporates:
   *  Signum: '<S18>/Sign6'
   */
  if (rtb_a_a < 0.0F) {
    rtb_Sign5_k = -1.0F;

    /* Signum: '<S18>/Sign6' */
    y = -1.0F;
  } else if (rtb_a_a > 0.0F) {
    rtb_Sign5_k = 1.0F;

    /* Signum: '<S18>/Sign6' */
    y = 1.0F;
  } else {
    rtb_Sign5_k = rtb_a_a;

    /* Signum: '<S18>/Sign6' */
    y = rtb_a_a;
  }

  /* End of Signum: '<S18>/Sign5' */

  /* Product: '<S19>/Multiply1' incorporates:
   *  Constant: '<S19>/const1'
   *  DiscreteIntegrator: '<S17>/Integrator'
   */
  rtb_Subtract3_a = FMS_DW.Integrator_DSTATE_h * 0.04F;

  /* Sum: '<S19>/Add' incorporates:
   *  DiscreteIntegrator: '<S17>/Integrator1'
   *  Gain: '<S12>/Gain1'
   *  Sum: '<S17>/Subtract'
   */
  rtb_Add_b0 = (FMS_DW.Integrator1_DSTATE - -FMS_PARAM.ROLL_PITCH_LIM *
                rtb_Divide_on_idx_0) + rtb_Subtract3_a;

  /* Signum: '<S19>/Sign' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_a_a = -1.0F;
  } else if (rtb_Add_b0 > 0.0F) {
    rtb_a_a = 1.0F;
  } else {
    rtb_a_a = rtb_Add_b0;
  }

  /* End of Signum: '<S19>/Sign' */

  /* Sum: '<S19>/Add2' incorporates:
   *  Abs: '<S19>/Abs'
   *  Gain: '<S19>/Gain'
   *  Gain: '<S19>/Gain1'
   *  Product: '<S19>/Multiply2'
   *  Product: '<S19>/Multiply3'
   *  Sqrt: '<S19>/Sqrt'
   *  Sum: '<S19>/Add1'
   *  Sum: '<S19>/Subtract'
   */
  rtb_a_a = (sqrtf((8.0F * fabsf(rtb_Add_b0) + FMS_ConstB.d_a) * FMS_ConstB.d_a)
             - FMS_ConstB.d_a) * 0.5F * rtb_a_a + rtb_Subtract3_a;

  /* Sum: '<S19>/Add4' */
  rtb_Subtract3_a += rtb_Add_b0 - rtb_a_a;

  /* Sum: '<S19>/Add3' */
  rtb_Divide_on_idx_0 = rtb_Add_b0 + FMS_ConstB.d_a;

  /* Sum: '<S19>/Subtract1' */
  rtb_Add_b0 -= FMS_ConstB.d_a;

  /* Signum: '<S19>/Sign1' */
  if (rtb_Divide_on_idx_0 < 0.0F) {
    rtb_Divide_on_idx_0 = -1.0F;
  } else {
    if (rtb_Divide_on_idx_0 > 0.0F) {
      rtb_Divide_on_idx_0 = 1.0F;
    }
  }

  /* End of Signum: '<S19>/Sign1' */

  /* Signum: '<S19>/Sign2' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* End of Signum: '<S19>/Sign2' */

  /* Sum: '<S19>/Add5' incorporates:
   *  Gain: '<S19>/Gain2'
   *  Product: '<S19>/Multiply4'
   *  Sum: '<S19>/Subtract2'
   */
  rtb_a_a += (rtb_Divide_on_idx_0 - rtb_Add_b0) * 0.5F * rtb_Subtract3_a;

  /* Update for UnitDelay: '<S60>/Delay Input1'
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_m = rtb_LogicalOperator1;

  /* Update for UnitDelay: '<S59>/Delay Input1'
   *
   * Block description for '<S59>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_n = rtb_Compare_cv;

  /* Update for Delay: '<S77>/Delay' */
  FMS_DW.icLoad = 0U;

  /* Update for UnitDelay: '<S62>/Delay Input1'
   *
   * Block description for '<S62>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_p = rtb_LogicalOperator4;

  /* Update for Delay: '<S78>/Delay' */
  FMS_DW.icLoad_a = 0U;

  /* Update for UnitDelay: '<S43>/Delay Input1'
   *
   * Block description for '<S43>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_g = rtb_FixPtRelationalOperator_p;

  /* Update for UnitDelay: '<S42>/Delay Input1'
   *
   * Block description for '<S42>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_c = rtb_Compare_pm;

  /* Update for UnitDelay: '<S41>/Delay Input1'
   *
   * Block description for '<S41>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_pc = rtb_LogicalOperator2;

  /* Update for Delay: '<S32>/Delay' */
  FMS_DW.icLoad_k = 0U;

  /* Update for DiscreteIntegrator: '<S17>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S17>/Integrator'
   */
  FMS_DW.Integrator1_DSTATE += 0.004F * FMS_DW.Integrator_DSTATE_h;

  /* Update for DiscreteIntegrator: '<S16>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S16>/Integrator'
   */
  FMS_DW.Integrator1_DSTATE_e += 0.004F * FMS_DW.Integrator_DSTATE_c;

  /* Update for DiscreteIntegrator: '<S69>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S69>/Integrator'
   */
  FMS_DW.Integrator1_DSTATE_l += 0.004F * FMS_DW.Integrator_DSTATE_o;

  /* Update for UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_i[0] = rtb_Compare_nv;

  /* Update for DiscreteIntegrator: '<S68>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S68>/Integrator'
   */
  FMS_DW.Integrator1_DSTATE_f[0] += 0.004F * FMS_DW.Integrator_DSTATE[0];

  /* Signum: '<S73>/Sign3' incorporates:
   *  Product: '<S73>/Divide'
   *  Sum: '<S73>/Add6'
   */
  rtb_Divide_on_idx_0 = rtb_Divide_on_idx_3 + FMS_ConstB.d;

  /* Signum: '<S73>/Sign4' incorporates:
   *  Product: '<S73>/Divide'
   *  Sum: '<S73>/Subtract3'
   */
  rtb_Add_b0 = rtb_Divide_on_idx_3 - FMS_ConstB.d;

  /* Signum: '<S73>/Sign5' incorporates:
   *  Product: '<S73>/Divide'
   */
  if (rtb_Divide_on_idx_3 < 0.0F) {
    rtb_Subtract3_a = -1.0F;
  } else if (rtb_Divide_on_idx_3 > 0.0F) {
    rtb_Subtract3_a = 1.0F;
  } else {
    rtb_Subtract3_a = rtb_Divide_on_idx_3;
  }

  /* Signum: '<S73>/Sign3' */
  if (rtb_Divide_on_idx_0 < 0.0F) {
    rtb_Divide_on_idx_0 = -1.0F;
  } else {
    if (rtb_Divide_on_idx_0 > 0.0F) {
      rtb_Divide_on_idx_0 = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign4' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign6' incorporates:
   *  Product: '<S73>/Divide'
   */
  if (rtb_Divide_on_idx_3 < 0.0F) {
    rtb_a_idx_0 = -1.0F;
  } else if (rtb_Divide_on_idx_3 > 0.0F) {
    rtb_a_idx_0 = 1.0F;
  } else {
    rtb_a_idx_0 = rtb_Divide_on_idx_3;
  }

  /* Update for DiscreteIntegrator: '<S68>/Integrator' incorporates:
   *  Constant: '<S73>/const'
   *  Gain: '<S73>/Gain3'
   *  Product: '<S73>/Divide'
   *  Product: '<S73>/Multiply5'
   *  Product: '<S73>/Multiply6'
   *  Sum: '<S73>/Subtract4'
   *  Sum: '<S73>/Subtract5'
   *  Sum: '<S73>/Subtract6'
   */
  FMS_DW.Integrator_DSTATE[0] += ((rtb_Divide_on_idx_3 / FMS_ConstB.d -
    rtb_Subtract3_a) * FMS_ConstB.Gain4 * ((rtb_Divide_on_idx_0 - rtb_Add_b0) *
    0.5F) - rtb_a_idx_0 * 58.836F) * 0.004F;

  /* Update for UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_i[1] = rtb_FixPtRelationalOperator;

  /* Update for DiscreteIntegrator: '<S68>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S68>/Integrator'
   */
  FMS_DW.Integrator1_DSTATE_f[1] += 0.004F * FMS_DW.Integrator_DSTATE[1];

  /* Signum: '<S73>/Sign3' incorporates:
   *  Sum: '<S73>/Add6'
   */
  rtb_Divide_on_idx_0 = rtb_Divide_on_idx_2 + FMS_ConstB.d;

  /* Signum: '<S73>/Sign4' incorporates:
   *  Sum: '<S73>/Subtract3'
   */
  rtb_Add_b0 = rtb_Divide_on_idx_2 - FMS_ConstB.d;

  /* Signum: '<S73>/Sign5' */
  if (rtb_Divide_on_idx_2 < 0.0F) {
    rtb_Divide_on_idx_3 = -1.0F;
  } else if (rtb_Divide_on_idx_2 > 0.0F) {
    rtb_Divide_on_idx_3 = 1.0F;
  } else {
    rtb_Divide_on_idx_3 = rtb_Divide_on_idx_2;
  }

  /* Signum: '<S73>/Sign3' */
  if (rtb_Divide_on_idx_0 < 0.0F) {
    rtb_Divide_on_idx_0 = -1.0F;
  } else {
    if (rtb_Divide_on_idx_0 > 0.0F) {
      rtb_Divide_on_idx_0 = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign4' */
  if (rtb_Add_b0 < 0.0F) {
    rtb_Add_b0 = -1.0F;
  } else {
    if (rtb_Add_b0 > 0.0F) {
      rtb_Add_b0 = 1.0F;
    }
  }

  /* Signum: '<S73>/Sign6' */
  if (rtb_Divide_on_idx_2 < 0.0F) {
    rtb_Subtract3_a = -1.0F;
  } else if (rtb_Divide_on_idx_2 > 0.0F) {
    rtb_Subtract3_a = 1.0F;
  } else {
    rtb_Subtract3_a = rtb_Divide_on_idx_2;
  }

  /* Update for DiscreteIntegrator: '<S68>/Integrator' incorporates:
   *  Constant: '<S73>/const'
   *  Gain: '<S73>/Gain3'
   *  Product: '<S73>/Divide'
   *  Product: '<S73>/Multiply5'
   *  Product: '<S73>/Multiply6'
   *  Sum: '<S73>/Subtract4'
   *  Sum: '<S73>/Subtract5'
   *  Sum: '<S73>/Subtract6'
   */
  FMS_DW.Integrator_DSTATE[1] += ((rtb_Divide_on_idx_2 / FMS_ConstB.d -
    rtb_Divide_on_idx_3) * FMS_ConstB.Gain4 * ((rtb_Divide_on_idx_0 - rtb_Add_b0)
    * 0.5F) - rtb_Subtract3_a * 58.836F) * 0.004F;

  /* Signum: '<S74>/Sign3' */
  if (rtb_stick_yaw_raw < 0.0F) {
    rtb_stick_yaw_raw = -1.0F;
  } else {
    if (rtb_stick_yaw_raw > 0.0F) {
      rtb_stick_yaw_raw = 1.0F;
    }
  }

  /* End of Signum: '<S74>/Sign3' */

  /* Signum: '<S74>/Sign4' */
  if (rtb_stick_throttle_raw < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    if (rtb_stick_throttle_raw > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    }
  }

  /* End of Signum: '<S74>/Sign4' */

  /* Update for DiscreteIntegrator: '<S69>/Integrator' incorporates:
   *  Constant: '<S74>/const'
   *  Gain: '<S74>/Gain3'
   *  Product: '<S74>/Multiply5'
   *  Product: '<S74>/Multiply6'
   *  Sum: '<S74>/Subtract4'
   *  Sum: '<S74>/Subtract5'
   *  Sum: '<S74>/Subtract6'
   */
  FMS_DW.Integrator_DSTATE_o += ((rtb_Abs_a - rtb_Sign5_g) * FMS_ConstB.Gain4_j *
    ((rtb_stick_yaw_raw - rtb_stick_throttle_raw) * 0.5F) - rtb_Integrator1_p *
    78.448F) * 0.004F;

  /* Signum: '<S18>/Sign3' */
  if (rtb_TmpSignalConversionAtDela_0 < 0.0F) {
    rtb_TmpSignalConversionAtDela_0 = -1.0F;
  } else {
    if (rtb_TmpSignalConversionAtDela_0 > 0.0F) {
      rtb_TmpSignalConversionAtDela_0 = 1.0F;
    }
  }

  /* End of Signum: '<S18>/Sign3' */

  /* Signum: '<S18>/Sign4' */
  if (rtb_Divide_on_idx_1 < 0.0F) {
    rtb_Divide_on_idx_1 = -1.0F;
  } else {
    if (rtb_Divide_on_idx_1 > 0.0F) {
      rtb_Divide_on_idx_1 = 1.0F;
    }
  }

  /* End of Signum: '<S18>/Sign4' */

  /* Update for DiscreteIntegrator: '<S16>/Integrator' incorporates:
   *  Constant: '<S18>/const'
   *  Gain: '<S18>/Gain3'
   *  Product: '<S18>/Multiply5'
   *  Product: '<S18>/Multiply6'
   *  Sum: '<S18>/Subtract4'
   *  Sum: '<S18>/Subtract5'
   *  Sum: '<S18>/Subtract6'
   */
  FMS_DW.Integrator_DSTATE_c += ((rtb_Divide_h - rtb_Sign5_k) *
    FMS_ConstB.Gain4_f * ((rtb_TmpSignalConversionAtDela_0 - rtb_Divide_on_idx_1)
    * 0.5F) - y * 12.566371F) * 0.004F;

  /* Signum: '<S19>/Sign6' incorporates:
   *  Signum: '<S19>/Sign5'
   */
  if (rtb_a_a < 0.0F) {
    rtb_Integrator1_p = -1.0F;

    /* Signum: '<S19>/Sign5' */
    y = -1.0F;
  } else if (rtb_a_a > 0.0F) {
    rtb_Integrator1_p = 1.0F;

    /* Signum: '<S19>/Sign5' */
    y = 1.0F;
  } else {
    rtb_Integrator1_p = rtb_a_a;

    /* Signum: '<S19>/Sign5' */
    y = rtb_a_a;
  }

  /* End of Signum: '<S19>/Sign6' */

  /* Sum: '<S19>/Add6' */
  rtb_stick_throttle_raw = rtb_a_a + FMS_ConstB.d_a;

  /* Sum: '<S19>/Subtract3' */
  rtb_stick_yaw_raw = rtb_a_a - FMS_ConstB.d_a;

  /* Signum: '<S19>/Sign3' */
  if (rtb_stick_throttle_raw < 0.0F) {
    rtb_stick_throttle_raw = -1.0F;
  } else {
    if (rtb_stick_throttle_raw > 0.0F) {
      rtb_stick_throttle_raw = 1.0F;
    }
  }

  /* End of Signum: '<S19>/Sign3' */

  /* Signum: '<S19>/Sign4' */
  if (rtb_stick_yaw_raw < 0.0F) {
    rtb_stick_yaw_raw = -1.0F;
  } else {
    if (rtb_stick_yaw_raw > 0.0F) {
      rtb_stick_yaw_raw = 1.0F;
    }
  }

  /* End of Signum: '<S19>/Sign4' */

  /* Update for DiscreteIntegrator: '<S17>/Integrator' incorporates:
   *  Constant: '<S19>/const'
   *  Gain: '<S19>/Gain3'
   *  Product: '<S19>/Divide'
   *  Product: '<S19>/Multiply5'
   *  Product: '<S19>/Multiply6'
   *  Sum: '<S19>/Subtract4'
   *  Sum: '<S19>/Subtract5'
   *  Sum: '<S19>/Subtract6'
   */
  FMS_DW.Integrator_DSTATE_h += ((rtb_a_a / FMS_ConstB.d_a - y) *
    FMS_ConstB.Gain4_b * ((rtb_stick_throttle_raw - rtb_stick_yaw_raw) * 0.5F) -
    rtb_Integrator1_p * 12.566371F) * 0.004F;

  /* End of Outputs for SubSystem: '<Root>/Control_Mode' */
}

/* Model initialize function */
void FMS_init(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FMS_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &FMS_B), 0,
                sizeof(B_FMS_T));

  /* states (dwork) */
  (void) memset((void *)&FMS_DW, 0,
                sizeof(DW_FMS_T));

  /* external inputs */
  (void)memset(&FMS_U, 0, sizeof(ExtU_FMS_T));

  /* external outputs */
  FMS_Y.FMS_Output = FMS_rtZFMS_Out_Bus;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Input_Process' */
  /* InitializeConditions for DiscreteIntegrator: '<S96>/Discrete-Time Integrator5' */
  FMS_DW.DiscreteTimeIntegrator5_IC_LOAD = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S97>/Discrete-Time Integrator5' */
  FMS_DW.DiscreteTimeIntegrator5_IC_LO_n = 1U;

  /* SystemInitialize for Chart: '<S89>/Arm_Event' */
  FMS_DW.is_active_c5_FMS = 0U;
  FMS_DW.is_c5_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S89>/Disarm_Event' */
  FMS_DW.temporalCounter_i1 = 0U;
  FMS_DW.is_active_c12_FMS = 0U;
  FMS_DW.is_c12_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<Root>/Input_Process' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/FMS_State' */
  /* SystemInitialize for Chart: '<S2>/State_Management' */
  FMS_DW.temporalCounter_i1_g = 0U;
  FMS_DW.is_active_c4_FMS = 0U;
  FMS_DW.is_c4_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<Root>/FMS_State' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Control_Mode' */
  /* InitializeConditions for Delay: '<S77>/Delay' */
  FMS_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S78>/Delay' */
  FMS_DW.icLoad_a = 1U;

  /* InitializeConditions for Delay: '<S32>/Delay' */
  FMS_DW.icLoad_k = 1U;

  /* SystemInitialize for Chart: '<S1>/Control_Mode' */
  FMS_DW.is_active_c1_FMS = 0U;
  FMS_DW.is_c1_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S20>/Motion_State' */
  FMS_DW.temporalCounter_i1_gq = 0U;
  FMS_DW.is_active_c3_FMS = 0U;
  FMS_DW.is_c3_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S47>/XY_Motion_SM' */
  FMS_DW.temporalCounter_i1_cu = 0U;
  FMS_DW.is_active_c13_FMS = 0U;
  FMS_DW.is_c13_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S47>/Z_Motion_SM' */
  FMS_DW.temporalCounter_i1_c = 0U;
  FMS_DW.is_active_c10_FMS = 0U;
  FMS_DW.is_c10_FMS = FMS_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<Root>/Control_Mode' */
}

/* Model terminate function */
void FMS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
