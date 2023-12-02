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





void PART1_init__(PART1 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_EXTERNAL(BOOL,CONR4_1,data__->CONR4_1,retain)
  __INIT_EXTERNAL(BOOL,CONR4_2,data__->CONR4_2,retain)
  __INIT_EXTERNAL(BOOL,SENDIF13,data__->SENDIF13,retain)
  __INIT_VAR(data__->SENVIS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTFRONTLIMIT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTFRONTLIMIT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTLIMIT90_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTLIMIT90_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONSCALE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONSCALE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONCURV1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONCURV2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTARM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTARM2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTARM3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTURN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTURN2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PIVOTURN3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURNTABLE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTPLES1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTPLES2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ROLLSTOP7,data__->ROLLSTOP7,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR11,__BOOL_LITERAL(FALSE),retain)
  TOF_init__(&data__->TOF1,retain);
  TOF_init__(&data__->TOF2,retain);
  CTU_init__(&data__->CTU0,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
}

// Code part
void PART1_body__(PART1 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->SENCAP10,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->TOF2.,IN,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->TOF2.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TOF_body__(&data__->TOF2);
  __SET_VAR(data__->,ROLLSTOP6,,__GET_VAR(data__->TOF2.Q,));
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONSCALE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONSCALE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONCURV1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONCURV2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->SENDIF13,)) {
    __SET_EXTERNAL(data__->,ROLLSTOP7,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->SENCAP13,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->R_TRIG2.Q,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->ROLLSTOP5,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG3.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->R_TRIG4.Q,));
  __SET_VAR(data__->CTU0.,PV,,2);
  CTU_body__(&data__->CTU0);
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->CTU0.Q,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,ROLLSTOP5,,__GET_VAR(data__->TOF1.Q,));
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON2_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONSCALE1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONSCALE2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONCURV1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONCURV2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TTFRONTLIMIT1,)) {
    __SET_VAR(data__->,TURNTABLE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TTFRONTLIMIT2,)) {
    __SET_VAR(data__->,TURNTABLE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTART1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTART2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTART3,,__BOOL_LITERAL(TRUE));
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
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_7,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,TTPLES1,,(((!(__GET_VAR(data__->TTFRONTLIMIT1,)) && __GET_VAR(data__->TTPLES1,)) || __GET_VAR(data__->SENCAP8,)) || __GET_VAR(data__->TTLIMIT90_1,)));
  __SET_VAR(data__->,TTPLES2,,(((!(__GET_VAR(data__->TTFRONTLIMIT2,)) && __GET_VAR(data__->TTPLES2,)) || __GET_VAR(data__->SENCAP9,)) || __GET_VAR(data__->TTLIMIT90_2,)));
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
    __SET_VAR(data__->,MCSTART1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTART2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTART3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_EXTERNAL(data__->,ROLLSTOP7,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP3,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP6,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PIVOTARM1,,__GET_VAR(data__->SENVIS1,));
  __SET_VAR(data__->,PIVOTURN1,,__GET_VAR(data__->SENVIS1,));
  if (__GET_VAR(data__->VIR1,)) {
    __SET_VAR(data__->,TURNTABLE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR1,)) {
    __SET_VAR(data__->,TTPLES1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,TURNTABLE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,TTPLES2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PIVOTARM2,,__GET_VAR(data__->SENVIS2,));
  __SET_VAR(data__->,PIVOTURN2,,__GET_VAR(data__->SENVIS2,));
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,TURNTABLE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,TTPLES1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,TURNTABLE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,TTPLES2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,PIVOTARM3,,__GET_VAR(data__->SENVIS3,));
  __SET_VAR(data__->,PIVOTURN3,,__GET_VAR(data__->SENVIS3,));
  if (__GET_VAR(data__->SENCAP3,)) {
    __SET_VAR(data__->,ROLLSTOP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP3,)) {
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP6,)) {
    __SET_VAR(data__->,ROLLSTOP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP6,)) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(FALSE));
  };
  if (((!(__GET_VAR(data__->ROLLSTOP1,)) && !(__GET_VAR(data__->VIR10,))) && __GET_EXTERNAL(data__->CONR4_1,))) {
    __SET_VAR(data__->,ROLLSTOP3,,__BOOL_LITERAL(TRUE));
  };
  if (((!(__GET_VAR(data__->ROLLSTOP2,)) && !(__GET_VAR(data__->VIR11,))) && __GET_EXTERNAL(data__->CONR4_2,))) {
    __SET_VAR(data__->,ROLLSTOP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,ROLLSTOP3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,ROLLSTOP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP2,)) {
    __SET_VAR(data__->,CON6_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,ROLLSTOP2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,ROLLSTOP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP5,)) {
    __SET_VAR(data__->,CON6_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP12,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP11,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PART1_body__() 





void PART2_init__(PART2 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->SENDIF1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON4_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RISECLP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RISECLP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RISECLP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB3,__BOOL_LITERAL(FALSE),retain)
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
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON9,retain);
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
}

