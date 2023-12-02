void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void PART2_init__(PART2 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_EXTERNAL(BOOL,SENDIF17,data__->SENDIF17,retain)
  __INIT_VAR(data__->SENDIF18,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF19,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF21,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF22,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF23,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF24,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF25,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TFONTLIMIT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TFONTLIMIT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TFONTLIMIT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TFONTLIMIT4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->T90LIMIT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->T90LIMIT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->T90LIMIT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->T90LIMIT4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLCON6_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRPOS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRNEG1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRPOS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRNEG2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRPOS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRNEG3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRPOS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTRNEG4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINPLUS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINPLUS5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINLEFT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINLEFT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINLEFT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINLEFT4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CHAINLEFT5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP4,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PART2_body__(PART2 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,ROLCON6_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTOP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTOP2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTOP3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTOP4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON2_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON2_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,ROLCON6_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINPLUS5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINPLUS1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINLEFT1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINLEFT2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINLEFT3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINLEFT4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CHAINLEFT5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTOP1,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTOP2,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTOP3,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTOP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF18,)) {
    __SET_VAR(data__->,TTRPOS1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF22,)) {
    __SET_VAR(data__->,TTRPOS3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT1,)) {
    __SET_VAR(data__->,TURNTABLE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT1,)) {
    __SET_VAR(data__->,TTRPOS1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TFONTLIMIT3,)) {
    __SET_VAR(data__->,TURNTABLE3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT3,)) {
    __SET_VAR(data__->,TTRPOS3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->T90LIMIT1,)) {
    __SET_VAR(data__->,TTRNEG1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->T90LIMIT3,)) {
    __SET_VAR(data__->,TTRNEG3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF19,)) {
    __SET_VAR(data__->,TURNTABLE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF19,)) {
    __SET_VAR(data__->,TTRNEG1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF25,)) {
    __SET_VAR(data__->,TURNTABLE3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF25,)) {
    __SET_VAR(data__->,TTRNEG3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF20,)) {
    __SET_VAR(data__->,TTRPOS2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF23,)) {
    __SET_VAR(data__->,TTRPOS4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT2,)) {
    __SET_VAR(data__->,TURNTABLE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT2,)) {
    __SET_VAR(data__->,TTRPOS2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TFONTLIMIT4,)) {
    __SET_VAR(data__->,TURNTABLE4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TFONTLIMIT4,)) {
    __SET_VAR(data__->,TTRPOS4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->T90LIMIT2,)) {
    __SET_VAR(data__->,TTRNEG2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->T90LIMIT4,)) {
    __SET_VAR(data__->,TTRNEG4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF21,)) {
    __SET_VAR(data__->,TURNTABLE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF21,)) {
    __SET_VAR(data__->,TTRNEG2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF24,)) {
    __SET_VAR(data__->,TURNTABLE4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF24,)) {
    __SET_VAR(data__->,TTRNEG4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP1,)) {
    __SET_VAR(data__->,CHAINPLUS1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP3,)) {
    __SET_VAR(data__->,CHAINPLUS5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINPLUS1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINLEFT1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINLEFT2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINLEFT3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINLEFT4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CHAINLEFT5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP4,)) {
    __SET_VAR(data__->,CHAINPLUS5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP4,)) {
    __SET_VAR(data__->,CHAINLEFT5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP4,)) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,CHAINLEFT1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,CHAINLEFT2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,CHAINLEFT3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,CHAINLEFT4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,CHAINLEFT5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PART2_body__() 





static inline INT __PART3_ADD__INT__INT1(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD46_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD46_ENO,,__TMP_ENO);
  return __res;
}

