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
// PROGRAM PT5
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,VS5)
  __DECLARE_VAR(BOOL,DS18)
  __DECLARE_VAR(BOOL,DS19)
  __DECLARE_VAR(BOOL,DS20)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,Z0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,Z1)
  __DECLARE_VAR(BOOL,X2)
  __DECLARE_VAR(BOOL,Z2)
  __DECLARE_VAR(BOOL,LC1)
  __DECLARE_VAR(BOOL,LC2)
  __DECLARE_VAR(BOOL,LC3)
  __DECLARE_VAR(BOOL,LC4)
  __DECLARE_VAR(BOOL,LIIFT0)
  __DECLARE_VAR(BOOL,LEEFT0)
  __DECLARE_VAR(BOOL,RIIGHT0)
  __DECLARE_VAR(BOOL,LIIFT1)
  __DECLARE_VAR(BOOL,LEEFT1)
  __DECLARE_VAR(BOOL,RIIGHT1)
  __DECLARE_VAR(BOOL,LIIFT2)
  __DECLARE_VAR(BOOL,LEEFT2)
  __DECLARE_VAR(BOOL,RIIGHT2)
  __DECLARE_VAR(INT,TARGET0)
  __DECLARE_VAR(INT,TARGET1)
  __DECLARE_VAR(INT,TARGET2)
  __DECLARE_VAR(BOOL,D5_1)
  __DECLARE_VAR(BOOL,D5_2)
  __DECLARE_VAR(BOOL,D5_3)
  __DECLARE_VAR(BOOL,D5_4)
  __DECLARE_VAR(BOOL,D5_5)
  __DECLARE_VAR(BOOL,D5_6)
  __DECLARE_VAR(BOOL,VIRBLCKX0)
  __DECLARE_VAR(BOOL,VIRBLCKZ0)
  __DECLARE_VAR(BOOL,SWITCH0)
  __DECLARE_VAR(BOOL,RESET0)
  __DECLARE_VAR(BOOL,BIRU)
  __DECLARE_VAR(BOOL,D5_7)
  __DECLARE_VAR(BOOL,D5_8)
  __DECLARE_VAR(BOOL,D5_9)
  __DECLARE_VAR(BOOL,D5_10)
  __DECLARE_VAR(BOOL,D5_11)
  __DECLARE_VAR(BOOL,VIRBLCKX1)
  __DECLARE_VAR(BOOL,VIRBLCKZ1)
  __DECLARE_VAR(BOOL,SWITCH1)
  __DECLARE_VAR(BOOL,RESET1)
  __DECLARE_VAR(BOOL,D5_12)
  __DECLARE_VAR(BOOL,D5_13)
  __DECLARE_VAR(BOOL,D5_14)
  __DECLARE_VAR(BOOL,D5_15)
  __DECLARE_VAR(BOOL,D5_16)
  __DECLARE_VAR(BOOL,VIRBLCKX2)
  __DECLARE_VAR(BOOL,VIRBLCKZ2)
  __DECLARE_VAR(BOOL,SWITCH2)
  __DECLARE_VAR(BOOL,RESET2)
  TON TON0;
  TON TON1;
  CTU CTU0;
  TON TON5;
  TON TON8;
  TON TON2;
  TON TON7;
  TON TON4;
  TON TON6;
  TON TON3;
  CTU CTU1;
  TON TON9;
  TON TON10;
  TON TON11;
  TON TON12;
  TON TON13;
  CTU CTU2;
  TON TON16;
  TON TON17;
  TON TON18;
  TON TON19;
  TON TON20;
  CTU CTU3;
  TON TON14;
  TON TON15;
  CTU CTU4;
  TON TON21;
  TON TON22;
  TON TON23;
  TON TON24;
  TON TON25;
  CTU CTU5;
  R_TRIG R_TRIG1;
  R_TRIG R_TRIG2;
  R_TRIG R_TRIG3;
  F_TRIG F_TRIG1;
  F_TRIG F_TRIG2;
  F_TRIG F_TRIG3;
  F_TRIG F_TRIG4;
  F_TRIG F_TRIG5;
  R_TRIG R_TRIG4;
  F_TRIG F_TRIG6;
  F_TRIG F_TRIG7;
  R_TRIG R_TRIG5;
  F_TRIG F_TRIG8;
  F_TRIG F_TRIG9;
  R_TRIG R_TRIG6;
  __DECLARE_VAR(BOOL,_TMP_AND69_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND190_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND265_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD46_ENO)
  __DECLARE_VAR(INT,_TMP_ADD46_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD167_ENO)
  __DECLARE_VAR(INT,_TMP_ADD167_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD244_ENO)
  __DECLARE_VAR(INT,_TMP_ADD244_OUT)

} PT5;

