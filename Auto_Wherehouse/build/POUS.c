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





static inline INT __AWH_ADD__INT__INT1(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  AWH *data__)
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

void AWH_init__(AWH *data__, BOOL retain) {
  __INIT_VAR(data__->START,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ENTRYCON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LOADCON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TARGET,0,retain)
  __INIT_VAR(data__->DIGITALDIS,0,retain)
  __INIT_VAR(data__->DIGITALDIS0,0,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON3,retain);
  CTU_init__(&data__->CTU1,retain);
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
void AWH_body__(AWH *data__) {
  // Initialise TEMP variables

  if (__GET_VAR(data__->VIR1,)) {
    __SET_VAR(data__->,LEEFT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->VIR1,));
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
  __SET_VAR(data__->,VIR2,,(__GET_VAR(data__->TON1.Q,) || __GET_VAR(data__->TON1.Q,)));
  if (__GET_VAR(data__->START,)) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->START,)) {
    __SET_VAR(data__->,ENTRYCON,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR,)) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENSOR,)) {
    __SET_VAR(data__->,ENTRYCON,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_VAR(data__->STOP,))) {
    __SET_VAR(data__->,LOADCON,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_VAR(data__->STOP,))) {
    __SET_VAR(data__->,ENTRYCON,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TON2.Q,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,PV,,54);
  CTU_body__(&data__->CTU0);
  __SET_VAR(data__->,TARGET,,__GET_VAR(data__->CTU0.CV,));
  __SET_VAR(data__->,DIGITALDIS,,__GET_VAR(data__->CTU0.CV,));
  if (__GET_VAR(data__->SENSOR,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->VIR10,) && __GET_VAR(data__->VIR3,))) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,(__GET_VAR(data__->VIR10,) && __GET_VAR(data__->VIR3,)));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,LIFT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->X,));
  F_TRIG_body__(&data__->F_TRIG1);
  if (__GET_VAR(data__->F_TRIG1.Q,)) {
    __SET_VAR(data__->,VIRBLCKX,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,RIIGHT,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->Z,));
  F_TRIG_body__(&data__->F_TRIG2);
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_VAR(data__->Z,));
  F_TRIG_body__(&data__->F_TRIG3);
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->F_TRIG3.Q,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->START,));
  __SET_VAR(data__->CTU1.,PV,,2);
  CTU_body__(&data__->CTU1);
  if ((__GET_VAR(data__->F_TRIG2.Q,) && __GET_VAR(data__->CTU1.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,DIGITALDIS0,,__GET_VAR(data__->CTU1.CV,));
  __SET_VAR(data__->,_TMP_AND69_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ,),
    (BOOL)__GET_VAR(data__->VIRBLCKX,)));
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_ADD46_OUT,,__AWH_ADD__INT__INT1(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD46_ENO,)) {
    __SET_VAR(data__->,TARGET,,__GET_VAR(data__->_TMP_ADD46_OUT,));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // AWH_body__() 