void PART3_init__(PART3 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,SENDIF17,data__->SENDIF17,retain)
  __INIT_VAR(data__->X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CAPSEN5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CAPSEN6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPCON1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOPCON2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TARGET,0,retain)
  __INIT_VAR(data__->DIGDISPLY,0,retain)
  __INIT_VAR(data__->DIGDISPLY0,0,retain)
  __INIT_VAR(data__->VIRWH1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRWH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRWH3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRWH4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLOCKX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLOCKZ,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRS2,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON7,retain);
  CTU_init__(&data__->CTU1,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  F_TRIG_init__(&data__->F_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  __INIT_VAR(data__->_TMP_AND69_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_OUT,0,retain)
}

// Code part
void PART3_body__(PART3 *data__) {
  // Initialise TEMP variables

  if (__GET_VAR(data__->VIRWH1,)) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIRWH1,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,LIFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIRWH2,,(__GET_VAR(data__->TON1.Q,) || __GET_VAR(data__->TON1.Q,)));
  if (__GET_EXTERNAL(data__->SENDIF17,)) {
    __SET_VAR(data__->,VIRWH1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIRWH2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIRWH3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIRWH1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->VIRWH1,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,VIRBACK,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TON2.Q,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->RESET,));
  __SET_VAR(data__->CTU0.,PV,,54);
  CTU_body__(&data__->CTU0);
  __SET_VAR(data__->,TARGET,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->X,));
  F_TRIG_body__(&data__->F_TRIG1);
  if (__GET_VAR(data__->F_TRIG1.Q,)) {
    __SET_VAR(data__->,VIRBLOCKX,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGDISPLY,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->Z,));
  F_TRIG_body__(&data__->F_TRIG2);
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_VAR(data__->Z,));
  F_TRIG_body__(&data__->F_TRIG3);
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->F_TRIG3.Q,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_EXTERNAL(data__->SENDIF17,));
  __SET_VAR(data__->CTU1.,PV,,2);
  CTU_body__(&data__->CTU1);
  if ((__GET_VAR(data__->F_TRIG2.Q,) && __GET_VAR(data__->CTU1.Q,))) {
    __SET_VAR(data__->,VIRBLOCKZ,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->VIRBACK,) && __GET_VAR(data__->VIRWH3,))) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,(__GET_VAR(data__->VIRBACK,) && __GET_VAR(data__->VIRWH3,)));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,LIFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,VIRWH4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGDISPLY0,,__GET_VAR(data__->CTU1.CV,));
  __SET_VAR(data__->,_TMP_AND69_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLOCKZ,),
    (BOOL)__GET_VAR(data__->VIRBLOCKX,)));
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBACK,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->VIRWH4,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIRWH3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIRWH4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLOCKX,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLOCKZ,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIRBACK,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_ADD46_OUT,,__PART3_ADD__INT__INT1(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD46_ENO,)) {
    __SET_VAR(data__->,TARGET,,__GET_VAR(data__->_TMP_ADD46_OUT,));
  };
  __SET_VAR(data__->,STOPCON1,,(!(__GET_VAR(data__->VIRS1,)) && __GET_VAR(data__->CAPSEN5,)));
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->STOPCON1,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 4000, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,VIRS1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->VIRS1,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 2000, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,VIRS1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,STOPCON2,,(!(__GET_VAR(data__->VIRS2,)) && __GET_VAR(data__->CAPSEN6,)));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->STOPCON2,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 4000, 0, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,VIRS2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->VIRS2,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 2000, 0, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,VIRS2,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PART3_body__() 