void PT5_init__(PT5 *data__, BOOL retain);
// Code part
void PT5_body__(PT5 *data__);
// PROGRAM PT4
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,DS16)
  __DECLARE_VAR(BOOL,DS17)
  __DECLARE_VAR(BOOL,CS6)
  __DECLARE_VAR(BOOL,CS7)
  __DECLARE_VAR(BOOL,CS8)
  __DECLARE_VAR(BOOL,CS9)
  __DECLARE_VAR(BOOL,CS10)
  __DECLARE_VAR(BOOL,CS11)
  __DECLARE_VAR(BOOL,CS12)
  __DECLARE_VAR(BOOL,CS13)
  __DECLARE_VAR(BOOL,CS14)
  __DECLARE_VAR(BOOL,TTFRONTL0)
  __DECLARE_VAR(BOOL,TTFRONTL1)
  __DECLARE_VAR(BOOL,TT90L0)
  __DECLARE_VAR(BOOL,TT90L1)
  __DECLARE_VAR(BOOL,BC4M_7)
  __DECLARE_VAR(BOOL,BC4M_8)
  __DECLARE_VAR(BOOL,RC6M_10)
  __DECLARE_VAR(BOOL,CRCCCW4)
  __DECLARE_VAR(BOOL,LCLP8)
  __DECLARE_VAR(BOOL,CW5)
  __DECLARE_VAR(BOOL,GRB5)
  __DECLARE_VAR(BOOL,RC6M_4)
  __DECLARE_VAR(BOOL,RC6M_5)
  __DECLARE_VAR(BOOL,RC6M_6)
  __DECLARE_VAR(BOOL,RC6M_7)
  __DECLARE_VAR(BOOL,RC6M_11)
  __DECLARE_VAR(BOOL,RC2M_0)
  __DECLARE_VAR(BOOL,RC2M_1)
  __DECLARE_VAR(BOOL,RC2M_5)
  __DECLARE_VAR(BOOL,RC4M_2)
  __DECLARE_VAR(BOOL,RC4M_3)
  __DECLARE_VAR(BOOL,RC4M_4)
  __DECLARE_VAR(BOOL,RC4M_5)
  __DECLARE_VAR(BOOL,CRCCCW0)
  __DECLARE_VAR(BOOL,CRCCCW1)
  __DECLARE_VAR(BOOL,CRCCCW2)
  __DECLARE_VAR(BOOL,CRCCCW3)
  __DECLARE_VAR(BOOL,TTROLLP0)
  __DECLARE_VAR(BOOL,TTROLLP1)
  __DECLARE_VAR(BOOL,TTTURN0)
  __DECLARE_VAR(BOOL,TTTURN1)
  __DECLARE_VAR(BOOL,ROLLSTOP1)
  __DECLARE_VAR(BOOL,ROLLSTOP2)
  __DECLARE_VAR(BOOL,ROLLSTOP3)
  __DECLARE_VAR(BOOL,TTROLLN0)
  __DECLARE_VAR(BOOL,TTROLLN1)
  __DECLARE_VAR(BOOL,ROLLSTOP4)
  __DECLARE_VAR(BOOL,ROLLSTOP5)
  __DECLARE_VAR(BOOL,ROLLSTOP6)
  __DECLARE_VAR(INT,X5)
  __DECLARE_VAR(INT,Z5)
  __DECLARE_VAR(BOOL,D4_1)
  __DECLARE_VAR(BOOL,D4_2)
  __DECLARE_VAR(BOOL,D4_3)
  __DECLARE_VAR(BOOL,D4_4)
  __DECLARE_VAR(BOOL,D4_5)
  __DECLARE_VAR(BOOL,D4_6)
  __DECLARE_VAR(BOOL,D4_7)
  TON TON1;
  TON TON2;
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
  CTU CTU0;
  TON TON32;
  CTU CTU1;
  TOF TOF0;
  TOF TOF1;
  TOF TOF2;
  TOF TOF3;
  __DECLARE_VAR(BOOL,_TMP_MOVE66_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE66_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE25_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE25_OUT)
  R_TRIG R_TRIG1;
  R_TRIG R_TRIG2;
  __DECLARE_VAR(BOOL,_TMP_MOVE44_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE44_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE51_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE51_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE73_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE73_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE76_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE76_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE83_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE83_OUT)
  R_TRIG R_TRIG3;
  R_TRIG R_TRIG4;
  __DECLARE_VAR(BOOL,_TMP_MOVE89_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE89_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE94_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE94_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE100_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE100_OUT)
  R_TRIG R_TRIG5;
  R_TRIG R_TRIG6;
  R_TRIG R_TRIG7;
  R_TRIG R_TRIG8;
  R_TRIG R_TRIG9;
  R_TRIG R_TRIG10;
  R_TRIG R_TRIG11;

} PT4;

