#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// FUNCTION_BLOCK PYTHON_EVAL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_EVAL;

void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain);
// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__);
// FUNCTION_BLOCK PYTHON_POLL
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(DWORD,STATE)
  __DECLARE_VAR(STRING,BUFFER)
  __DECLARE_VAR(STRING,PREBUFFER)
  __DECLARE_VAR(BOOL,TRIGM1)
  __DECLARE_VAR(BOOL,TRIGGED)

} PYTHON_POLL;

void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain);
// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__);
// FUNCTION_BLOCK PYTHON_GEAR
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(UINT,N)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,CODE)
  __DECLARE_VAR(BOOL,ACK)
  __DECLARE_VAR(STRING,RESULT)

  // FB private variables - TEMP, private and located variables
  PYTHON_EVAL PY_EVAL;
  __DECLARE_VAR(UINT,COUNTER)
  __DECLARE_VAR(UINT,_TMP_ADD10_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ13_OUT)
  __DECLARE_VAR(UINT,_TMP_SEL15_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND7_OUT)

} PYTHON_GEAR;

void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain);
// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__);
// PROGRAM PART2
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_EXTERNAL(BOOL,SENDIF17)
  __DECLARE_VAR(BOOL,SENDIF18)
  __DECLARE_VAR(BOOL,SENDIF19)
  __DECLARE_VAR(BOOL,SENDIF20)
  __DECLARE_VAR(BOOL,SENDIF21)
  __DECLARE_VAR(BOOL,SENDIF22)
  __DECLARE_VAR(BOOL,SENDIF23)
  __DECLARE_VAR(BOOL,SENDIF24)
  __DECLARE_VAR(BOOL,SENDIF25)
  __DECLARE_VAR(BOOL,TFONTLIMIT1)
  __DECLARE_VAR(BOOL,TFONTLIMIT2)
  __DECLARE_VAR(BOOL,TFONTLIMIT3)
  __DECLARE_VAR(BOOL,TFONTLIMIT4)
  __DECLARE_VAR(BOOL,T90LIMIT1)
  __DECLARE_VAR(BOOL,T90LIMIT2)
  __DECLARE_VAR(BOOL,T90LIMIT3)
  __DECLARE_VAR(BOOL,T90LIMIT4)
  __DECLARE_VAR(BOOL,SENCAP1)
  __DECLARE_VAR(BOOL,SENCAP2)
  __DECLARE_VAR(BOOL,SENCAP3)
  __DECLARE_VAR(BOOL,SENCAP4)
  __DECLARE_VAR(BOOL,ROLCON2_1)
  __DECLARE_VAR(BOOL,ROLCON2_2)
  __DECLARE_VAR(BOOL,ROLCON6_1)
  __DECLARE_VAR(BOOL,ROLCON6_2)
  __DECLARE_VAR(BOOL,ROLCON6_3)
  __DECLARE_VAR(BOOL,ROLCON6_4)
  __DECLARE_VAR(BOOL,ROLCON6_5)
  __DECLARE_VAR(BOOL,ROLCON6_6)
  __DECLARE_VAR(BOOL,TTRPOS1)
  __DECLARE_VAR(BOOL,TTRNEG1)
  __DECLARE_VAR(BOOL,TTRPOS2)
  __DECLARE_VAR(BOOL,TTRNEG2)
  __DECLARE_VAR(BOOL,TTRPOS3)
  __DECLARE_VAR(BOOL,TTRNEG3)
  __DECLARE_VAR(BOOL,TTRPOS4)
  __DECLARE_VAR(BOOL,TTRNEG4)
  __DECLARE_VAR(BOOL,TURNTABLE1)
  __DECLARE_VAR(BOOL,TURNTABLE2)
  __DECLARE_VAR(BOOL,TURNTABLE3)
  __DECLARE_VAR(BOOL,TURNTABLE4)
  __DECLARE_VAR(BOOL,CHAINPLUS1)
  __DECLARE_VAR(BOOL,CHAINPLUS5)
  __DECLARE_VAR(BOOL,CHAINLEFT1)
  __DECLARE_VAR(BOOL,CHAINLEFT2)
  __DECLARE_VAR(BOOL,CHAINLEFT3)
  __DECLARE_VAR(BOOL,CHAINLEFT4)
  __DECLARE_VAR(BOOL,CHAINLEFT5)
  __DECLARE_VAR(BOOL,LOADCON)
  __DECLARE_VAR(BOOL,MCSTOP1)
  __DECLARE_VAR(BOOL,MCSTOP2)
  __DECLARE_VAR(BOOL,MCSTOP3)
  __DECLARE_VAR(BOOL,MCSTOP4)

} PART2;