// Code part
void PART2_body__(PART2 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON4_6,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON4_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP8,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF2,)) {
    __SET_VAR(data__->,CLAMP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF2,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR1,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,(__GET_VAR(data__->VIR4,) && __GET_VAR(data__->TON2.Q,)));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->TON3.Q,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF1,)) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF1,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,GRAB1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,CLAMP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR2,)) {
    __SET_VAR(data__->,RISECLP1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,RISECLP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,CON4_4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,CON4_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->TON11.Q,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,CLAMP5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF6,)) {
    __SET_VAR(data__->,CLAMP5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF6,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR5,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON8.,IN,,(__GET_VAR(data__->VIR8,) && __GET_VAR(data__->TON7.Q,)));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->TON8.Q,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF5,)) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF5,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,GRAB2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,Z2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CLAMP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,RISECLP4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,X2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,RISECLP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,CON4_5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON19);
  if (__GET_VAR(data__->TON19.Q,)) {
    __SET_VAR(data__->,CON4_5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,Z3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->TON17.Q,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON12);
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,GRAB3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,Z3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,CLAMP8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF10,)) {
    __SET_VAR(data__->,CLAMP8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF10,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR9,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->VIR9,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  if (__GET_VAR(data__->TON13.Q,)) {
    __SET_VAR(data__->,X3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON14.,IN,,(__GET_VAR(data__->VIR12,) && __GET_VAR(data__->TON13.Q,)));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,Z3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF9,)) {
    __SET_VAR(data__->,CLAMP7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF9,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,GRAB3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,Z3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,CLAMP7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,RISECLP7,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON16);
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,X3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,RISECLP7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,CON4_6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,CON4_6,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PART2_body__() 





static inline INT __PART3_MOVE__INT__INT1(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE66_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE66_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT2(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE25_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE25_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT3(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE288_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE288_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT4(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE249_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE249_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT5(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE44_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE44_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT6(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE51_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE51_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT7(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE268_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE268_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT8(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE275_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE275_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT9(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE73_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE73_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT10(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE76_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE76_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT11(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE83_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE83_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT12(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE295_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE295_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT13(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE298_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE298_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT14(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE305_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE305_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT15(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE89_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE89_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT16(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE94_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE94_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT17(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE100_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE100_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT18(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE311_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE311_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT19(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE316_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE316_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT20(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE322_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE322_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT21(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE177_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE177_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT22(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE138_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE138_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT23(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE157_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE157_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT24(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE164_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE164_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT25(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE184_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE184_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT26(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE187_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE187_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT27(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE194_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE194_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT28(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE200_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE200_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT29(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE205_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE205_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART3_MOVE__INT__INT30(BOOL EN,
  INT IN,
  PART3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE211_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE211_ENO,,__TMP_ENO);
  return __res;
}

void PART3_init__(PART3 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->SENDIF3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENCAP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CON6_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMP9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CCW4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CCW5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CCW6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAB6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR2_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR2_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR2_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,CONR4_1,data__->CONR4_1,retain)
  __INIT_EXTERNAL(BOOL,CONR4_2,data__->CONR4_2,retain)
  __INIT_VAR(data__->CONR4_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR4_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR6_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONR6_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONRLCCW1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONRLCCW2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X4,0,retain)
  __INIT_VAR(data__->Z4,0,retain)
  __INIT_VAR(data__->X5,0,retain)
  __INIT_VAR(data__->Z5,0,retain)
  __INIT_VAR(data__->X6,0,retain)
  __INIT_VAR(data__->Z6,0,retain)
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
  __INIT_VAR(data__->VIR13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR17,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR18,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR19,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR21,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR22,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR23,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,CON6_3,data__->CON6_3,retain)
  __INIT_EXTERNAL(BOOL,CON6_5,data__->CON6_5,retain)
  __INIT_EXTERNAL(BOOL,CON6_7,data__->CON6_7,retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  TON_init__(&data__->TON16,retain);
  CTU_init__(&data__->CTU0,retain);
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
  CTU_init__(&data__->CTU1,retain);
  TON_init__(&data__->TON34,retain);
  TON_init__(&data__->TON35,retain);
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
  CTU_init__(&data__->CTU2,retain);
  TON_init__(&data__->TON51,retain);
  TON_init__(&data__->TON52,retain);
  TON_init__(&data__->TON53,retain);
  __INIT_VAR(data__->_TMP_MOVE66_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE66_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE25_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE25_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE288_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE288_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE249_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE249_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE44_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE44_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE51_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE51_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE268_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE268_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE275_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE275_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE73_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE73_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE76_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE76_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE83_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE83_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE295_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE295_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE298_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE298_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE305_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE305_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE89_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE89_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE94_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE94_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE100_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE100_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE311_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE311_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE316_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE316_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE322_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE322_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  __INIT_VAR(data__->_TMP_MOVE177_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE177_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE138_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE138_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE157_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE157_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE164_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE164_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE184_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE184_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE187_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE187_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE194_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE194_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE200_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE200_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE205_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE205_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE211_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE211_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG3,retain);
}

// Code part
void PART3_body__(PART3 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR2_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR2_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR2_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR4_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR6_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONR6_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONRLCCW1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONRLCCW2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENCAP1,)) {
    __SET_VAR(data__->,VIR22,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR2_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR2_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR2_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR4_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR6_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR6_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONRLCCW1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMP9,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENCAP4,)) {
    __SET_VAR(data__->,VIR23,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRAB6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_EXTERNAL(data__->,CONR4_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_EXTERNAL(data__->,CONR4_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONRLCCW2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONR4_3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR5,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->,_TMP_MOVE66_OUT,,__PART3_MOVE__INT__INT1(
    (BOOL)__GET_VAR(data__->TON3.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->_TMP_MOVE66_ENO,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,GRAB4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE25_OUT,,__PART3_MOVE__INT__INT2(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->_TMP_MOVE25_ENO,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,VIR19,,__GET_VAR(data__->VIR15,));
  __SET_VAR(data__->TON36.,IN,,__GET_VAR(data__->VIR15,));
  __SET_VAR(data__->TON36.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON36);
  __SET_VAR(data__->,_TMP_MOVE288_OUT,,__PART3_MOVE__INT__INT3(
    (BOOL)__GET_VAR(data__->TON36.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON37.,IN,,__GET_VAR(data__->_TMP_MOVE288_ENO,));
  __SET_VAR(data__->TON37.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON37);
  if (__GET_VAR(data__->TON37.Q,)) {
    __SET_VAR(data__->,GRAB6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE249_OUT,,__PART3_MOVE__INT__INT4(
    (BOOL)__GET_VAR(data__->TON37.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON49.,IN,,__GET_VAR(data__->_TMP_MOVE249_ENO,));
  __SET_VAR(data__->TON49.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON49);
  if (__GET_VAR(data__->TON49.Q,)) {
    __SET_VAR(data__->,VIR17,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE66_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE66_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE25_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE25_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE288_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE288_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE249_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE249_OUT,));
  };
  if (__GET_VAR(data__->SENDIF4,)) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF4,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF12,)) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF12,)) {
    __SET_VAR(data__->,VIR15,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,VIR6,,__GET_VAR(data__->VIR3,));
  if (__GET_VAR(data__->VIR3,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  __SET_VAR(data__->,_TMP_MOVE44_OUT,,__PART3_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->TON8.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->_TMP_MOVE44_ENO,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,GRAB4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE51_OUT,,__PART3_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON9.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_EXTERNAL(data__->,CON6_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR5,)) {
    __SET_VAR(data__->,CW4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,CW4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CW4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,CW4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR20,,__GET_VAR(data__->VIR17,));
  if (__GET_VAR(data__->VIR17,)) {
    __SET_VAR(data__->,VIR15,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON41.,IN,,__GET_VAR(data__->VIR17,));
  __SET_VAR(data__->TON41.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON41);
  __SET_VAR(data__->,_TMP_MOVE268_OUT,,__PART3_MOVE__INT__INT7(
    (BOOL)__GET_VAR(data__->TON41.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON42.,IN,,__GET_VAR(data__->_TMP_MOVE268_ENO,));
  __SET_VAR(data__->TON42.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON42);
  if (__GET_VAR(data__->TON42.Q,)) {
    __SET_VAR(data__->,GRAB6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE275_OUT,,__PART3_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->TON42.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE275_ENO,)) {
    __SET_EXTERNAL(data__->,CON6_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE275_ENO,)) {
    __SET_VAR(data__->,VIR17,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR19,)) {
    __SET_VAR(data__->,CW6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON43.,IN,,__GET_VAR(data__->VIR19,));
  __SET_VAR(data__->TON43.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON43);
  if (__GET_VAR(data__->TON43.Q,)) {
    __SET_VAR(data__->,CW6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON34.,IN,,__GET_VAR(data__->TON43.Q,));
  __SET_VAR(data__->TON34.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON34);
  if (__GET_VAR(data__->TON34.Q,)) {
    __SET_VAR(data__->,CW6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON35.,IN,,__GET_VAR(data__->TON34.Q,));
  __SET_VAR(data__->TON35.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON35);
  if (__GET_VAR(data__->TON35.Q,)) {
    __SET_VAR(data__->,CW6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE44_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE44_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE51_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE268_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE268_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE275_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE275_OUT,));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CCW4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,CCW4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->TON7.Q,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,CCW4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,CCW4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR20,)) {
    __SET_VAR(data__->,CCW6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON40.,IN,,__GET_VAR(data__->VIR20,));
  __SET_VAR(data__->TON40.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON40);
  if (__GET_VAR(data__->TON40.Q,)) {
    __SET_VAR(data__->,CCW6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON38.,IN,,__GET_VAR(data__->TON40.Q,));
  __SET_VAR(data__->TON38.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON38);
  if (__GET_VAR(data__->TON38.Q,)) {
    __SET_VAR(data__->,CCW6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON39.,IN,,__GET_VAR(data__->TON38.Q,));
  __SET_VAR(data__->TON39.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON39);
  if (__GET_VAR(data__->TON39.Q,)) {
    __SET_VAR(data__->,CCW6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE73_OUT,,__PART3_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->VIR2,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->_TMP_MOVE73_ENO,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  __SET_VAR(data__->,_TMP_MOVE76_OUT,,__PART3_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->TON10.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->_TMP_MOVE76_ENO,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,GRAB4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE83_OUT,,__PART3_MOVE__INT__INT11(
    (BOOL)__GET_VAR(data__->TON11.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF3,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF3,)) {
    __SET_VAR(data__->,CLAMP3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE295_OUT,,__PART3_MOVE__INT__INT12(
    (BOOL)__GET_VAR(data__->VIR16,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON44.,IN,,__GET_VAR(data__->_TMP_MOVE295_ENO,));
  __SET_VAR(data__->TON44.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON44);
  __SET_VAR(data__->,_TMP_MOVE298_OUT,,__PART3_MOVE__INT__INT13(
    (BOOL)__GET_VAR(data__->TON44.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON45.,IN,,__GET_VAR(data__->_TMP_MOVE298_ENO,));
  __SET_VAR(data__->TON45.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON45);
  if (__GET_VAR(data__->TON45.Q,)) {
    __SET_VAR(data__->,GRAB6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE305_OUT,,__PART3_MOVE__INT__INT14(
    (BOOL)__GET_VAR(data__->TON45.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE305_ENO,)) {
    __SET_VAR(data__->,CLAMP9,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE305_ENO,)) {
    __SET_VAR(data__->,VIR18,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF11,)) {
    __SET_VAR(data__->,VIR16,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF11,)) {
    __SET_VAR(data__->,CLAMP9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE76_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE76_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE298_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE298_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE83_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE305_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE305_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE73_ENO,)) {
    __SET_VAR(data__->,X4,,__GET_VAR(data__->_TMP_MOVE73_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE295_ENO,)) {
    __SET_VAR(data__->,X6,,__GET_VAR(data__->_TMP_MOVE295_OUT,));
  };
  if (__GET_VAR(data__->VIR4,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON12);
  __SET_VAR(data__->,_TMP_MOVE89_OUT,,__PART3_MOVE__INT__INT15(
    (BOOL)__GET_VAR(data__->TON12.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->_TMP_MOVE89_ENO,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  __SET_VAR(data__->,_TMP_MOVE94_OUT,,__PART3_MOVE__INT__INT16(
    (BOOL)__GET_VAR(data__->TON13.Q,),
    (INT)900,
    data__));
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->_TMP_MOVE94_ENO,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,GRAB4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  __SET_VAR(data__->,_TMP_MOVE100_OUT,,__PART3_MOVE__INT__INT17(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR7,,__GET_VAR(data__->_TMP_MOVE100_ENO,));
  if (__GET_VAR(data__->VIR18,)) {
    __SET_VAR(data__->,VIR16,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON46.,IN,,__GET_VAR(data__->VIR18,));
  __SET_VAR(data__->TON46.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON46);
  __SET_VAR(data__->,_TMP_MOVE311_OUT,,__PART3_MOVE__INT__INT18(
    (BOOL)__GET_VAR(data__->TON46.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON47.,IN,,__GET_VAR(data__->_TMP_MOVE311_ENO,));
  __SET_VAR(data__->TON47.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON47);
  __SET_VAR(data__->,_TMP_MOVE316_OUT,,__PART3_MOVE__INT__INT19(
    (BOOL)__GET_VAR(data__->TON47.Q,),
    (INT)900,
    data__));
  __SET_VAR(data__->TON48.,IN,,__GET_VAR(data__->_TMP_MOVE316_ENO,));
  __SET_VAR(data__->TON48.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON48);
  if (__GET_VAR(data__->TON48.Q,)) {
    __SET_VAR(data__->,GRAB6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON50.,IN,,__GET_VAR(data__->TON48.Q,));
  __SET_VAR(data__->TON50.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON50);
  __SET_VAR(data__->,_TMP_MOVE322_OUT,,__PART3_MOVE__INT__INT20(
    (BOOL)__GET_VAR(data__->TON50.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE322_ENO,)) {
    __SET_VAR(data__->,VIR18,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR21,,__GET_VAR(data__->_TMP_MOVE322_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE89_ENO,)) {
    __SET_VAR(data__->,X4,,__GET_VAR(data__->_TMP_MOVE89_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE94_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE94_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE311_ENO,)) {
    __SET_VAR(data__->,X6,,__GET_VAR(data__->_TMP_MOVE311_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE316_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE316_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,Z4,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE322_ENO,)) {
    __SET_VAR(data__->,Z6,,__GET_VAR(data__->_TMP_MOVE322_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,X4,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE322_ENO,)) {
    __SET_VAR(data__->,X6,,__GET_VAR(data__->_TMP_MOVE322_OUT,));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->VIR7,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->TON52.,IN,,__GET_VAR(data__->VIR22,));
  __SET_VAR(data__->TON52.,PT,,__time_to_timespec(1, 2000, 0, 0, 0, 0));
  TON_body__(&data__->TON52);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->TON52.Q,));
  __SET_VAR(data__->CTU0.,PV,,3);
  CTU_body__(&data__->CTU0);
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_EXTERNAL(data__->,CON6_3,,__BOOL_LITERAL(FALSE));
  };
  __SET_EXTERNAL(data__->,CONR4_1,,__GET_VAR(data__->CTU0.Q,));
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->VIR21,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->TON51.,IN,,__GET_VAR(data__->SENCAP7,));
  __SET_VAR(data__->TON51.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON51);
  __SET_VAR(data__->CTU2.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU2.,R,,__GET_VAR(data__->TON51.Q,));
  __SET_VAR(data__->CTU2.,PV,,3);
  CTU_body__(&data__->CTU2);
  if (__GET_VAR(data__->CTU2.Q,)) {
    __SET_EXTERNAL(data__->,CON6_7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,CONR4_3,,__GET_VAR(data__->CTU2.Q,));
  if (__GET_VAR(data__->TON52.Q,)) {
    __SET_VAR(data__->,VIR22,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON52.Q,)) {
    __SET_VAR(data__->,CON6_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON51.Q,)) {
    __SET_VAR(data__->,CON6_8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,VIR12,,__GET_VAR(data__->VIR8,));
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->VIR8,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  __SET_VAR(data__->,_TMP_MOVE177_OUT,,__PART3_MOVE__INT__INT21(
    (BOOL)__GET_VAR(data__->TON19.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->_TMP_MOVE177_ENO,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,GRAB5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE138_OUT,,__PART3_MOVE__INT__INT22(
    (BOOL)__GET_VAR(data__->TON20.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON32.,IN,,__GET_VAR(data__->_TMP_MOVE138_ENO,));
  __SET_VAR(data__->TON32.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON32);
  if (__GET_VAR(data__->TON32.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE177_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE177_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE138_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE138_OUT,));
  };
  if (__GET_VAR(data__->SENDIF8,)) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF8,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,VIR13,,__GET_VAR(data__->VIR10,));
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON24.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->TON24.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON24);
  __SET_VAR(data__->,_TMP_MOVE157_OUT,,__PART3_MOVE__INT__INT23(
    (BOOL)__GET_VAR(data__->TON24.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON25.,IN,,__GET_VAR(data__->_TMP_MOVE157_ENO,));
  __SET_VAR(data__->TON25.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON25);
  if (__GET_VAR(data__->TON25.Q,)) {
    __SET_VAR(data__->,GRAB5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE164_OUT,,__PART3_MOVE__INT__INT24(
    (BOOL)__GET_VAR(data__->TON25.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE164_ENO,)) {
    __SET_EXTERNAL(data__->,CON6_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE164_ENO,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR12,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON26.,IN,,__GET_VAR(data__->VIR12,));
  __SET_VAR(data__->TON26.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON26);
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->TON26.Q,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->TON17.Q,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE157_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE157_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE164_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE164_OUT,));
  };
  if (__GET_VAR(data__->VIR13,)) {
    __SET_VAR(data__->,CCW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON23.,IN,,__GET_VAR(data__->VIR13,));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON23);
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,CCW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->TON23.Q,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,CCW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->TON21.Q,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON22);
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,CCW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE184_OUT,,__PART3_MOVE__INT__INT25(
    (BOOL)__GET_VAR(data__->VIR9,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON27.,IN,,__GET_VAR(data__->_TMP_MOVE184_ENO,));
  __SET_VAR(data__->TON27.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON27);
  __SET_VAR(data__->,_TMP_MOVE187_OUT,,__PART3_MOVE__INT__INT26(
    (BOOL)__GET_VAR(data__->TON27.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON28.,IN,,__GET_VAR(data__->_TMP_MOVE187_ENO,));
  __SET_VAR(data__->TON28.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON28);
  if (__GET_VAR(data__->TON28.Q,)) {
    __SET_VAR(data__->,GRAB5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE194_OUT,,__PART3_MOVE__INT__INT27(
    (BOOL)__GET_VAR(data__->TON28.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE194_ENO,)) {
    __SET_VAR(data__->,CLAMP6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE194_ENO,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF7,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF7,)) {
    __SET_VAR(data__->,CLAMP6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE187_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE187_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE194_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE194_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE184_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE184_OUT,));
  };
  if (__GET_VAR(data__->VIR11,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON29.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->TON29.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON29);
  __SET_VAR(data__->,_TMP_MOVE200_OUT,,__PART3_MOVE__INT__INT28(
    (BOOL)__GET_VAR(data__->TON29.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON30.,IN,,__GET_VAR(data__->_TMP_MOVE200_ENO,));
  __SET_VAR(data__->TON30.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON30);
  __SET_VAR(data__->,_TMP_MOVE205_OUT,,__PART3_MOVE__INT__INT29(
    (BOOL)__GET_VAR(data__->TON30.Q,),
    (INT)900,
    data__));
  __SET_VAR(data__->TON31.,IN,,__GET_VAR(data__->_TMP_MOVE205_ENO,));
  __SET_VAR(data__->TON31.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON31);
  if (__GET_VAR(data__->TON31.Q,)) {
    __SET_VAR(data__->,GRAB5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON33.,IN,,__GET_VAR(data__->TON31.Q,));
  __SET_VAR(data__->TON33.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON33);
  __SET_VAR(data__->,_TMP_MOVE211_OUT,,__PART3_MOVE__INT__INT30(
    (BOOL)__GET_VAR(data__->TON33.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE211_ENO,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR14,,__GET_VAR(data__->_TMP_MOVE211_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE200_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE200_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE205_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE205_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE211_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE211_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE211_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE211_OUT,));
  };
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->VIR14,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->TON53.,IN,,__GET_VAR(data__->VIR23,));
  __SET_VAR(data__->TON53.,PT,,__time_to_timespec(1, 1600, 0, 0, 0, 0));
  TON_body__(&data__->TON53);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG3.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->TON53.Q,));
  __SET_VAR(data__->CTU1.,PV,,3);
  CTU_body__(&data__->CTU1);
  if (__GET_VAR(data__->CTU1.Q,)) {
    __SET_EXTERNAL(data__->,CON6_5,,__BOOL_LITERAL(FALSE));
  };
  __SET_EXTERNAL(data__->,CONR4_2,,__GET_VAR(data__->CTU1.Q,));
  if (__GET_VAR(data__->TON53.Q,)) {
    __SET_VAR(data__->,VIR23,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON53.Q,)) {
    __SET_VAR(data__->,CON6_6,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PART3_body__() 





static inline INT __PART4_ADD__INT__INT1(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PART4 *data__)
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

static inline INT __PART4_ADD__INT__INT2(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PART4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD167_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD167_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART4_ADD__INT__INT3(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PART4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD269_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD269_ENO,,__TMP_ENO);
  return __res;
}

void PART4_init__(PART4 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_EXTERNAL(BOOL,SENDIF13,data__->SENDIF13,retain)
  __INIT_EXTERNAL(BOOL,ROLLSTOP7,data__->ROLLSTOP7,retain)
  __INIT_VAR(data__->SENDIF14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENDIF15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENVIS5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TARGET,0,retain)
  __INIT_VAR(data__->TARGET2,0,retain)
  __INIT_VAR(data__->TARGET3,0,retain)
  __INIT_VAR(data__->DIGDIS1,0,retain)
  __INIT_VAR(data__->DIGDIS2,0,retain)
  __INIT_VAR(data__->DIGDIS3,0,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->HIJAU,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->METAL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR17,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VR1,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON3,retain);
  CTU_init__(&data__->CTU1,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  CTU_init__(&data__->CTU2,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  TON_init__(&data__->TON16,retain);
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TON_init__(&data__->TON20,retain);
  CTU_init__(&data__->CTU3,retain);
  TON_init__(&data__->TON21,retain);
  TON_init__(&data__->TON22,retain);
  TON_init__(&data__->TON23,retain);
  TON_init__(&data__->TON24,retain);
  TON_init__(&data__->TON25,retain);
  CTU_init__(&data__->CTU4,retain);
  TON_init__(&data__->TON26,retain);
  TON_init__(&data__->TON27,retain);
  TON_init__(&data__->TON28,retain);
  TON_init__(&data__->TON29,retain);
  TON_init__(&data__->TON30,retain);
  CTU_init__(&data__->CTU5,retain);
  CTU_init__(&data__->CTU6,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  F_TRIG_init__(&data__->F_TRIG3,retain);
  F_TRIG_init__(&data__->F_TRIG4,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  F_TRIG_init__(&data__->F_TRIG5,retain);
  F_TRIG_init__(&data__->F_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  __INIT_VAR(data__->_TMP_AND69_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND190_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD167_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD167_OUT,0,retain)
  F_TRIG_init__(&data__->F_TRIG7,retain);
  R_TRIG_init__(&data__->R_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG7,retain);
  F_TRIG_init__(&data__->F_TRIG8,retain);
  F_TRIG_init__(&data__->F_TRIG9,retain);
  F_TRIG_init__(&data__->F_TRIG10,retain);
  R_TRIG_init__(&data__->R_TRIG8,retain);
  __INIT_VAR(data__->_TMP_AND290_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD269_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD269_OUT,0,retain)
}

// Code part
void PART4_body__(PART4 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LOADCON1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LOADCON2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LOADCON3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LOADCON4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LOADCON5,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR1,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,LIIFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR2,,(__GET_VAR(data__->TON1.Q,) || __GET_VAR(data__->TON1.Q,)));
  if (__GET_VAR(data__->SENVIS4,)) {
    __SET_VAR(data__->,HIJAU,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR7,)) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON12);
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->TON12.Q,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON13);
  if (__GET_VAR(data__->TON13.Q,)) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR8,,(__GET_VAR(data__->TON13.Q,) || __GET_VAR(data__->TON13.Q,)));
  if (__GET_VAR(data__->SENVIS5,)) {
    __SET_VAR(data__->,METAL,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->SENDIF13,)) {
    __SET_VAR(data__->,LOADCON1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF14,)) {
    __SET_VAR(data__->,LOADCON2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF14,)) {
    __SET_VAR(data__->,LOADCON3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->VIR8,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,HIJAU,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TON2.Q,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,(__GET_VAR(data__->VIR1,) && __GET_VAR(data__->RESET1,)));
  __SET_VAR(data__->CTU0.,PV,,5);
  CTU_body__(&data__->CTU0);
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,RESET1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->HIJAU,) && __GET_EXTERNAL(data__->SENDIF13,))) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,METAL,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->TON16.Q,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU2.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU2.,R,,(__GET_VAR(data__->VIR7,) && __GET_VAR(data__->RESET2,)));
  __SET_VAR(data__->CTU2.,PV,,5);
  CTU_body__(&data__->CTU2);
  if (__GET_VAR(data__->CTU2.Q,)) {
    __SET_VAR(data__->,RESET2,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->METAL,) && __GET_VAR(data__->SENDIF14,))) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,TARGET,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->,TARGET2,,__GET_VAR(data__->CTU2.CV,));
  if ((!(__GET_VAR(data__->HIJAU,)) && __GET_EXTERNAL(data__->SENDIF13,))) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->METAL,)) && __GET_VAR(data__->SENDIF14,))) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGDIS1,,__GET_VAR(data__->CTU0.CV,));
  if ((__GET_VAR(data__->VIR1,) && __GET_VAR(data__->RESET1,))) {
    __SET_VAR(data__->,SWITCH1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->VIR7,) && __GET_VAR(data__->RESET2,))) {
    __SET_VAR(data__->,SWITCH2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGDIS2,,__GET_VAR(data__->CTU2.CV,));
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->VIR5,)) && __GET_VAR(data__->VIR3,))) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,(((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->VIR5,)) && __GET_VAR(data__->VIR3,)) || ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->VIR5,)) && __GET_VAR(data__->VIR3,))));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,LIIFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,RESET1,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->VIR11,)) && __GET_VAR(data__->VIR9,))) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,(((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->VIR11,)) && __GET_VAR(data__->VIR9,)) || ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->VIR11,)) && __GET_VAR(data__->VIR9,))));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,RESET2,,__BOOL_LITERAL(FALSE));
  };
  if (((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->VIR5,)) && __GET_VAR(data__->VIR3,))) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->X1,));
  F_TRIG_body__(&data__->F_TRIG1);
  if (__GET_VAR(data__->F_TRIG1.Q,)) {
    __SET_VAR(data__->,VIRBLCKX1,,__BOOL_LITERAL(TRUE));
  };
  if (((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->VIR11,)) && __GET_VAR(data__->VIR9,))) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->X2,));
  F_TRIG_body__(&data__->F_TRIG2);
  if (__GET_VAR(data__->F_TRIG2.Q,)) {
    __SET_VAR(data__->,VIRBLCKX2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_VAR(data__->Z1,));
  F_TRIG_body__(&data__->F_TRIG3);
  __SET_VAR(data__->F_TRIG4.,CLK,,__GET_VAR(data__->Z1,));
  F_TRIG_body__(&data__->F_TRIG4);
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->F_TRIG4.Q,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG3.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_EXTERNAL(data__->SENDIF13,));
  __SET_VAR(data__->CTU1.,PV,,2);
  CTU_body__(&data__->CTU1);
  if ((__GET_VAR(data__->F_TRIG3.Q,) && __GET_VAR(data__->CTU1.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG5.,CLK,,__GET_VAR(data__->Z2,));
  F_TRIG_body__(&data__->F_TRIG5);
  __SET_VAR(data__->F_TRIG6.,CLK,,__GET_VAR(data__->Z2,));
  F_TRIG_body__(&data__->F_TRIG6);
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->F_TRIG6.Q,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->CTU3.,CU,,__GET_VAR(data__->R_TRIG4.Q,));
  __SET_VAR(data__->CTU3.,R,,__GET_VAR(data__->SENDIF14,));
  __SET_VAR(data__->CTU3.,PV,,2);
  CTU_body__(&data__->CTU3);
  if ((__GET_VAR(data__->F_TRIG5.Q,) && __GET_VAR(data__->CTU3.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,LOADCON1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,LOADCON2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,LOADCON3,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_AND69_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ1,),
    (BOOL)__GET_VAR(data__->VIRBLCKX1,)));
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_AND190_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ2,),
    (BOOL)__GET_VAR(data__->VIRBLCKX2,)));
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_ADD46_OUT,,__PART4_ADD__INT__INT1(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD46_ENO,)) {
    __SET_VAR(data__->,TARGET,,__GET_VAR(data__->_TMP_ADD46_OUT,));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  __SET_VAR(data__->,_TMP_ADD167_OUT,,__PART4_ADD__INT__INT2(
    (BOOL)__GET_VAR(data__->TON19.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET2,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD167_ENO,)) {
    __SET_VAR(data__->,TARGET2,,__GET_VAR(data__->_TMP_ADD167_OUT,));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,LIIFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->TON8.Q,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->TON9.Q,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,LIIFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,LOADCON1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->TON10.Q,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_EXTERNAL(data__->,ROLLSTOP7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR12,)) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->VIR12,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->TON15.Q,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->TON21.Q,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON22);
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,LOADCON2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,LOADCON3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON23.,IN,,__GET_VAR(data__->TON22.Q,));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON23);
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->F_TRIG7.,CLK,,__GET_VAR(data__->X1,));
  F_TRIG_body__(&data__->F_TRIG7);
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->F_TRIG7.Q,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_EXTERNAL(data__->SENDIF13,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_VAR(data__->CTU6.,CU,,__GET_VAR(data__->R_TRIG5.Q,));
  __SET_VAR(data__->CTU6.,R,,__GET_VAR(data__->R_TRIG6.Q,));
  __SET_VAR(data__->CTU6.,PV,,2);
  CTU_body__(&data__->CTU6);
  if (__GET_VAR(data__->CTU6.Q,)) {
    __SET_EXTERNAL(data__->,ROLLSTOP7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR13,)) {
    __SET_VAR(data__->,RIIGHT3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON24.,IN,,__GET_VAR(data__->VIR13,));
  __SET_VAR(data__->TON24.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON24);
  if (__GET_VAR(data__->TON24.Q,)) {
    __SET_VAR(data__->,LIIFT3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON25.,IN,,__GET_VAR(data__->TON24.Q,));
  __SET_VAR(data__->TON25.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON25);
  if (__GET_VAR(data__->TON25.Q,)) {
    __SET_VAR(data__->,RIIGHT3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,VIR14,,(__GET_VAR(data__->TON25.Q,) || __GET_VAR(data__->TON25.Q,)));
  __SET_VAR(data__->TON26.,IN,,__GET_VAR(data__->VIR14,));
  __SET_VAR(data__->TON26.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON26);
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,VIR15,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF15,)) {
    __SET_VAR(data__->,LOADCON4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENDIF15,)) {
    __SET_VAR(data__->,LOADCON5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,VIR13,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG7.,CLK,,__GET_VAR(data__->TON26.Q,));
  R_TRIG_body__(&data__->R_TRIG7);
  __SET_VAR(data__->CTU4.,CU,,__GET_VAR(data__->R_TRIG7.Q,));
  __SET_VAR(data__->CTU4.,R,,(__GET_VAR(data__->VIR13,) && __GET_VAR(data__->RESET3,)));
  __SET_VAR(data__->CTU4.,PV,,5);
  CTU_body__(&data__->CTU4);
  if (__GET_VAR(data__->CTU4.Q,)) {
    __SET_VAR(data__->,RESET3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENDIF15,)) {
    __SET_VAR(data__->,VIR13,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,TARGET3,,__GET_VAR(data__->CTU4.CV,));
  if ((__GET_VAR(data__->VIR13,) && __GET_VAR(data__->RESET3,))) {
    __SET_VAR(data__->,SWITCH3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGDIS3,,__GET_VAR(data__->CTU4.CV,));
  __SET_VAR(data__->TON27.,IN,,__GET_VAR(data__->VIR13,));
  __SET_VAR(data__->TON27.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON27);
  if (__GET_VAR(data__->TON27.Q,)) {
    __SET_VAR(data__->,VIR17,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->SWITCH3,) && __GET_VAR(data__->VIR17,)) && __GET_VAR(data__->VIR15,))) {
    __SET_VAR(data__->,LEEFT3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON28.,IN,,(((!(__GET_VAR(data__->SWITCH3,)) && __GET_VAR(data__->VIR17,)) && __GET_VAR(data__->VIR15,)) || ((__GET_VAR(data__->SWITCH3,) && __GET_VAR(data__->VIR17,)) && __GET_VAR(data__->VIR15,))));
  __SET_VAR(data__->TON28.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON28);
  if (__GET_VAR(data__->TON28.Q,)) {
    __SET_VAR(data__->,LIIFT3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON28.Q,)) {
    __SET_VAR(data__->,VIR16,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON28.Q,)) {
    __SET_VAR(data__->,RESET3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->F_TRIG8.,CLK,,__GET_VAR(data__->X3,));
  F_TRIG_body__(&data__->F_TRIG8);
  if (__GET_VAR(data__->F_TRIG8.Q,)) {
    __SET_VAR(data__->,VIRBLCKX3,,__BOOL_LITERAL(TRUE));
  };
  if (((!(__GET_VAR(data__->SWITCH3,)) && __GET_VAR(data__->VIR17,)) && __GET_VAR(data__->VIR15,))) {
    __SET_VAR(data__->,RIIGHT3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG9.,CLK,,__GET_VAR(data__->Z3,));
  F_TRIG_body__(&data__->F_TRIG9);
  __SET_VAR(data__->F_TRIG10.,CLK,,__GET_VAR(data__->Z3,));
  F_TRIG_body__(&data__->F_TRIG10);
  __SET_VAR(data__->R_TRIG8.,CLK,,__GET_VAR(data__->F_TRIG10.Q,));
  R_TRIG_body__(&data__->R_TRIG8);
  __SET_VAR(data__->CTU5.,CU,,__GET_VAR(data__->R_TRIG8.Q,));
  __SET_VAR(data__->CTU5.,R,,__GET_VAR(data__->SENDIF15,));
  __SET_VAR(data__->CTU5.,PV,,2);
  CTU_body__(&data__->CTU5);
  if ((__GET_VAR(data__->F_TRIG9.Q,) && __GET_VAR(data__->CTU5.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON30.,IN,,__GET_VAR(data__->VIR16,));
  __SET_VAR(data__->TON30.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON30);
  if (__GET_VAR(data__->TON30.Q,)) {
    __SET_VAR(data__->,LOADCON4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON30.Q,)) {
    __SET_VAR(data__->,LOADCON5,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SWITCH3,) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,LEEFT3,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH3,) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,VIR15,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH3,) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,VIR16,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_AND290_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ3,),
    (BOOL)__GET_VAR(data__->VIRBLCKX3,)));
  if (__GET_VAR(data__->_TMP_AND290_OUT,)) {
    __SET_VAR(data__->,VIR17,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->SWITCH3,)) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,RIIGHT3,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH3,)) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,VIR15,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH3,)) && __GET_VAR(data__->TON30.Q,))) {
    __SET_VAR(data__->,VIR16,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND290_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND290_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON29.,IN,,__GET_VAR(data__->VIR17,));
  __SET_VAR(data__->TON29.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON29);
  __SET_VAR(data__->,_TMP_ADD269_OUT,,__PART4_ADD__INT__INT3(
    (BOOL)__GET_VAR(data__->TON29.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET3,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD269_ENO,)) {
    __SET_VAR(data__->,TARGET3,,__GET_VAR(data__->_TMP_ADD269_OUT,));
  };

  goto __end;

__end:
  return;
} // PART4_body__() 