void PT4_init__(PT4 *data__, BOOL retain);
// Code part
void PT4_body__(PT4 *data__);
// PROGRAM PT3
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,DS8)
  __DECLARE_VAR(BOOL,DS9)
  __DECLARE_VAR(BOOL,DS10)
  __DECLARE_VAR(BOOL,DS11)
  __DECLARE_VAR(BOOL,CS4)
  __DECLARE_VAR(BOOL,CS5)
  __DECLARE_VAR(BOOL,CBC1CW)
  __DECLARE_VAR(BOOL,BC2M_20)
  __DECLARE_VAR(BOOL,BC4M_4)
  __DECLARE_VAR(BOOL,BC4M_3)
  __DECLARE_VAR(BOOL,CBC2CW)
  __DECLARE_VAR(BOOL,BC2M_18)
  __DECLARE_VAR(BOOL,BC4M_1)
  __DECLARE_VAR(BOOL,BC4M_2)
  __DECLARE_VAR(BOOL,RC6M_2)
  __DECLARE_VAR(BOOL,RC6M_3)
  __DECLARE_VAR(BOOL,RC6M_0)
  __DECLARE_VAR(BOOL,RC6M_1)
  __DECLARE_VAR(BOOL,LCLP4)
  __DECLARE_VAR(BOOL,LCLP5)
  __DECLARE_VAR(BOOL,CW2)
  __DECLARE_VAR(BOOL,CW3)
  __DECLARE_VAR(BOOL,GRB2)
  __DECLARE_VAR(BOOL,GRB3)
  __DECLARE_VAR(INT,X2)
  __DECLARE_VAR(INT,Z2)
  __DECLARE_VAR(INT,X3)
  __DECLARE_VAR(INT,Z3)
  __DECLARE_VAR(BOOL,D3_1)
  __DECLARE_VAR(BOOL,D3_2)
  __DECLARE_VAR(BOOL,D3_3)
  __DECLARE_VAR(BOOL,D3_4)
  __DECLARE_VAR(BOOL,D3_5)
  __DECLARE_VAR(BOOL,D3_6)
  __DECLARE_VAR(BOOL,D3_7)
  __DECLARE_VAR(BOOL,D3_8)
  __DECLARE_VAR(BOOL,D3_9)
  __DECLARE_VAR(BOOL,D3_10)
  __DECLARE_VAR(BOOL,D3_11)
  __DECLARE_VAR(BOOL,D3_12)
  __DECLARE_VAR(BOOL,D3_13)
  __DECLARE_VAR(BOOL,D3_14)
  TON TON1;
  TON TON2;
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
  CTU CTU0;
  TON TON32;
  TON TON3;
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
  CTU CTU1;
  TON TON33;
  __DECLARE_VAR(BOOL,_TMP_MOVE66_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE66_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE25_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE25_OUT)
  R_TRIG R_TRIG1;
  R_TRIG R_TRIG2;
  __DECLARE_VAR(BOOL,_TMP_MOVE44_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE44_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE51_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE51_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE73_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE73_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE76_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE76_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE83_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE83_OUT)
  R_TRIG R_TRIG3;
  R_TRIG R_TRIG4;
  __DECLARE_VAR(BOOL,_TMP_MOVE89_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE89_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE94_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE94_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE100_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE100_OUT)
  R_TRIG R_TRIG5;
  __DECLARE_VAR(BOOL,_TMP_MOVE204_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE204_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE165_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE165_OUT)
  R_TRIG R_TRIG6;
  R_TRIG R_TRIG7;
  __DECLARE_VAR(BOOL,_TMP_MOVE184_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE184_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE191_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE191_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE211_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE211_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE214_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE214_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE221_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE221_OUT)
  R_TRIG R_TRIG8;
  R_TRIG R_TRIG9;
  __DECLARE_VAR(BOOL,_TMP_MOVE227_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE227_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE232_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE232_OUT)
  __DECLARE_VAR(BOOL,_TMP_MOVE238_ENO)
  __DECLARE_VAR(INT,_TMP_MOVE238_OUT)
  R_TRIG R_TRIG10;

} PT3;

