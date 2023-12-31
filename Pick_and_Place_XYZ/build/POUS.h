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
// PROGRAM PPXYZ
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,START)
  __DECLARE_VAR(BOOL,STOP)
  __DECLARE_VAR(BOOL,SEN1)
  __DECLARE_VAR(BOOL,SEN2)
  __DECLARE_VAR(BOOL,CON1)
  __DECLARE_VAR(BOOL,CON2)
  __DECLARE_VAR(BOOL,GRAP)
  __DECLARE_VAR(INT,X)
  __DECLARE_VAR(INT,SPX)
  __DECLARE_VAR(INT,SPY)
  __DECLARE_VAR(INT,SPZ)
  __DECLARE_VAR(INT,DIGRED)
  __DECLARE_VAR(BOOL,VIR1)
  __DECLARE_VAR(BOOL,VIR2)
  __DECLARE_VAR(BOOL,VIR3)
  __DECLARE_VAR(BOOL,VIR4)
  __DECLARE_VAR(BOOL,VIR5)
  __DECLARE_VAR(BOOL,VIR6)
  __DECLARE_VAR(BOOL,VIR7)
  __DECLARE_VAR(BOOL,VIR8)
  __DECLARE_VAR(BOOL,VIR9)
  __DECLARE_VAR(BOOL,BLOCK1)
  __DECLARE_VAR(BOOL,BLOCK2)
  __DECLARE_VAR(BOOL,BLOCK3)
  __DECLARE_VAR(BOOL,BLOCK4)
  __DECLARE_VAR(BOOL,GRABVIR1)
  __DECLARE_VAR(BOOL,GRABVIR2)
  __DECLARE_VAR(BOOL,GRABVIR3)
  __DECLARE_VAR(BOOL,GRABVIR4)
  TON TON0;
  TON TON1;
  TON TON2;
  TON TON3;
  TON TON4;
  TON TON5;
  TON TON6;
  TON TON7;
  TON TON8;
  TON TON9;
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
  TOF TOF0;
  __DECLARE_VAR(BOOL,_TMP_MOVE77_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE77_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE8_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE8_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE12_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE12_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE16_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE16_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE20_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE20_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE29_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE29_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE69_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE69_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE40_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE40_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE44_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE44_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE48_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE48_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE52_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE52_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE61_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE61_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE139_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE139_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE186_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE186_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE110_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE110_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE152_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE152_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE114_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE114_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE157_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE157_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE199_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE199_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE161_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE161_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE118_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE118_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE122_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE122_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE165_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE165_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE169_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE169_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE131_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE131_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE178_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE178_OUT)

} PPXYZ;

void PPXYZ_init__(PPXYZ *data__, BOOL retain);
// Code part
void PPXYZ_body__(PPXYZ *data__);
#endif //__POUS_H