static inline INT __JS4FINALE_MOVE__INT__INT1(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE431_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE431_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT2(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE679_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE679_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT3(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE243_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE243_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT4(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE497_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE497_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT5(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE214_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE214_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT6(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE218_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE218_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT7(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE460_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE460_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT8(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE468_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE468_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT9(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE472_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE472_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT10(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE695_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE695_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT11(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE432_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE432_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT12(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE222_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE222_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT13(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE680_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE680_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT14(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE476_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE476_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT15(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE226_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE226_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT16(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE235_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE235_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT17(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE480_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE480_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT18(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE489_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE489_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT19(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE258_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE258_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT20(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE511_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE511_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT21(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE262_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE262_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT22(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE287_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE287_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT23(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE463_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE463_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT24(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE515_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE515_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT25(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE540_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE540_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT26(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE698_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE698_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT27(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE266_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE266_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT28(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE270_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE270_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT29(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE519_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE519_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT30(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE523_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE523_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT31(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE279_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE279_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT32(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE416_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE416_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT33(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE532_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE532_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT34(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE666_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE666_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT35(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE334_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE334_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT36(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE587_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE587_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT37(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE305_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE305_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT38(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE347_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE347_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT39(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE309_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE309_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT40(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE558_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE558_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT41(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE600_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE600_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT42(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE562_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE562_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT43(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE313_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE313_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT44(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE317_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE317_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT45(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE566_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE566_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT46(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE570_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE570_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT47(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE326_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE326_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT48(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE427_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE427_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT49(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE579_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE579_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT50(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE675_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE675_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT51(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE381_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE381_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT52(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE634_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE634_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT53(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE352_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE352_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT54(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE394_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE394_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT55(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE356_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE356_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT56(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE605_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE605_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT57(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE647_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE647_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT58(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE609_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE609_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT59(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE360_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE360_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT60(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE364_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE364_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT61(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE613_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE613_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT62(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE617_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE617_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT63(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE373_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE373_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT64(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE429_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE429_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT65(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE626_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE626_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __JS4FINALE_MOVE__INT__INT66(BOOL EN,
  INT IN,
  JS4FINALE *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE677_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE677_ENO,,__TMP_ENO);
  return __res;
}

void JS4FINALE_init__(JS4FINALE *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->SENDIF1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCLIDS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCLIDS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLPRISE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLPRISE4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSHER4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABXYZ1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPXYZ1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABXYZ2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPXYZ2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SPX1,0,retain)
  __INIT_VAR(data__->SPY1,0,retain)
  __INIT_VAR(data__->SPZ1,0,retain)
  __INIT_VAR(data__->SPX2,0,retain)
  __INIT_VAR(data__->SPY2,0,retain)
  __INIT_VAR(data__->SPZ2,0,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ1_9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ1_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ1_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ1_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ1_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ1_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ1_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ1_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ1_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRDIF13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRDIF14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRXYZ2_9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ2_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRABVIRXYZ2_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ2_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLOCKXYZ2_4,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  TON_init__(&data__->TON16,retain);
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TON_init__(&data__->TON20,retain);
  TON_init__(&data__->TON21,retain);
  TON_init__(&data__->TON22,retain);
  TON_init__(&data__->TON23,retain);
  TON_init__(&data__->TON24,retain);
  TON_init__(&data__->TON25,retain);
  TON_init__(&data__->TON26,retain);
  TON_init__(&data__->TON27,retain);
  TON_init__(&data__->TON28,retain);
  TON_init__(&data__->TON29,retain);
  TON_init__(&data__->TON30,retain);
  TON_init__(&data__->TON31,retain);
  TON_init__(&data__->TON32,retain);
  TON_init__(&data__->TON33,retain);
  TON_init__(&data__->TON34,retain);
  TON_init__(&data__->TON35,retain);
  TOF_init__(&data__->TOF0,retain);
  TON_init__(&data__->TON36,retain);
  TON_init__(&data__->TON37,retain);
  TON_init__(&data__->TON38,retain);
  TON_init__(&data__->TON39,retain);
  TON_init__(&data__->TON40,retain);
  TON_init__(&data__->TON41,retain);
  TON_init__(&data__->TON42,retain);
  TON_init__(&data__->TON43,retain);
  TON_init__(&data__->TON44,retain);
  TON_init__(&data__->TON45,retain);
  TON_init__(&data__->TON46,retain);
  TON_init__(&data__->TON47,retain);
  TON_init__(&data__->TON48,retain);
  TON_init__(&data__->TON49,retain);
  TON_init__(&data__->TON50,retain);
  TON_init__(&data__->TON51,retain);
  TON_init__(&data__->TON52,retain);
  TON_init__(&data__->TON53,retain);
  TON_init__(&data__->TON54,retain);
  TON_init__(&data__->TON55,retain);
  TOF_init__(&data__->TOF1,retain);
  __INIT_VAR(data__->_TMP_MOVE431_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE431_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE679_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE679_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE243_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE243_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE497_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE497_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE214_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE214_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE218_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE218_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE460_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE460_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE468_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE468_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE472_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE472_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE695_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE695_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE432_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE432_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE222_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE222_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE680_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE680_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE476_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE476_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE226_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE226_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE235_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE235_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE480_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE480_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE489_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE489_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE258_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE258_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE511_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE511_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE262_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE262_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE287_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE287_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE463_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE463_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE515_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE515_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE540_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE540_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE698_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE698_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE266_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE266_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE270_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE270_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE519_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE519_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE523_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE523_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE279_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE279_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE416_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE416_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE532_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE532_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE666_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE666_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE334_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE334_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE587_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE587_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE305_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE305_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE347_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE347_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE309_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE309_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE558_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE558_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE600_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE600_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE562_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE562_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE313_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE313_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE317_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE317_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE566_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE566_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE570_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE570_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE326_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE326_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE427_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE427_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE579_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE579_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE675_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE675_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE381_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE381_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE634_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE634_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE352_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE352_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE394_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE394_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE356_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE356_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE605_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE605_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE647_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE647_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE609_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE609_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE360_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE360_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE364_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE364_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE613_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE613_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE617_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE617_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE373_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE373_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE429_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE429_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE626_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE626_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE677_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE677_OUT,0,retain)
}

// Code part
void JS4FINALE_body__(JS4FINALE *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_9,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLPRISE2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLPRISE4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_10,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_11,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_12,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_13,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_14,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_12,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_13,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_14,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF1,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF3,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  if (__BOOL_LITERAL(TRUE)) {
    __SET_VAR(data__->,MCLIDS3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 3500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,MCSTART1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 700, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,CON2_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,MCSTART3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF5,)) {
    __SET_VAR(data__->,MCSTART1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF5,)) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF7,)) {
    __SET_VAR(data__->,CON2_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF7,)) {
    __SET_VAR(data__->,MCSTART3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF2,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF4,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__BOOL_LITERAL(TRUE)) {
    __SET_VAR(data__->,MCLIDS4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 3500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,MCSTART2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 700, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,CON2_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,MCSTART4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF6,)) {
    __SET_VAR(data__->,MCSTART2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF6,)) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF8,)) {
    __SET_VAR(data__->,CON2_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF8,)) {
    __SET_VAR(data__->,MCSTART4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,PUSHER1,,__GET_VAR(data__->SENVIS1,));
  __SET_VAR(data__->,PUSHER2,,__GET_VAR(data__->SENVIS2,));
  __SET_VAR(data__->,PUSHER3,,__GET_VAR(data__->SENVIS3,));
  __SET_VAR(data__->,PUSHER4,,__GET_VAR(data__->SENVIS4,));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->TON15.Q,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR5,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON12.,IN,,(__GET_VAR(data__->VIR8,) && __GET_VAR(data__->TON11.Q,)));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON12);
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->TON12.Q,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  if (__GET_VAR(data__->TON13.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR9,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIR9,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,(__GET_VAR(data__->VIR12,) && __GET_VAR(data__->TON6.Q,)));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->TON7.Q,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,CLPRISE4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,CLPRISE4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CLPRISE2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,CLPRISE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF11,)) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF9,)) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF11,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF9,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF12,)) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF10,)) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF12,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF10,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE431_OUT,,__JS4FINALE_MOVE__INT__INT1(
    (BOOL)__GET_EXTERNAL(data__->START,),
    (INT)160,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE431_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE431_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE679_OUT,,__JS4FINALE_MOVE__INT__INT2(
    (BOOL)__GET_EXTERNAL(data__->START,),
    (INT)950,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE679_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE679_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE243_OUT,,__JS4FINALE_MOVE__INT__INT3(
    (BOOL)(!(__GET_VAR(data__->BLOCKXYZ1_1,)) && __GET_VAR(data__->VIRDIF13,)),
    (INT)810,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE243_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->_TMP_MOVE243_ENO,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE497_OUT,,__JS4FINALE_MOVE__INT__INT4(
    (BOOL)(!(__GET_VAR(data__->BLOCKXYZ2_1,)) && __GET_VAR(data__->VIRDIF14,)),
    (INT)810,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE497_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON40.,IN,,__GET_VAR(data__->_TMP_MOVE497_ENO,));
  __SET_VAR(data__->TON40.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON40);
  if (__GET_VAR(data__->TON40.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE243_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE243_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE497_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE497_OUT,));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_1,)) {
    __SET_VAR(data__->,VIRDIF13,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE214_OUT,,__JS4FINALE_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ1_1,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE214_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->_TMP_MOVE214_ENO,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON18);
  __SET_VAR(data__->,_TMP_MOVE218_OUT,,__JS4FINALE_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON18.Q,),
    (INT)730,
    data__));
  __SET_VAR(data__->,_TMP_MOVE460_OUT,,__JS4FINALE_MOVE__INT__INT7(
    (BOOL)__GET_VAR(data__->_TMP_MOVE218_ENO,),
    (INT)60,
    data__));
  __SET_VAR(data__->,VIRXYZ1_1,,__GET_VAR(data__->_TMP_MOVE460_ENO,));
  if (__GET_VAR(data__->GRABVIRXYZ2_1,)) {
    __SET_VAR(data__->,VIRDIF14,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE468_OUT,,__JS4FINALE_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ2_1,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE468_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON38.,IN,,__GET_VAR(data__->_TMP_MOVE468_ENO,));
  __SET_VAR(data__->TON38.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON38);
  __SET_VAR(data__->,_TMP_MOVE472_OUT,,__JS4FINALE_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->TON38.Q,),
    (INT)730,
    data__));
  __SET_VAR(data__->,_TMP_MOVE695_OUT,,__JS4FINALE_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->_TMP_MOVE472_ENO,),
    (INT)950,
    data__));
  __SET_VAR(data__->,VIRXYZ2_1,,__GET_VAR(data__->_TMP_MOVE695_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE214_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE214_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE468_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE468_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE218_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE218_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE472_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE472_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE460_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE460_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE695_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE695_OUT,));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->VIRXYZ1_1,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON19);
  __SET_VAR(data__->,_TMP_MOVE432_OUT,,__JS4FINALE_MOVE__INT__INT11(
    (BOOL)__GET_VAR(data__->TON19.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->_TMP_MOVE432_ENO,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON16);
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE222_OUT,,__JS4FINALE_MOVE__INT__INT12(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE222_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON39.,IN,,__GET_VAR(data__->VIRXYZ2_1,));
  __SET_VAR(data__->TON39.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON39);
  __SET_VAR(data__->,_TMP_MOVE680_OUT,,__JS4FINALE_MOVE__INT__INT13(
    (BOOL)__GET_VAR(data__->TON39.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON36.,IN,,__GET_VAR(data__->_TMP_MOVE680_ENO,));
  __SET_VAR(data__->TON36.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON36);
  if (__GET_VAR(data__->TON36.Q,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON36.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE476_OUT,,__JS4FINALE_MOVE__INT__INT14(
    (BOOL)__GET_VAR(data__->TON36.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE476_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE432_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE432_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE680_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE680_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE222_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE222_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE476_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE476_OUT,));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->VIRXYZ1_2,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 1, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  __SET_VAR(data__->,_TMP_MOVE226_OUT,,__JS4FINALE_MOVE__INT__INT15(
    (BOOL)__GET_VAR(data__->TON17.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE235_OUT,,__JS4FINALE_MOVE__INT__INT16(
    (BOOL)__GET_VAR(data__->_TMP_MOVE226_ENO,),
    (INT)160,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE235_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE235_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE235_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON37.,IN,,__GET_VAR(data__->VIRXYZ2_2,));
  __SET_VAR(data__->TON37.,PT,,__time_to_timespec(1, 1, 0, 0, 0, 0));
  TON_body__(&data__->TON37);
  __SET_VAR(data__->,_TMP_MOVE480_OUT,,__JS4FINALE_MOVE__INT__INT17(
    (BOOL)__GET_VAR(data__->TON37.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE489_OUT,,__JS4FINALE_MOVE__INT__INT18(
    (BOOL)__GET_VAR(data__->_TMP_MOVE480_ENO,),
    (INT)950,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE489_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE489_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE489_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE226_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE226_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE480_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE480_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE235_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE235_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE489_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE489_OUT,));
  };
  if ((__GET_VAR(data__->BLOCKXYZ1_2,) && __GET_VAR(data__->VIRDIF13,))) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE258_OUT,,__JS4FINALE_MOVE__INT__INT19(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ1_2,) && __GET_VAR(data__->VIRDIF13,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON25.,IN,,__GET_VAR(data__->_TMP_MOVE258_ENO,));
  __SET_VAR(data__->TON25.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON25);
  if (__GET_VAR(data__->TON25.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_2,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->BLOCKXYZ2_2,) && __GET_VAR(data__->VIRDIF14,))) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE511_OUT,,__JS4FINALE_MOVE__INT__INT20(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ2_2,) && __GET_VAR(data__->VIRDIF14,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON45.,IN,,__GET_VAR(data__->_TMP_MOVE511_ENO,));
  __SET_VAR(data__->TON45.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON45);
  if (__GET_VAR(data__->TON45.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE258_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE258_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE511_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE511_OUT,));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_2,)) {
    __SET_VAR(data__->,VIRDIF13,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE262_OUT,,__JS4FINALE_MOVE__INT__INT21(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ1_2,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE262_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON23.,IN,,__GET_VAR(data__->_TMP_MOVE262_ENO,));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON23);
  __SET_VAR(data__->,_TMP_MOVE287_OUT,,__JS4FINALE_MOVE__INT__INT22(
    (BOOL)__GET_VAR(data__->TON23.Q,),
    (INT)920,
    data__));
  __SET_VAR(data__->,_TMP_MOVE463_OUT,,__JS4FINALE_MOVE__INT__INT23(
    (BOOL)__GET_VAR(data__->_TMP_MOVE287_ENO,),
    (INT)60,
    data__));
  __SET_VAR(data__->,VIRXYZ1_3,,__GET_VAR(data__->_TMP_MOVE463_ENO,));
  if (__GET_VAR(data__->GRABVIRXYZ2_2,)) {
    __SET_VAR(data__->,VIRDIF14,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE515_OUT,,__JS4FINALE_MOVE__INT__INT24(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ2_2,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE515_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON43.,IN,,__GET_VAR(data__->_TMP_MOVE515_ENO,));
  __SET_VAR(data__->TON43.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON43);
  __SET_VAR(data__->,_TMP_MOVE540_OUT,,__JS4FINALE_MOVE__INT__INT25(
    (BOOL)__GET_VAR(data__->TON43.Q,),
    (INT)920,
    data__));
  __SET_VAR(data__->,_TMP_MOVE698_OUT,,__JS4FINALE_MOVE__INT__INT26(
    (BOOL)__GET_VAR(data__->_TMP_MOVE540_ENO,),
    (INT)950,
    data__));
  __SET_VAR(data__->,VIRXYZ2_3,,__GET_VAR(data__->_TMP_MOVE698_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE262_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE262_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE287_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE287_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE515_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE515_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE540_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE540_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE463_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE463_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE698_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE698_OUT,));
  };
  __SET_VAR(data__->TON24.,IN,,__GET_VAR(data__->VIRXYZ1_3,));
  __SET_VAR(data__->TON24.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON24);
  __SET_VAR(data__->,_TMP_MOVE266_OUT,,__JS4FINALE_MOVE__INT__INT27(
    (BOOL)__GET_VAR(data__->TON24.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->_TMP_MOVE266_ENO,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE270_OUT,,__JS4FINALE_MOVE__INT__INT28(
    (BOOL)__GET_VAR(data__->TON21.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE270_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON44.,IN,,__GET_VAR(data__->VIRXYZ2_3,));
  __SET_VAR(data__->TON44.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON44);
  __SET_VAR(data__->,_TMP_MOVE519_OUT,,__JS4FINALE_MOVE__INT__INT29(
    (BOOL)__GET_VAR(data__->TON44.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON41.,IN,,__GET_VAR(data__->_TMP_MOVE519_ENO,));
  __SET_VAR(data__->TON41.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON41);
  if (__GET_VAR(data__->TON41.Q,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON41.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE523_OUT,,__JS4FINALE_MOVE__INT__INT30(
    (BOOL)__GET_VAR(data__->TON41.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE523_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE266_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE266_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE270_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE270_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE519_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE519_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE523_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE523_OUT,));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->VIRXYZ1_4,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON22);
  __SET_VAR(data__->,_TMP_MOVE279_OUT,,__JS4FINALE_MOVE__INT__INT31(
    (BOOL)__GET_VAR(data__->TON22.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE416_OUT,,__JS4FINALE_MOVE__INT__INT32(
    (BOOL)__GET_VAR(data__->_TMP_MOVE279_ENO,),
    (INT)160,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE416_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE416_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE416_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON42.,IN,,__GET_VAR(data__->VIRXYZ2_4,));
  __SET_VAR(data__->TON42.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON42);
  __SET_VAR(data__->,_TMP_MOVE532_OUT,,__JS4FINALE_MOVE__INT__INT33(
    (BOOL)__GET_VAR(data__->TON42.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE666_OUT,,__JS4FINALE_MOVE__INT__INT34(
    (BOOL)__GET_VAR(data__->_TMP_MOVE532_ENO,),
    (INT)950,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE666_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE666_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE666_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE279_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE279_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE416_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE416_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE532_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE532_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE666_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE666_OUT,));
  };
  if ((__GET_VAR(data__->BLOCKXYZ1_3,) && __GET_VAR(data__->VIRDIF13,))) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE334_OUT,,__JS4FINALE_MOVE__INT__INT35(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ1_3,) && __GET_VAR(data__->VIRDIF13,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON30.,IN,,__GET_VAR(data__->_TMP_MOVE334_ENO,));
  __SET_VAR(data__->TON30.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON30);
  if (__GET_VAR(data__->TON30.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_3,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->BLOCKXYZ2_3,) && __GET_VAR(data__->VIRDIF14,))) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE587_OUT,,__JS4FINALE_MOVE__INT__INT36(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ2_3,) && __GET_VAR(data__->VIRDIF14,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON50.,IN,,__GET_VAR(data__->_TMP_MOVE587_ENO,));
  __SET_VAR(data__->TON50.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON50);
  if (__GET_VAR(data__->TON50.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE334_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE334_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE587_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE587_OUT,));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_3,)) {
    __SET_VAR(data__->,VIRDIF13,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_3,)) {
    __SET_VAR(data__->,VIRDIF14,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE305_OUT,,__JS4FINALE_MOVE__INT__INT37(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ1_3,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE305_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON28.,IN,,__GET_VAR(data__->_TMP_MOVE305_ENO,));
  __SET_VAR(data__->TON28.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON28);
  __SET_VAR(data__->,_TMP_MOVE347_OUT,,__JS4FINALE_MOVE__INT__INT38(
    (BOOL)__GET_VAR(data__->TON28.Q,),
    (INT)370,
    data__));
  __SET_VAR(data__->,_TMP_MOVE309_OUT,,__JS4FINALE_MOVE__INT__INT39(
    (BOOL)__GET_VAR(data__->_TMP_MOVE347_ENO,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIRXYZ1_5,,__GET_VAR(data__->_TMP_MOVE309_ENO,));
  __SET_VAR(data__->,_TMP_MOVE558_OUT,,__JS4FINALE_MOVE__INT__INT40(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ2_3,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE558_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON48.,IN,,__GET_VAR(data__->_TMP_MOVE558_ENO,));
  __SET_VAR(data__->TON48.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON48);
  __SET_VAR(data__->,_TMP_MOVE600_OUT,,__JS4FINALE_MOVE__INT__INT41(
    (BOOL)__GET_VAR(data__->TON48.Q,),
    (INT)640,
    data__));
  __SET_VAR(data__->,_TMP_MOVE562_OUT,,__JS4FINALE_MOVE__INT__INT42(
    (BOOL)__GET_VAR(data__->_TMP_MOVE600_ENO,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIRXYZ2_5,,__GET_VAR(data__->_TMP_MOVE562_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE347_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE347_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE600_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE600_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE309_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE309_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE562_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE562_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE305_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE305_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE558_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE558_OUT,));
  };
  __SET_VAR(data__->TON29.,IN,,__GET_VAR(data__->VIRXYZ1_5,));
  __SET_VAR(data__->TON29.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON29);
  __SET_VAR(data__->,_TMP_MOVE313_OUT,,__JS4FINALE_MOVE__INT__INT43(
    (BOOL)__GET_VAR(data__->TON29.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON26.,IN,,__GET_VAR(data__->_TMP_MOVE313_ENO,));
  __SET_VAR(data__->TON26.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON26);
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE317_OUT,,__JS4FINALE_MOVE__INT__INT44(
    (BOOL)__GET_VAR(data__->TON26.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE317_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON49.,IN,,__GET_VAR(data__->VIRXYZ2_5,));
  __SET_VAR(data__->TON49.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON49);
  __SET_VAR(data__->,_TMP_MOVE566_OUT,,__JS4FINALE_MOVE__INT__INT45(
    (BOOL)__GET_VAR(data__->TON49.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON46.,IN,,__GET_VAR(data__->_TMP_MOVE566_ENO,));
  __SET_VAR(data__->TON46.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON46);
  if (__GET_VAR(data__->TON46.Q,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON46.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE570_OUT,,__JS4FINALE_MOVE__INT__INT46(
    (BOOL)__GET_VAR(data__->TON46.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE570_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE313_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE313_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE566_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE566_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE317_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE317_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE570_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE570_OUT,));
  };
  __SET_VAR(data__->TON27.,IN,,__GET_VAR(data__->VIRXYZ1_6,));
  __SET_VAR(data__->TON27.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON27);
  __SET_VAR(data__->,_TMP_MOVE326_OUT,,__JS4FINALE_MOVE__INT__INT47(
    (BOOL)__GET_VAR(data__->TON27.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE427_OUT,,__JS4FINALE_MOVE__INT__INT48(
    (BOOL)__GET_VAR(data__->_TMP_MOVE326_ENO,),
    (INT)160,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE427_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE427_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE427_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON47.,IN,,__GET_VAR(data__->VIRXYZ2_6,));
  __SET_VAR(data__->TON47.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON47);
  __SET_VAR(data__->,_TMP_MOVE579_OUT,,__JS4FINALE_MOVE__INT__INT49(
    (BOOL)__GET_VAR(data__->TON47.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE675_OUT,,__JS4FINALE_MOVE__INT__INT50(
    (BOOL)__GET_VAR(data__->_TMP_MOVE579_ENO,),
    (INT)950,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE675_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE675_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE675_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE326_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE326_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE579_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE579_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE427_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE427_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE675_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE675_OUT,));
  };
  if ((__GET_VAR(data__->BLOCKXYZ1_4,) && __GET_VAR(data__->VIRDIF13,))) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE381_OUT,,__JS4FINALE_MOVE__INT__INT51(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ1_4,) && __GET_VAR(data__->VIRDIF13,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON35.,IN,,__GET_VAR(data__->_TMP_MOVE381_ENO,));
  __SET_VAR(data__->TON35.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON35);
  if (__GET_VAR(data__->TON35.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_4,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->BLOCKXYZ2_4,) && __GET_VAR(data__->VIRDIF14,))) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE634_OUT,,__JS4FINALE_MOVE__INT__INT52(
    (BOOL)(__GET_VAR(data__->BLOCKXYZ2_4,) && __GET_VAR(data__->VIRDIF14,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON55.,IN,,__GET_VAR(data__->_TMP_MOVE634_ENO,));
  __SET_VAR(data__->TON55.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON55);
  if (__GET_VAR(data__->TON55.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE381_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE381_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE634_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE634_OUT,));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_4,)) {
    __SET_VAR(data__->,VIRDIF13,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_4,)) {
    __SET_VAR(data__->,VIRDIF14,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE352_OUT,,__JS4FINALE_MOVE__INT__INT53(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ1_4,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE352_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON33.,IN,,__GET_VAR(data__->_TMP_MOVE352_ENO,));
  __SET_VAR(data__->TON33.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON33);
  __SET_VAR(data__->,_TMP_MOVE394_OUT,,__JS4FINALE_MOVE__INT__INT54(
    (BOOL)__GET_VAR(data__->TON33.Q,),
    (INT)370,
    data__));
  __SET_VAR(data__->,_TMP_MOVE356_OUT,,__JS4FINALE_MOVE__INT__INT55(
    (BOOL)__GET_VAR(data__->_TMP_MOVE394_ENO,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIRXYZ1_7,,__GET_VAR(data__->_TMP_MOVE356_ENO,));
  __SET_VAR(data__->,_TMP_MOVE605_OUT,,__JS4FINALE_MOVE__INT__INT56(
    (BOOL)__GET_VAR(data__->GRABVIRXYZ2_4,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE605_ENO,)) {
    __SET_VAR(data__->,CLAMPXYZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON53.,IN,,__GET_VAR(data__->_TMP_MOVE605_ENO,));
  __SET_VAR(data__->TON53.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON53);
  __SET_VAR(data__->,_TMP_MOVE647_OUT,,__JS4FINALE_MOVE__INT__INT57(
    (BOOL)__GET_VAR(data__->TON53.Q,),
    (INT)640,
    data__));
  __SET_VAR(data__->,_TMP_MOVE609_OUT,,__JS4FINALE_MOVE__INT__INT58(
    (BOOL)__GET_VAR(data__->_TMP_MOVE647_ENO,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIRXYZ2_7,,__GET_VAR(data__->_TMP_MOVE609_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE352_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE352_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE605_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE605_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE394_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE394_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE356_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE356_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE647_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE647_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE609_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE609_OUT,));
  };
  __SET_VAR(data__->TON34.,IN,,__GET_VAR(data__->VIRXYZ1_7,));
  __SET_VAR(data__->TON34.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON34);
  __SET_VAR(data__->,_TMP_MOVE360_OUT,,__JS4FINALE_MOVE__INT__INT59(
    (BOOL)__GET_VAR(data__->TON34.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON31.,IN,,__GET_VAR(data__->_TMP_MOVE360_ENO,));
  __SET_VAR(data__->TON31.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON31);
  if (__GET_VAR(data__->TON31.Q,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON31.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ1_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE364_OUT,,__JS4FINALE_MOVE__INT__INT60(
    (BOOL)__GET_VAR(data__->TON31.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE364_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON54.,IN,,__GET_VAR(data__->VIRXYZ2_7,));
  __SET_VAR(data__->TON54.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON54);
  __SET_VAR(data__->,_TMP_MOVE613_OUT,,__JS4FINALE_MOVE__INT__INT61(
    (BOOL)__GET_VAR(data__->TON54.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON51.,IN,,__GET_VAR(data__->_TMP_MOVE613_ENO,));
  __SET_VAR(data__->TON51.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON51);
  if (__GET_VAR(data__->TON51.Q,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON51.Q,)) {
    __SET_VAR(data__->,GRABVIRXYZ2_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE617_OUT,,__JS4FINALE_MOVE__INT__INT62(
    (BOOL)__GET_VAR(data__->TON51.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE617_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE360_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE360_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE613_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE613_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE364_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE364_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE617_ENO,)) {
    __SET_VAR(data__->,SPZ2,,__GET_VAR(data__->_TMP_MOVE617_OUT,));
  };
  __SET_VAR(data__->TON32.,IN,,__GET_VAR(data__->VIRXYZ1_8,));
  __SET_VAR(data__->TON32.,PT,,__time_to_timespec(1, 1200, 0, 0, 0, 0));
  TON_body__(&data__->TON32);
  __SET_VAR(data__->,_TMP_MOVE373_OUT,,__JS4FINALE_MOVE__INT__INT63(
    (BOOL)__GET_VAR(data__->TON32.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE429_OUT,,__JS4FINALE_MOVE__INT__INT64(
    (BOOL)__GET_VAR(data__->_TMP_MOVE373_ENO,),
    (INT)160,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE429_ENO,)) {
    __SET_VAR(data__->,VIRXYZ1_8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE429_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE429_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ1_1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE429_ENO,)) {
    __SET_VAR(data__->,CON6_12,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON52.,IN,,__GET_VAR(data__->VIRXYZ2_8,));
  __SET_VAR(data__->TON52.,PT,,__time_to_timespec(1, 1200, 0, 0, 0, 0));
  TON_body__(&data__->TON52);
  __SET_VAR(data__->,_TMP_MOVE626_OUT,,__JS4FINALE_MOVE__INT__INT65(
    (BOOL)__GET_VAR(data__->TON52.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->,_TMP_MOVE677_OUT,,__JS4FINALE_MOVE__INT__INT66(
    (BOOL)__GET_VAR(data__->_TMP_MOVE626_ENO,),
    (INT)950,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE677_ENO,)) {
    __SET_VAR(data__->,VIRXYZ2_8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE677_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE677_ENO,)) {
    __SET_VAR(data__->,BLOCKXYZ2_1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE677_ENO,)) {
    __SET_VAR(data__->,CON6_14,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE373_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE373_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE429_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE429_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE626_ENO,)) {
    __SET_VAR(data__->,SPX2,,__GET_VAR(data__->_TMP_MOVE626_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE677_ENO,)) {
    __SET_VAR(data__->,SPY2,,__GET_VAR(data__->_TMP_MOVE677_OUT,));
  };
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->_TMP_MOVE429_ENO,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,VIRXYZ1_9,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->_TMP_MOVE677_ENO,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,VIRXYZ2_9,,__GET_VAR(data__->TOF1.Q,));
  if (__GET_VAR(data__->GRABVIRXYZ1_1,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_1,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_2,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->VIRXYZ1_9,)) && __GET_VAR(data__->SENDIF15,))) {
    __SET_VAR(data__->,CON6_12,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_2,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->VIRXYZ2_9,)) && __GET_VAR(data__->SENDIF16,))) {
    __SET_VAR(data__->,CON6_14,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_3,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_3,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF13,)) {
    __SET_VAR(data__->,VIRDIF13,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF14,)) {
    __SET_VAR(data__->,VIRDIF14,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ1_4,)) {
    __SET_VAR(data__->,GRABXYZ1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->GRABVIRXYZ2_4,)) {
    __SET_VAR(data__->,GRABXYZ2,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // JS4FINALE_body__() 