void PT3_init__(PT3 *data__, BOOL retain);
// Code part
void PT3_body__(PT3 *data__);
// PROGRAM PT2
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,CS0)
  __DECLARE_VAR(BOOL,CS1)
  __DECLARE_VAR(BOOL,CS2)
  __DECLARE_VAR(BOOL,CS3)
  __DECLARE_VAR(BOOL,DS14)
  __DECLARE_VAR(BOOL,DS15)
  __DECLARE_VAR(BOOL,LCLP2)
  __DECLARE_VAR(BOOL,LCLP3)
  __DECLARE_VAR(BOOL,LCLP2RISE)
  __DECLARE_VAR(BOOL,RCLP1)
  __DECLARE_VAR(BOOL,RCLP0)
  __DECLARE_VAR(BOOL,RCLP0RISE)
  __DECLARE_VAR(BOOL,X0)
  __DECLARE_VAR(BOOL,Z0)
  __DECLARE_VAR(BOOL,GRB0)
  __DECLARE_VAR(BOOL,X1)
  __DECLARE_VAR(BOOL,Z1)
  __DECLARE_VAR(BOOL,GRB1)
  __DECLARE_VAR(BOOL,RCLP6)
  __DECLARE_VAR(BOOL,RCLP7)
  __DECLARE_VAR(BOOL,RCLP7RISE)
  __DECLARE_VAR(BOOL,X4)
  __DECLARE_VAR(BOOL,Z4)
  __DECLARE_VAR(BOOL,GRB4)
  __DECLARE_VAR(BOOL,C5_4M)
  __DECLARE_VAR(BOOL,C6_4M)
  __DECLARE_VAR(BOOL,BLADE1)
  __DECLARE_VAR(BOOL,BLADE2)
  __DECLARE_VAR(BOOL,BLADE3)
  __DECLARE_VAR(BOOL,BLADE4)
  __DECLARE_VAR(BOOL,C22_2M)
  __DECLARE_VAR(BOOL,C23_2M)
  __DECLARE_VAR(BOOL,DCS0)
  __DECLARE_VAR(BOOL,DCS1)
  __DECLARE_VAR(BOOL,DCS2)
  __DECLARE_VAR(BOOL,DCS3)
  __DECLARE_VAR(BOOL,D1)
  __DECLARE_VAR(BOOL,D2)
  __DECLARE_VAR(BOOL,DDS1)
  __DECLARE_VAR(BOOL,DDS2)
  __DECLARE_VAR(BOOL,D3)
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
  TON TON20;
  TON TON21;
  TON TON22;
  TON TON23;

} PT2;