void PART2_init__(PART2 *data__, BOOL retain);
// Code part
void PART2_body__(PART2 *data__);
// PROGRAM PART3
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,SENDIF17)
  __DECLARE_VAR(BOOL,X)
  __DECLARE_VAR(BOOL,Z)
  __DECLARE_VAR(BOOL,CAPSEN5)
  __DECLARE_VAR(BOOL,CAPSEN6)
  __DECLARE_VAR(BOOL,RESET)
  __DECLARE_VAR(BOOL,LIFT)
  __DECLARE_VAR(BOOL,LEEFT)
  __DECLARE_VAR(BOOL,RIIGHT)
  __DECLARE_VAR(BOOL,STOPCON1)
  __DECLARE_VAR(BOOL,STOPCON2)
  __DECLARE_VAR(INT,TARGET)
  __DECLARE_VAR(INT,DIGDISPLY)
  __DECLARE_VAR(INT,DIGDISPLY0)
  __DECLARE_VAR(BOOL,VIRWH1)
  __DECLARE_VAR(BOOL,VIRWH2)
  __DECLARE_VAR(BOOL,VIRWH3)
  __DECLARE_VAR(BOOL,VIRWH4)
  __DECLARE_VAR(BOOL,VIRBACK)
  __DECLARE_VAR(BOOL,VIRBLOCKX)
  __DECLARE_VAR(BOOL,VIRBLOCKZ)
  __DECLARE_VAR(BOOL,VIRS1)
  __DECLARE_VAR(BOOL,VIRS2)
  TON TON0;
  TON TON1;
  CTU CTU0;
  TON TON2;
  TON TON4;
  TON TON6;
  TON TON3;
  TON TON7;
  CTU CTU1;
  TON TON8;
  TON TON9;
  TON TON10;
  TON TON11;
  R_TRIG R_TRIG1;
  F_TRIG F_TRIG1;
  F_TRIG F_TRIG2;
  F_TRIG F_TRIG3;
  R_TRIG R_TRIG2;
  __DECLARE_VAR(BOOL,_TMP_AND69_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD46_ENO)
  __DECLARE_VAR(INT,_TMP_ADD46_OUT)

} PART3;