void PT2_init__(PT2 *data__, BOOL retain);
// Code part
void PT2_body__(PT2 *data__);
// PROGRAM PT1
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_EXTERNAL(BOOL,START)
  __DECLARE_EXTERNAL(BOOL,STOP)
  __DECLARE_VAR(BOOL,DS1)
  __DECLARE_VAR(BOOL,DS2)
  __DECLARE_VAR(BOOL,DS3)
  __DECLARE_VAR(BOOL,DS4)
  __DECLARE_VAR(BOOL,DS5)
  __DECLARE_VAR(BOOL,DS6)
  __DECLARE_VAR(BOOL,DS7)
  __DECLARE_VAR(BOOL,DS8)
  __DECLARE_VAR(BOOL,DS9)
  __DECLARE_VAR(BOOL,DS10)
  __DECLARE_VAR(BOOL,VS1)
  __DECLARE_VAR(BOOL,VS2)
  __DECLARE_VAR(BOOL,VS3)
  __DECLARE_VAR(BOOL,VS4)
  __DECLARE_VAR(BOOL,CA1)
  __DECLARE_VAR(BOOL,CB1)
  __DECLARE_VAR(BOOL,CC1)
  __DECLARE_VAR(BOOL,CD1)
  __DECLARE_VAR(BOOL,CE1)
  __DECLARE_VAR(BOOL,CA2)
  __DECLARE_VAR(BOOL,CB2)
  __DECLARE_VAR(BOOL,CC2)
  __DECLARE_VAR(BOOL,CD2)
  __DECLARE_VAR(BOOL,CE2)
  __DECLARE_VAR(BOOL,C1)
  __DECLARE_VAR(BOOL,C2)
  __DECLARE_VAR(BOOL,C3)
  __DECLARE_VAR(BOOL,C4)
  __DECLARE_VAR(BOOL,C5)
  __DECLARE_VAR(BOOL,MCSTART0)
  __DECLARE_VAR(BOOL,MCSTART1)
  __DECLARE_VAR(BOOL,MCSTART2)
  __DECLARE_VAR(BOOL,MCSTART3)
  __DECLARE_VAR(BOOL,MCSTART4)
  __DECLARE_VAR(BOOL,MCSTOP0)
  __DECLARE_VAR(BOOL,MCSTOP1)
  __DECLARE_VAR(BOOL,MCSTOP2)
  __DECLARE_VAR(BOOL,MCSTOP3)
  __DECLARE_VAR(BOOL,MCSTOP4)
  __DECLARE_VAR(BOOL,C5KIRI)
  __DECLARE_VAR(BOOL,C6)
  __DECLARE_VAR(BOOL,C7)
  __DECLARE_VAR(BOOL,C8)
  __DECLARE_VAR(BOOL,C9)
  __DECLARE_VAR(BOOL,C10)
  __DECLARE_VAR(BOOL,C11)
  __DECLARE_VAR(BOOL,PUSH1)
  __DECLARE_VAR(BOOL,PUSH2)
  __DECLARE_VAR(BOOL,PUSH3)
  __DECLARE_VAR(BOOL,PUSH4)
  __DECLARE_VAR(BOOL,BC14)
  __DECLARE_VAR(BOOL,BC15)
  __DECLARE_VAR(BOOL,BC16)
  __DECLARE_VAR(BOOL,BC17)
  __DECLARE_VAR(BOOL,DDS1)
  __DECLARE_VAR(BOOL,DDS2)
  __DECLARE_VAR(BOOL,DDS3)
  __DECLARE_VAR(BOOL,DDS4)
  __DECLARE_VAR(BOOL,DDS5)
  TON TON0;
  TON TON1;
  TON TON2;
  TON TON3;
  TON TON4;
  TOF TOF0;

} PT1;

void PT1_init__(PT1 *data__, BOOL retain);
// Code part
void PT1_body__(PT1 *data__);
#endif //__POUS_H