void PART3_init__(PART3 *data__, BOOL retain);
// Code part
void PART3_body__(PART3 *data__);
// PROGRAM JS4FINALE
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,SENDIF1)
  __DECLARE_VAR(BOOL,SENDIF2)
  __DECLARE_VAR(BOOL,SENDIF3)
  __DECLARE_VAR(BOOL,SENDIF4)
  __DECLARE_VAR(BOOL,SENDIF5)
  __DECLARE_VAR(BOOL,SENDIF6)
  __DECLARE_VAR(BOOL,SENDIF7)
  __DECLARE_VAR(BOOL,SENDIF8)
  __DECLARE_VAR(BOOL,SENDIF9)
  __DECLARE_VAR(BOOL,SENDIF10)
  __DECLARE_VAR(BOOL,SENDIF11)
  __DECLARE_VAR(BOOL,SENDIF12)
  __DECLARE_VAR(BOOL,SENVIS1)
  __DECLARE_VAR(BOOL,SENVIS2)
  __DECLARE_VAR(BOOL,SENVIS3)
  __DECLARE_VAR(BOOL,SENVIS4)
  __DECLARE_VAR(BOOL,SENDIF13)
  __DECLARE_VAR(BOOL,SENDIF14)
  __DECLARE_VAR(BOOL,SENDIF15)
  __DECLARE_VAR(BOOL,SENDIF16)
  __DECLARE_VAR(BOOL,CON2_1)
  __DECLARE_VAR(BOOL,CON2_2)
  __DECLARE_VAR(BOOL,CON2_3)
  __DECLARE_VAR(BOOL,CON2_4)
  __DECLARE_VAR(BOOL,CON2_5)
  __DECLARE_VAR(BOOL,CON2_6)
  __DECLARE_VAR(BOOL,CON2_7)
  __DECLARE_VAR(BOOL,CON2_8)
  __DECLARE_VAR(BOOL,CON6_1)
  __DECLARE_VAR(BOOL,CON6_2)
  __DECLARE_VAR(BOOL,CON6_3)
  __DECLARE_VAR(BOOL,CON6_4)
  __DECLARE_VAR(BOOL,CON6_5)
  __DECLARE_VAR(BOOL,CON6_6)
  __DECLARE_VAR(BOOL,CON6_7)
  __DECLARE_VAR(BOOL,CON6_8)
  __DECLARE_VAR(BOOL,CON6_9)
  __DECLARE_VAR(BOOL,MCSTART1)
  __DECLARE_VAR(BOOL,MCSTART2)
  __DECLARE_VAR(BOOL,MCSTART3)
  __DECLARE_VAR(BOOL,MCSTART4)
  __DECLARE_VAR(BOOL,MCLIDS3)
  __DECLARE_VAR(BOOL,MCLIDS4)
  __DECLARE_VAR(BOOL,CLAMP1)
  __DECLARE_VAR(BOOL,CLAMP2)
  __DECLARE_VAR(BOOL,CLAMP3)
  __DECLARE_VAR(BOOL,CLAMP4)
  __DECLARE_VAR(BOOL,CLPRISE2)
  __DECLARE_VAR(BOOL,CLPRISE4)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,Z1)
  __DECLARE_VAR(BOOL,GRAB1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,Z2)
  __DECLARE_VAR(BOOL,GRAB2)
  __DECLARE_VAR(BOOL,PUSHER1)
  __DECLARE_VAR(BOOL,PUSHER2)
  __DECLARE_VAR(BOOL,PUSHER3)
  __DECLARE_VAR(BOOL,PUSHER4)
  __DECLARE_VAR(BOOL,CON4_1)
  __DECLARE_VAR(BOOL,CON6_10)
  __DECLARE_VAR(BOOL,CON6_11)
  __DECLARE_VAR(BOOL,CON6_12)
  __DECLARE_VAR(BOOL,CON6_13)
  __DECLARE_VAR(BOOL,CON6_14)
  __DECLARE_VAR(BOOL,GRABXYZ1)
  __DECLARE_VAR(BOOL,CLAMPXYZ1)
  __DECLARE_VAR(BOOL,GRABXYZ2)
  __DECLARE_VAR(BOOL,CLAMPXYZ2)
  __DECLARE_VAR(INT,SPX1)
  __DECLARE_VAR(INT,SPY1)
  __DECLARE_VAR(INT,SPZ1)
  __DECLARE_VAR(INT,SPX2)
  __DECLARE_VAR(INT,SPY2)
  __DECLARE_VAR(INT,SPZ2)
  __DECLARE_VAR(BOOL,VIR1)
  __DECLARE_VAR(BOOL,VIR2)
  __DECLARE_VAR(BOOL,VIR3)
  __DECLARE_VAR(BOOL,VIR4)
  __DECLARE_VAR(BOOL,VIR5)
  __DECLARE_VAR(BOOL,VIR6)
  __DECLARE_VAR(BOOL,VIR7)
  __DECLARE_VAR(BOOL,VIR8)
  __DECLARE_VAR(BOOL,VIR9)
  __DECLARE_VAR(BOOL,VIR10)
  __DECLARE_VAR(BOOL,VIR11)
  __DECLARE_VAR(BOOL,VIR12)
  __DECLARE_VAR(BOOL,VIRXYZ1_1)
  __DECLARE_VAR(BOOL,VIRXYZ1_2)
  __DECLARE_VAR(BOOL,VIRXYZ1_3)
  __DECLARE_VAR(BOOL,VIRXYZ1_4)
  __DECLARE_VAR(BOOL,VIRXYZ1_5)
  __DECLARE_VAR(BOOL,VIRXYZ1_6)
  __DECLARE_VAR(BOOL,VIRXYZ1_7)
  __DECLARE_VAR(BOOL,VIRXYZ1_8)
  __DECLARE_VAR(BOOL,VIRXYZ1_9)
  __DECLARE_VAR(BOOL,BLOCKXYZ1_1)
  __DECLARE_VAR(BOOL,BLOCKXYZ1_2)
  __DECLARE_VAR(BOOL,BLOCKXYZ1_3)
  __DECLARE_VAR(BOOL,BLOCKXYZ1_4)
  __DECLARE_VAR(BOOL,GRABVIRXYZ1_1)
  __DECLARE_VAR(BOOL,GRABVIRXYZ1_2)
  __DECLARE_VAR(BOOL,GRABVIRXYZ1_3)
  __DECLARE_VAR(BOOL,GRABVIRXYZ1_4)
  __DECLARE_VAR(BOOL,VIRDIF13)
  __DECLARE_VAR(BOOL,VIRDIF14)
  __DECLARE_VAR(BOOL,VIRXYZ2_1)
  __DECLARE_VAR(BOOL,VIRXYZ2_2)
  __DECLARE_VAR(BOOL,VIRXYZ2_3)
  __DECLARE_VAR(BOOL,VIRXYZ2_4)
  __DECLARE_VAR(BOOL,VIRXYZ2_5)
  __DECLARE_VAR(BOOL,VIRXYZ2_6)
  __DECLARE_VAR(BOOL,VIRXYZ2_7)
  __DECLARE_VAR(BOOL,VIRXYZ2_8)
  __DECLARE_VAR(BOOL,VIRXYZ2_9)
  __DECLARE_VAR(BOOL,GRABVIRXYZ2_1)
  __DECLARE_VAR(BOOL,GRABVIRXYZ2_2)
  __DECLARE_VAR(BOOL,GRABVIRXYZ2_3)
  __DECLARE_VAR(BOOL,GRABVIRXYZ2_4)
  __DECLARE_VAR(BOOL,BLOCKXYZ2_1)
  __DECLARE_VAR(BOOL,BLOCKXYZ2_2)
  __DECLARE_VAR(BOOL,BLOCKXYZ2_3)
  __DECLARE_VAR(BOOL,BLOCKXYZ2_4)
  TON TON1;
  TON TON2;
  TON TON3;
  TON TON4;
  TON TON5;
  TON TON6;
  TON TON7;
  TON TON8;
  TON TON9;
  TON TON0;
  TON TON10;
  TON TON11;
  TON TON12;
  TON TON13;
  TON TON14;
  TON TON15;
  TON TON16;
  TON TON17;
  TON TON18;
  TON TON19;
  TON TON20;
  TON TON21;
  TON TON22;
  TON TON23;
  TON TON24;
  TON TON25;
  TON TON26;
  TON TON27;
  TON TON28;
  TON TON29;
  TON TON30;
  TON TON31;
  TON TON32;
  TON TON33;
  TON TON34;
  TON TON35;
  TOF TOF0;
  TON TON36;
  TON TON37;
  TON TON38;
  TON TON39;
  TON TON40;
  TON TON41;
  TON TON42;
  TON TON43;
  TON TON44;
  TON TON45;
  TON TON46;
  TON TON47;
  TON TON48;
  TON TON49;
  TON TON50;
  TON TON51;
  TON TON52;
  TON TON53;
  TON TON54;
  TON TON55;
  TOF TOF1;
  __DECLARE_VAR(BOOL,_TMP_MOVE431_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE431_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE679_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE679_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE243_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE243_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE497_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE497_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE214_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE214_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE218_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE218_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE460_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE460_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE468_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE468_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE472_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE472_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE695_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE695_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE432_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE432_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE222_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE222_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE680_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE680_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE476_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE476_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE226_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE226_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE235_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE235_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE480_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE480_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE489_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE489_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE258_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE258_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE511_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE511_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE262_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE262_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE287_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE287_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE463_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE463_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE515_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE515_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE540_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE540_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE698_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE698_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE266_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE266_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE270_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE270_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE519_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE519_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE523_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE523_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE279_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE279_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE416_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE416_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE532_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE532_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE666_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE666_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE334_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE334_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE587_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE587_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE305_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE305_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE347_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE347_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE309_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE309_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE558_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE558_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE600_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE600_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE562_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE562_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE313_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE313_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE317_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE317_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE566_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE566_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE570_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE570_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE326_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE326_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE427_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE427_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE579_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE579_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE675_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE675_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE381_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE381_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE634_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE634_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE352_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE352_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE394_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE394_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE356_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE356_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE605_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE605_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE647_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE647_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE609_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE609_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE360_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE360_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE364_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE364_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE613_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE613_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE617_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE617_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE373_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE373_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE429_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE429_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE626_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE626_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE677_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE677_OUT)

} JS4FINALE;

void JS4FINALE_init__(JS4FINALE *data__, BOOL retain);
// Code part
void JS4FINALE_body__(JS4FINALE *data__);
#endif //__POUS_H
