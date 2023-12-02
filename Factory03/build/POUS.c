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





static inline INT __PT5_ADD__INT__INT1(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PT5 *data__)
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

static inline INT __PT5_ADD__INT__INT2(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PT5 *data__)
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

static inline INT __PT5_ADD__INT__INT3(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PT5 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD244_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD244_ENO,,__TMP_ENO);
  return __res;
}

void PT5_init__(PT5 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->VS5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS18,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS19,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LC3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LC4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIIFT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LEEFT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RIIGHT2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TARGET0,0,retain)
  __INIT_VAR(data__->TARGET1,0,retain)
  __INIT_VAR(data__->TARGET2,0,retain)
  __INIT_VAR(data__->D5_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BIRU,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D5_16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKX2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRBLCKZ2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SWITCH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESET2,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON3,retain);
  CTU_init__(&data__->CTU1,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  CTU_init__(&data__->CTU2,retain);
  TON_init__(&data__->TON16,retain);
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TON_init__(&data__->TON20,retain);
  CTU_init__(&data__->CTU3,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  CTU_init__(&data__->CTU4,retain);
  TON_init__(&data__->TON21,retain);
  TON_init__(&data__->TON22,retain);
  TON_init__(&data__->TON23,retain);
  TON_init__(&data__->TON24,retain);
  TON_init__(&data__->TON25,retain);
  CTU_init__(&data__->CTU5,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  F_TRIG_init__(&data__->F_TRIG3,retain);
  F_TRIG_init__(&data__->F_TRIG4,retain);
  F_TRIG_init__(&data__->F_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  F_TRIG_init__(&data__->F_TRIG6,retain);
  F_TRIG_init__(&data__->F_TRIG7,retain);
  R_TRIG_init__(&data__->R_TRIG5,retain);
  F_TRIG_init__(&data__->F_TRIG8,retain);
  F_TRIG_init__(&data__->F_TRIG9,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
  __INIT_VAR(data__->_TMP_AND69_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND190_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND265_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD46_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD167_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD167_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD244_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD244_OUT,0,retain)
}

// Code part
void PT5_body__(PT5 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LC1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LC2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LC3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,LC4,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LC1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LC2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LC3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LC4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D5_1,)) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->D5_1,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,LIIFT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D5_2,,(__GET_VAR(data__->TON1.Q,) || __GET_VAR(data__->TON1.Q,)));
  if (__GET_VAR(data__->VS5,)) {
    __SET_VAR(data__->,BIRU,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->D5_7,)) {
    __SET_VAR(data__->,RIIGHT1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->D5_7,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON12);
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,LIIFT1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->TON12.Q,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON13);
  if (__GET_VAR(data__->TON13.Q,)) {
    __SET_VAR(data__->,RIIGHT1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D5_8,,(__GET_VAR(data__->TON13.Q,) || __GET_VAR(data__->TON13.Q,)));
  if (__GET_VAR(data__->D5_12,)) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->D5_12,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D5_13,,(__GET_VAR(data__->TON15.Q,) || __GET_VAR(data__->TON15.Q,)));
  if (__GET_VAR(data__->DS18,)) {
    __SET_VAR(data__->,LC1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS19,)) {
    __SET_VAR(data__->,LC2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS19,)) {
    __SET_VAR(data__->,LC3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS20,)) {
    __SET_VAR(data__->,LC4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->D5_2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,D5_3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->D5_8,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,D5_9,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->D5_13,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,D5_14,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,BIRU,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,D5_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TON2.Q,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU0.,R,,(__GET_VAR(data__->D5_1,) && __GET_VAR(data__->RESET0,)));
  __SET_VAR(data__->CTU0.,PV,,10);
  CTU_body__(&data__->CTU0);
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,RESET0,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->BIRU,) && __GET_VAR(data__->DS18,))) {
    __SET_VAR(data__->,D5_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,D5_7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->TON16.Q,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU2.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU2.,R,,(__GET_VAR(data__->D5_7,) && __GET_VAR(data__->RESET1,)));
  __SET_VAR(data__->CTU2.,PV,,5);
  CTU_body__(&data__->CTU2);
  if (__GET_VAR(data__->CTU2.Q,)) {
    __SET_VAR(data__->,RESET1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,D5_12,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->TON21.Q,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->CTU4.,CU,,__GET_VAR(data__->R_TRIG3.Q,));
  __SET_VAR(data__->CTU4.,R,,(__GET_VAR(data__->D5_12,) && __GET_VAR(data__->RESET2,)));
  __SET_VAR(data__->CTU4.,PV,,5);
  CTU_body__(&data__->CTU4);
  if (__GET_VAR(data__->CTU4.Q,)) {
    __SET_VAR(data__->,RESET2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,TARGET0,,__GET_VAR(data__->CTU0.CV,));
  if (__GET_VAR(data__->DS19,)) {
    __SET_VAR(data__->,D5_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->DS20,)) {
    __SET_VAR(data__->,D5_12,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,TARGET1,,__GET_VAR(data__->CTU2.CV,));
  __SET_VAR(data__->,TARGET2,,__GET_VAR(data__->CTU4.CV,));
  if ((!(__GET_VAR(data__->BIRU,)) && __GET_VAR(data__->DS18,))) {
    __SET_VAR(data__->,D5_6,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->D5_1,) && __GET_VAR(data__->RESET0,))) {
    __SET_VAR(data__->,SWITCH0,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->D5_7,) && __GET_VAR(data__->RESET1,))) {
    __SET_VAR(data__->,SWITCH1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->D5_12,) && __GET_VAR(data__->RESET2,))) {
    __SET_VAR(data__->,SWITCH2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->D5_1,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,D5_5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->D5_7,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,D5_11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->D5_12,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 4400, 0, 0, 0, 0));
  TON_body__(&data__->TON22);
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,D5_16,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->SWITCH0,) && __GET_VAR(data__->D5_5,)) && __GET_VAR(data__->D5_3,))) {
    __SET_VAR(data__->,LEEFT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,(((!(__GET_VAR(data__->SWITCH0,)) && __GET_VAR(data__->D5_5,)) && __GET_VAR(data__->D5_3,)) || ((__GET_VAR(data__->SWITCH0,) && __GET_VAR(data__->D5_5,)) && __GET_VAR(data__->D5_3,))));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,LIIFT0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,D5_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,RESET0,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->D5_11,)) && __GET_VAR(data__->D5_9,))) {
    __SET_VAR(data__->,LEEFT1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,(((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->D5_11,)) && __GET_VAR(data__->D5_9,)) || ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->D5_11,)) && __GET_VAR(data__->D5_9,))));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,LIIFT1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,D5_10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,RESET1,,__BOOL_LITERAL(FALSE));
  };
  if (((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->D5_16,)) && __GET_VAR(data__->D5_14,))) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON23.,IN,,(((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->D5_16,)) && __GET_VAR(data__->D5_14,)) || ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->D5_16,)) && __GET_VAR(data__->D5_14,))));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON23);
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,LIIFT2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,D5_15,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,D5_12,,__BOOL_LITERAL(FALSE));
  };
  if (((!(__GET_VAR(data__->SWITCH0,)) && __GET_VAR(data__->D5_5,)) && __GET_VAR(data__->D5_3,))) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->X0,));
  F_TRIG_body__(&data__->F_TRIG1);
  if (__GET_VAR(data__->F_TRIG1.Q,)) {
    __SET_VAR(data__->,VIRBLCKX0,,__BOOL_LITERAL(TRUE));
  };
  if (((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->D5_11,)) && __GET_VAR(data__->D5_9,))) {
    __SET_VAR(data__->,RIIGHT1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->X1,));
  F_TRIG_body__(&data__->F_TRIG2);
  if (__GET_VAR(data__->F_TRIG2.Q,)) {
    __SET_VAR(data__->,VIRBLCKX1,,__BOOL_LITERAL(TRUE));
  };
  if (((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->D5_16,)) && __GET_VAR(data__->D5_14,))) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_VAR(data__->X2,));
  F_TRIG_body__(&data__->F_TRIG3);
  if (__GET_VAR(data__->F_TRIG3.Q,)) {
    __SET_VAR(data__->,VIRBLCKX2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG4.,CLK,,__GET_VAR(data__->Z0,));
  F_TRIG_body__(&data__->F_TRIG4);
  __SET_VAR(data__->F_TRIG5.,CLK,,__GET_VAR(data__->Z0,));
  F_TRIG_body__(&data__->F_TRIG5);
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->F_TRIG5.Q,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG4.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->DS18,));
  __SET_VAR(data__->CTU1.,PV,,2);
  CTU_body__(&data__->CTU1);
  if ((__GET_VAR(data__->F_TRIG4.Q,) && __GET_VAR(data__->CTU1.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG6.,CLK,,__GET_VAR(data__->Z1,));
  F_TRIG_body__(&data__->F_TRIG6);
  __SET_VAR(data__->F_TRIG7.,CLK,,__GET_VAR(data__->Z1,));
  F_TRIG_body__(&data__->F_TRIG7);
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->F_TRIG7.Q,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->CTU3.,CU,,__GET_VAR(data__->R_TRIG5.Q,));
  __SET_VAR(data__->CTU3.,R,,__GET_VAR(data__->DS19,));
  __SET_VAR(data__->CTU3.,PV,,2);
  CTU_body__(&data__->CTU3);
  if ((__GET_VAR(data__->F_TRIG6.Q,) && __GET_VAR(data__->CTU3.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->F_TRIG8.,CLK,,__GET_VAR(data__->Z2,));
  F_TRIG_body__(&data__->F_TRIG8);
  __SET_VAR(data__->F_TRIG9.,CLK,,__GET_VAR(data__->Z2,));
  F_TRIG_body__(&data__->F_TRIG9);
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_VAR(data__->F_TRIG9.Q,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_VAR(data__->CTU5.,CU,,__GET_VAR(data__->R_TRIG6.Q,));
  __SET_VAR(data__->CTU5.,R,,__GET_VAR(data__->DS20,));
  __SET_VAR(data__->CTU5.,PV,,2);
  CTU_body__(&data__->CTU5);
  if ((__GET_VAR(data__->F_TRIG8.Q,) && __GET_VAR(data__->CTU5.Q,))) {
    __SET_VAR(data__->,VIRBLCKZ2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->D5_4,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,LC1,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SWITCH0,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,LEEFT0,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH0,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,D5_3,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH0,) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,D5_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->D5_10,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,LC2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,LC3,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,LEEFT1,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,D5_9,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH1,) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,D5_10,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON25.,IN,,__GET_VAR(data__->D5_15,));
  __SET_VAR(data__->TON25.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON25);
  if (__GET_VAR(data__->TON25.Q,)) {
    __SET_VAR(data__->,LC4,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,RIIGHT2,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,D5_14,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH2,)) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,D5_15,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_AND69_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ0,),
    (BOOL)__GET_VAR(data__->VIRBLCKX0,)));
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,D5_5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_AND190_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ1,),
    (BOOL)__GET_VAR(data__->VIRBLCKX1,)));
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,D5_11,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_AND265_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->VIRBLCKZ2,),
    (BOOL)__GET_VAR(data__->VIRBLCKX2,)));
  if (__GET_VAR(data__->_TMP_AND265_OUT,)) {
    __SET_VAR(data__->,D5_16,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->SWITCH0,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH0,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,D5_3,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH0,)) && __GET_VAR(data__->TON3.Q,))) {
    __SET_VAR(data__->,D5_4,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,RIIGHT1,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,D5_9,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->SWITCH1,)) && __GET_VAR(data__->TON20.Q,))) {
    __SET_VAR(data__->,D5_10,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,LEEFT2,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,D5_14,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SWITCH2,) && __GET_VAR(data__->TON25.Q,))) {
    __SET_VAR(data__->,D5_15,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND69_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND190_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND265_OUT,)) {
    __SET_VAR(data__->,VIRBLCKX2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_AND265_OUT,)) {
    __SET_VAR(data__->,VIRBLCKZ2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->D5_5,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_ADD46_OUT,,__PT5_ADD__INT__INT1(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET0,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD46_ENO,)) {
    __SET_VAR(data__->,TARGET0,,__GET_VAR(data__->_TMP_ADD46_OUT,));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->D5_11,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  __SET_VAR(data__->,_TMP_ADD167_OUT,,__PT5_ADD__INT__INT2(
    (BOOL)__GET_VAR(data__->TON19.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET1,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD167_ENO,)) {
    __SET_VAR(data__->,TARGET1,,__GET_VAR(data__->_TMP_ADD167_OUT,));
  };
  __SET_VAR(data__->TON24.,IN,,__GET_VAR(data__->D5_16,));
  __SET_VAR(data__->TON24.,PT,,__time_to_timespec(1, 4500, 0, 0, 0, 0));
  TON_body__(&data__->TON24);
  __SET_VAR(data__->,_TMP_ADD244_OUT,,__PT5_ADD__INT__INT3(
    (BOOL)__GET_VAR(data__->TON24.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->TARGET2,),
    (INT)55,
    data__));
  if (__GET_VAR(data__->_TMP_ADD244_ENO,)) {
    __SET_VAR(data__->,TARGET2,,__GET_VAR(data__->_TMP_ADD244_OUT,));
  };
  if (__GET_VAR(data__->D5_6,)) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->D5_6,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,LIIFT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,RIIGHT0,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->TON8.Q,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,LEEFT0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->TON9.Q,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,LIIFT0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,LC1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->TON10.Q,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,LEEFT0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,D5_6,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PT5_body__() 





static inline INT __PT4_MOVE__INT__INT1(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE66_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE66_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT2(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE25_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE25_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT3(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE44_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE44_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT4(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE51_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE51_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT5(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE73_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE73_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT6(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE76_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE76_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT7(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE83_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE83_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT8(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE89_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE89_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT9(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE94_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE94_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT4_MOVE__INT__INT10(BOOL EN,
  INT IN,
  PT4 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE100_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE100_ENO,,__TMP_ENO);
  return __res;
}

void PT4_init__(PT4 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->DS16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS17,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTFRONTL0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTFRONTL1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TT90L0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TT90L1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRCCCW4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC2M_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC2M_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC2M_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC4M_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC4M_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC4M_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC4M_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRCCCW0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRCCCW1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRCCCW2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CRCCCW3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTROLLP0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTROLLP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTTURN0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTTURN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTROLLN0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TTROLLN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ROLLSTOP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X5,0,retain)
  __INIT_VAR(data__->Z5,0,retain)
  __INIT_VAR(data__->D4_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D4_7,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
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
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON32,retain);
  CTU_init__(&data__->CTU1,retain);
  TOF_init__(&data__->TOF0,retain);
  TOF_init__(&data__->TOF1,retain);
  TOF_init__(&data__->TOF2,retain);
  TOF_init__(&data__->TOF3,retain);
  __INIT_VAR(data__->_TMP_MOVE66_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE66_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE25_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE25_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  __INIT_VAR(data__->_TMP_MOVE44_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE44_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE51_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE51_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE73_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE73_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE76_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE76_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE83_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE83_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  __INIT_VAR(data__->_TMP_MOVE89_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE89_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE94_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE94_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE100_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE100_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG7,retain);
  R_TRIG_init__(&data__->R_TRIG8,retain);
  R_TRIG_init__(&data__->R_TRIG9,retain);
  R_TRIG_init__(&data__->R_TRIG10,retain);
  R_TRIG_init__(&data__->R_TRIG11,retain);
}

// Code part
void PT4_body__(PT4 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CRCCCW0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CRCCCW1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CRCCCW2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC2M_0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC2M_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC2M_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CRCCCW3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC4M_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC4M_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC4M_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC4M_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CRCCCW4,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CRCCCW0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CRCCCW1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CRCCCW2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC2M_0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC2M_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC2M_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CRCCCW3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC4M_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC4M_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC4M_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC4M_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_10,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_11,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CRCCCW4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP8,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE66_OUT,,__PT4_MOVE__INT__INT1(
    (BOOL)__GET_VAR(data__->D4_1,),
    (INT)10,
    data__));
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->_TMP_MOVE66_ENO,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE25_OUT,,__PT4_MOVE__INT__INT2(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->_TMP_MOVE25_ENO,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,D4_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE25_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE25_OUT,));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,D4_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE66_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE66_OUT,));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->CS6,));
  R_TRIG_body__(&data__->R_TRIG1);
  if (__GET_VAR(data__->R_TRIG1.Q,)) {
    __SET_VAR(data__->,RC6M_10,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->CS6,));
  R_TRIG_body__(&data__->R_TRIG2);
  if (__GET_VAR(data__->R_TRIG2.Q,)) {
    __SET_VAR(data__->,D4_1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,D4_6,,__GET_VAR(data__->D4_3,));
  if (__GET_VAR(data__->D4_3,)) {
    __SET_VAR(data__->,D4_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->D4_3,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  __SET_VAR(data__->,_TMP_MOVE44_OUT,,__PT4_MOVE__INT__INT3(
    (BOOL)__GET_VAR(data__->TON8.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->_TMP_MOVE44_ENO,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE51_OUT,,__PT4_MOVE__INT__INT4(
    (BOOL)__GET_VAR(data__->TON9.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,D4_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D4_5,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->D4_5,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,D4_5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE44_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE44_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE51_OUT,));
  };
  if (__GET_VAR(data__->D4_6,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->D4_6,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->TON7.Q,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,CW5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON32.,IN,,__GET_VAR(data__->D4_2,));
  __SET_VAR(data__->TON32.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON32);
  if (__GET_VAR(data__->TON32.Q,)) {
    __SET_VAR(data__->,LCLP8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE73_OUT,,__PT4_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->TON32.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->_TMP_MOVE73_ENO,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  __SET_VAR(data__->,_TMP_MOVE76_OUT,,__PT4_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON10.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->_TMP_MOVE76_ENO,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE83_OUT,,__PT4_MOVE__INT__INT7(
    (BOOL)__GET_VAR(data__->TON11.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,LCLP8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,D4_4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->DS16,));
  R_TRIG_body__(&data__->R_TRIG3);
  if (__GET_VAR(data__->R_TRIG3.Q,)) {
    __SET_VAR(data__->,D4_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE76_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE76_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE83_OUT,));
  };
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->DS17,));
  R_TRIG_body__(&data__->R_TRIG4);
  if (__GET_VAR(data__->R_TRIG4.Q,)) {
    __SET_VAR(data__->,BC4M_8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE73_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE73_OUT,));
  };
  if (__GET_VAR(data__->D4_4,)) {
    __SET_VAR(data__->,D4_2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->D4_4,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON12);
  __SET_VAR(data__->,_TMP_MOVE89_OUT,,__PT4_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->TON12.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->_TMP_MOVE89_ENO,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  __SET_VAR(data__->,_TMP_MOVE94_OUT,,__PT4_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->TON13.Q,),
    (INT)750,
    data__));
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->_TMP_MOVE94_ENO,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,GRB5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  __SET_VAR(data__->,_TMP_MOVE100_OUT,,__PT4_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,D4_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D4_7,,__GET_VAR(data__->_TMP_MOVE100_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE89_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE89_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE94_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE94_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,Z5,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,X5,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->D4_7,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG5.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->DS17,));
  __SET_VAR(data__->CTU0.,PV,,3);
  CTU_body__(&data__->CTU0);
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,D4_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,BC4M_8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,RC6M_10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS7,)) {
    __SET_VAR(data__->,TTROLLP0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS8,)) {
    __SET_VAR(data__->,ROLLSTOP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS8,)) {
    __SET_VAR(data__->,TTROLLP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS9,)) {
    __SET_VAR(data__->,ROLLSTOP5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS9,)) {
    __SET_VAR(data__->,TTTURN1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS9,)) {
    __SET_VAR(data__->,TTROLLN1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TTFRONTL0,)) {
    __SET_VAR(data__->,TTTURN0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TTFRONTL0,)) {
    __SET_VAR(data__->,TTROLLP0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TTFRONTL1,)) {
    __SET_VAR(data__->,TTTURN1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TTFRONTL1,)) {
    __SET_VAR(data__->,TTROLLP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TT90L0,)) {
    __SET_VAR(data__->,TTROLLN0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TT90L1,)) {
    __SET_VAR(data__->,TTROLLN1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS9,)) {
    __SET_VAR(data__->,TTTURN0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS9,)) {
    __SET_VAR(data__->,TTROLLN0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,ROLLSTOP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,TTTURN1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,TTROLLN1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,ROLLSTOP5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,TTTURN1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS10,)) {
    __SET_VAR(data__->,TTROLLN1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_VAR(data__->CS11,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_VAR(data__->R_TRIG7.,CLK,,__GET_VAR(data__->R_TRIG6.Q,));
  R_TRIG_body__(&data__->R_TRIG7);
  __SET_VAR(data__->R_TRIG8.,CLK,,__GET_VAR(data__->ROLLSTOP1,));
  R_TRIG_body__(&data__->R_TRIG8);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG7.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->R_TRIG8.Q,));
  __SET_VAR(data__->CTU1.,PV,,2);
  CTU_body__(&data__->CTU1);
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->CTU1.Q,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,ROLLSTOP1,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->R_TRIG9.,CLK,,__GET_VAR(data__->CS14,));
  R_TRIG_body__(&data__->R_TRIG9);
  __SET_VAR(data__->TOF3.,IN,,__GET_VAR(data__->R_TRIG9.Q,));
  __SET_VAR(data__->TOF3.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TOF_body__(&data__->TOF3);
  __SET_VAR(data__->,ROLLSTOP6,,__GET_VAR(data__->TOF3.Q,));
  __SET_VAR(data__->R_TRIG10.,CLK,,__GET_VAR(data__->CS12,));
  R_TRIG_body__(&data__->R_TRIG10);
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->R_TRIG10.Q,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,ROLLSTOP2,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->R_TRIG11.,CLK,,__GET_VAR(data__->CS13,));
  R_TRIG_body__(&data__->R_TRIG11);
  __SET_VAR(data__->TOF2.,IN,,__GET_VAR(data__->R_TRIG11.Q,));
  __SET_VAR(data__->TOF2.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TOF_body__(&data__->TOF2);
  __SET_VAR(data__->,ROLLSTOP3,,__GET_VAR(data__->TOF2.Q,));

  goto __end;

__end:
  return;
} // PT4_body__() 





static inline INT __PT3_MOVE__INT__INT1(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE66_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE66_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT2(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE25_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE25_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT3(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE44_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE44_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT4(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE51_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE51_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT5(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE73_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE73_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT6(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE76_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE76_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT7(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE83_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE83_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT8(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE89_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE89_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT9(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE94_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE94_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT10(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE100_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE100_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT11(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE204_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE204_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT12(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE165_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE165_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT13(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE184_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE184_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT14(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE191_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE191_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT15(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE211_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE211_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT16(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE214_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE214_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT17(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE221_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE221_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT18(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE227_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE227_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT19(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE232_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE232_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PT3_MOVE__INT__INT20(BOOL EN,
  INT IN,
  PT3 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE238_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE238_ENO,,__TMP_ENO);
  return __res;
}

void PT3_init__(PT3 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->DS8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CBC1CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC2M_20,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CBC2CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC2M_18,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC4M_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RC6M_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CW3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X2,0,retain)
  __INIT_VAR(data__->Z2,0,retain)
  __INIT_VAR(data__->X3,0,retain)
  __INIT_VAR(data__->Z3,0,retain)
  __INIT_VAR(data__->D3_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_12,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_13,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3_14,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
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
  CTU_init__(&data__->CTU0,retain);
  TON_init__(&data__->TON32,retain);
  TON_init__(&data__->TON3,retain);
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
  CTU_init__(&data__->CTU1,retain);
  TON_init__(&data__->TON33,retain);
  __INIT_VAR(data__->_TMP_MOVE66_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE66_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE25_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE25_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  __INIT_VAR(data__->_TMP_MOVE44_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE44_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE51_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE51_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE73_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE73_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE76_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE76_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE83_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE83_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  __INIT_VAR(data__->_TMP_MOVE89_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE89_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE94_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE94_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE100_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE100_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG5,retain);
  __INIT_VAR(data__->_TMP_MOVE204_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE204_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE165_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE165_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG7,retain);
  __INIT_VAR(data__->_TMP_MOVE184_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE184_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE191_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE191_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE211_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE211_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE214_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE214_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE221_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE221_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG8,retain);
  R_TRIG_init__(&data__->R_TRIG9,retain);
  __INIT_VAR(data__->_TMP_MOVE227_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE227_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE232_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE232_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE238_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE238_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG10,retain);
}

// Code part
void PT3_body__(PT3 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC2M_18,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC2M_20,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC4M_4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CBC1CW,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CBC2CW,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,RC6M_1,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC2M_18,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC2M_20,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC4M_4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CBC1CW,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CBC2CW,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RC6M_1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE66_OUT,,__PT3_MOVE__INT__INT1(
    (BOOL)__GET_VAR(data__->D3_1,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->_TMP_MOVE66_ENO,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,GRB2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE25_OUT,,__PT3_MOVE__INT__INT2(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->_TMP_MOVE25_ENO,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,D3_3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE66_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE66_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE25_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE25_OUT,));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,D3_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,D3_12,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->CS4,));
  R_TRIG_body__(&data__->R_TRIG1);
  if (__GET_VAR(data__->R_TRIG1.Q,)) {
    __SET_VAR(data__->,RC6M_0,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->CS4,));
  R_TRIG_body__(&data__->R_TRIG2);
  if (__GET_VAR(data__->R_TRIG2.Q,)) {
    __SET_VAR(data__->,D3_1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,D3_6,,__GET_VAR(data__->D3_3,));
  if (__GET_VAR(data__->D3_3,)) {
    __SET_VAR(data__->,D3_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->D3_3,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  __SET_VAR(data__->,_TMP_MOVE44_OUT,,__PT3_MOVE__INT__INT3(
    (BOOL)__GET_VAR(data__->TON8.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->_TMP_MOVE44_ENO,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,GRB2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE51_OUT,,__PT3_MOVE__INT__INT4(
    (BOOL)__GET_VAR(data__->TON9.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,D3_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D3_5,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->D3_5,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,D3_5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE44_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE44_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE51_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE51_OUT,));
  };
  if (__GET_VAR(data__->D3_6,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->D3_6,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->TON7.Q,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,CW2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON32.,IN,,__GET_VAR(data__->D3_2,));
  __SET_VAR(data__->TON32.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON32);
  if (__GET_VAR(data__->TON32.Q,)) {
    __SET_VAR(data__->,LCLP4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE73_OUT,,__PT3_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->TON32.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->_TMP_MOVE73_ENO,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  __SET_VAR(data__->,_TMP_MOVE76_OUT,,__PT3_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON10.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->_TMP_MOVE76_ENO,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,GRB2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE83_OUT,,__PT3_MOVE__INT__INT7(
    (BOOL)__GET_VAR(data__->TON11.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,LCLP4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,D3_4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->DS8,));
  R_TRIG_body__(&data__->R_TRIG3);
  if (__GET_VAR(data__->R_TRIG3.Q,)) {
    __SET_VAR(data__->,D3_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE76_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE76_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE83_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE83_OUT,));
  };
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->DS9,));
  R_TRIG_body__(&data__->R_TRIG4);
  if (__GET_VAR(data__->R_TRIG4.Q,)) {
    __SET_VAR(data__->,BC4M_1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE73_ENO,)) {
    __SET_VAR(data__->,X2,,__GET_VAR(data__->_TMP_MOVE73_OUT,));
  };
  if (__GET_VAR(data__->D3_4,)) {
    __SET_VAR(data__->,D3_2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->D3_4,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON12);
  __SET_VAR(data__->,_TMP_MOVE89_OUT,,__PT3_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->TON12.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->_TMP_MOVE89_ENO,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  __SET_VAR(data__->,_TMP_MOVE94_OUT,,__PT3_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->TON13.Q,),
    (INT)750,
    data__));
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->_TMP_MOVE94_ENO,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,GRB2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  __SET_VAR(data__->,_TMP_MOVE100_OUT,,__PT3_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,D3_4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D3_7,,__GET_VAR(data__->_TMP_MOVE100_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE89_ENO,)) {
    __SET_VAR(data__->,X2,,__GET_VAR(data__->_TMP_MOVE89_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE94_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE94_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,Z2,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE100_ENO,)) {
    __SET_VAR(data__->,X2,,__GET_VAR(data__->_TMP_MOVE100_OUT,));
  };
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_VAR(data__->D3_7,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->CTU0.,CU,,__GET_VAR(data__->R_TRIG5.Q,));
  __SET_VAR(data__->CTU0.,R,,__GET_VAR(data__->DS9,));
  __SET_VAR(data__->CTU0.,PV,,3);
  CTU_body__(&data__->CTU0);
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,D3_5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,BC4M_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU0.Q,)) {
    __SET_VAR(data__->,RC6M_0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE204_OUT,,__PT3_MOVE__INT__INT11(
    (BOOL)__GET_VAR(data__->D3_8,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->_TMP_MOVE204_ENO,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,GRB3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE165_OUT,,__PT3_MOVE__INT__INT12(
    (BOOL)__GET_VAR(data__->TON18.Q,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON30.,IN,,__GET_VAR(data__->_TMP_MOVE165_ENO,));
  __SET_VAR(data__->TON30.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON30);
  if (__GET_VAR(data__->TON30.Q,)) {
    __SET_VAR(data__->,D3_10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE204_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE204_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE165_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE165_OUT,));
  };
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_VAR(data__->CS5,));
  R_TRIG_body__(&data__->R_TRIG6);
  if (__GET_VAR(data__->R_TRIG6.Q,)) {
    __SET_VAR(data__->,RC6M_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->R_TRIG7.,CLK,,__GET_VAR(data__->CS5,));
  R_TRIG_body__(&data__->R_TRIG7);
  if (__GET_VAR(data__->R_TRIG7.Q,)) {
    __SET_VAR(data__->,D3_8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,D3_13,,__GET_VAR(data__->D3_10,));
  if (__GET_VAR(data__->D3_10,)) {
    __SET_VAR(data__->,D3_8,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->D3_10,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 1800, 0, 0, 0, 0));
  TON_body__(&data__->TON22);
  __SET_VAR(data__->,_TMP_MOVE184_OUT,,__PT3_MOVE__INT__INT13(
    (BOOL)__GET_VAR(data__->TON22.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON23.,IN,,__GET_VAR(data__->_TMP_MOVE184_ENO,));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON23);
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,GRB3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE191_OUT,,__PT3_MOVE__INT__INT14(
    (BOOL)__GET_VAR(data__->TON23.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE191_ENO,)) {
    __SET_VAR(data__->,D3_10,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D3_12,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON24.,IN,,__GET_VAR(data__->D3_12,));
  __SET_VAR(data__->TON24.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON24);
  if (__GET_VAR(data__->TON24.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->TON24.Q,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->TON3.Q,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,D3_12,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE184_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE184_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE191_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE191_OUT,));
  };
  if (__GET_VAR(data__->D3_13,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->D3_13,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->TON21.Q,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  if (__GET_VAR(data__->TON19.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON20.,IN,,__GET_VAR(data__->TON19.Q,));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,CW3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON33.,IN,,__GET_VAR(data__->D3_9,));
  __SET_VAR(data__->TON33.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON33);
  if (__GET_VAR(data__->TON33.Q,)) {
    __SET_VAR(data__->,LCLP5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE211_OUT,,__PT3_MOVE__INT__INT15(
    (BOOL)__GET_VAR(data__->TON33.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON25.,IN,,__GET_VAR(data__->_TMP_MOVE211_ENO,));
  __SET_VAR(data__->TON25.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON25);
  __SET_VAR(data__->,_TMP_MOVE214_OUT,,__PT3_MOVE__INT__INT16(
    (BOOL)__GET_VAR(data__->TON25.Q,),
    (INT)1000,
    data__));
  __SET_VAR(data__->TON26.,IN,,__GET_VAR(data__->_TMP_MOVE214_ENO,));
  __SET_VAR(data__->TON26.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON26);
  if (__GET_VAR(data__->TON26.Q,)) {
    __SET_VAR(data__->,GRB3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE221_OUT,,__PT3_MOVE__INT__INT17(
    (BOOL)__GET_VAR(data__->TON26.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE221_ENO,)) {
    __SET_VAR(data__->,LCLP5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE221_ENO,)) {
    __SET_VAR(data__->,D3_11,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->R_TRIG8.,CLK,,__GET_VAR(data__->DS10,));
  R_TRIG_body__(&data__->R_TRIG8);
  if (__GET_VAR(data__->R_TRIG8.Q,)) {
    __SET_VAR(data__->,D3_9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE214_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE214_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE221_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE221_OUT,));
  };
  __SET_VAR(data__->R_TRIG9.,CLK,,__GET_VAR(data__->DS11,));
  R_TRIG_body__(&data__->R_TRIG9);
  if (__GET_VAR(data__->R_TRIG9.Q,)) {
    __SET_VAR(data__->,BC4M_2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE211_ENO,)) {
    __SET_VAR(data__->,X3,,__GET_VAR(data__->_TMP_MOVE211_OUT,));
  };
  if (__GET_VAR(data__->D3_11,)) {
    __SET_VAR(data__->,D3_9,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON27.,IN,,__GET_VAR(data__->D3_11,));
  __SET_VAR(data__->TON27.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON27);
  __SET_VAR(data__->,_TMP_MOVE227_OUT,,__PT3_MOVE__INT__INT18(
    (BOOL)__GET_VAR(data__->TON27.Q,),
    (INT)150,
    data__));
  __SET_VAR(data__->TON28.,IN,,__GET_VAR(data__->_TMP_MOVE227_ENO,));
  __SET_VAR(data__->TON28.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON28);
  __SET_VAR(data__->,_TMP_MOVE232_OUT,,__PT3_MOVE__INT__INT19(
    (BOOL)__GET_VAR(data__->TON28.Q,),
    (INT)750,
    data__));
  __SET_VAR(data__->TON29.,IN,,__GET_VAR(data__->_TMP_MOVE232_ENO,));
  __SET_VAR(data__->TON29.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON29);
  if (__GET_VAR(data__->TON29.Q,)) {
    __SET_VAR(data__->,GRB3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON31.,IN,,__GET_VAR(data__->TON29.Q,));
  __SET_VAR(data__->TON31.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON31);
  __SET_VAR(data__->,_TMP_MOVE238_OUT,,__PT3_MOVE__INT__INT20(
    (BOOL)__GET_VAR(data__->TON31.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE238_ENO,)) {
    __SET_VAR(data__->,D3_11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,D3_14,,__GET_VAR(data__->_TMP_MOVE238_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE227_ENO,)) {
    __SET_VAR(data__->,X3,,__GET_VAR(data__->_TMP_MOVE227_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE232_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE232_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE238_ENO,)) {
    __SET_VAR(data__->,Z3,,__GET_VAR(data__->_TMP_MOVE238_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE238_ENO,)) {
    __SET_VAR(data__->,X3,,__GET_VAR(data__->_TMP_MOVE238_OUT,));
  };
  __SET_VAR(data__->R_TRIG10.,CLK,,__GET_VAR(data__->D3_14,));
  R_TRIG_body__(&data__->R_TRIG10);
  __SET_VAR(data__->CTU1.,CU,,__GET_VAR(data__->R_TRIG10.Q,));
  __SET_VAR(data__->CTU1.,R,,__GET_VAR(data__->DS11,));
  __SET_VAR(data__->CTU1.,PV,,3);
  CTU_body__(&data__->CTU1);
  if (__GET_VAR(data__->CTU1.Q,)) {
    __SET_VAR(data__->,D3_12,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU1.Q,)) {
    __SET_VAR(data__->,BC4M_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CTU1.Q,)) {
    __SET_VAR(data__->,RC6M_1,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PT3_body__() 





void PT2_init__(PT2 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->CS0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LCLP2RISE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP0RISE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RCLP7RISE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->Z4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRB4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C5_4M,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C6_4M,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLADE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLADE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLADE3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLADE4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C22_2M,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C23_2M,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DCS0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DCS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DCS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DCS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->D3,__BOOL_LITERAL(FALSE),retain)
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
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TON_init__(&data__->TON20,retain);
  TON_init__(&data__->TON21,retain);
  TON_init__(&data__->TON22,retain);
  TON_init__(&data__->TON23,retain);
}

// Code part
void PT2_body__(PT2 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,X0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C5_4M,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C22_2M,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C23_2M,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP2RISE,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,LCLP3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RCLP0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RCLP0RISE,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RCLP1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C5_4M,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C6_4M,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,GRB4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RCLP6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,RCLP7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,X4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,Z4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C22_2M,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C23_2M,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,DCS2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,DCS0,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,DDS1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->DCS1,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,BLADE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,LCLP3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,GRB1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,LCLP3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->TON2.Q,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON4.,IN,,(__GET_VAR(data__->DCS0,) && __GET_VAR(data__->TON3.Q,)));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,LCLP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,BLADE1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->TON4.Q,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,D1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS0,)) {
    __SET_VAR(data__->,DCS0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS1,)) {
    __SET_VAR(data__->,DCS1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CS2,)) {
    __SET_VAR(data__->,DCS2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->D1,)) {
    __SET_VAR(data__->,DCS1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D1,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->D1,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON6);
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,Z1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,GRB1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,LCLP2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON6.Q,)) {
    __SET_VAR(data__->,LCLP2RISE,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->TON6.Q,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON7);
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,LCLP2RISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,X1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,D1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,DCS0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,BLADE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON7.Q,)) {
    __SET_VAR(data__->,BLADE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CS3,)) {
    __SET_VAR(data__->,DCS3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->DCS2,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON8);
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,BLADE3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON8.Q,)) {
    __SET_VAR(data__->,RCLP1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->TON8.Q,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,Z0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->TON9.Q,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,Z0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,GRB0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,RCLP1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->TON10.Q,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON11);
  if (__GET_VAR(data__->TON11.Q,)) {
    __SET_VAR(data__->,X0,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON12.,IN,,(__GET_VAR(data__->DCS3,) && __GET_VAR(data__->TON11.Q,)));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON12);
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,BLADE4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON12.Q,)) {
    __SET_VAR(data__->,RCLP0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->TON12.Q,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON13);
  if (__GET_VAR(data__->TON13.Q,)) {
    __SET_VAR(data__->,D2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->D2,)) {
    __SET_VAR(data__->,DCS2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D2,)) {
    __SET_VAR(data__->,Z0,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->D2,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,Z0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,GRB0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,RCLP0,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,RCLP0RISE,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->TON14.Q,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,RCLP0RISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,X0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,D2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,DCS3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,BLADE3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,BLADE4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->DDS1,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON16);
  if (__GET_VAR(data__->TON16.Q,)) {
    __SET_VAR(data__->,RCLP6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->TON16.Q,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON17);
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,C6_4M,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON17.Q,)) {
    __SET_VAR(data__->,Z4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->TON17.Q,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON18);
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,Z4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,GRB4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON18.Q,)) {
    __SET_VAR(data__->,RCLP6,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->TON18.Q,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON19);
  if (__GET_VAR(data__->TON19.Q,)) {
    __SET_VAR(data__->,X4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON20.,IN,,(__GET_VAR(data__->DDS2,) && __GET_VAR(data__->TON19.Q,)));
  __SET_VAR(data__->TON20.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON20);
  if (__GET_VAR(data__->TON20.Q,)) {
    __SET_VAR(data__->,RCLP7,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON21.,IN,,__GET_VAR(data__->TON20.Q,));
  __SET_VAR(data__->TON21.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON21);
  if (__GET_VAR(data__->TON21.Q,)) {
    __SET_VAR(data__->,D3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->DS14,)) {
    __SET_VAR(data__->,DDS1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->DS15,)) {
    __SET_VAR(data__->,DDS2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->D3,)) {
    __SET_VAR(data__->,DDS1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->D3,)) {
    __SET_VAR(data__->,Z4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON22.,IN,,__GET_VAR(data__->D3,));
  __SET_VAR(data__->TON22.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON22);
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,Z4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,GRB4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,RCLP7,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON22.Q,)) {
    __SET_VAR(data__->,RCLP7RISE,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON23.,IN,,__GET_VAR(data__->TON22.Q,));
  __SET_VAR(data__->TON23.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON23);
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,RCLP7RISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,X4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,D3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,DDS2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON23.Q,)) {
    __SET_VAR(data__->,C6_4M,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PT2_body__() 





void PT1_init__(PT1 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->DS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DS10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CA1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CB1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CD1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CA2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CB2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CD2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTART4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCSTOP4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C5KIRI,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->C11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSH1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSH2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSH3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PUSH4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC14,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC15,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC16,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BC17,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DDS5,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TOF_init__(&data__->TOF0,retain);
}

// Code part
void PT1_body__(PT1 *data__) {
  // Initialise TEMP variables

  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CA1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CB1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CC1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CD1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C5KIRI,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,C11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC14,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC15,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC16,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,BC17,,__BOOL_LITERAL(TRUE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C2,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C3,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C5,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CA1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CB1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CC1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CD1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CE1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C5KIRI,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C7,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C8,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C9,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C10,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,C11,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC14,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC15,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC16,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,BC17,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTART0,,__BOOL_LITERAL(TRUE));
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
    __SET_VAR(data__->,MCSTART4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,MCSTOP0,,__BOOL_LITERAL(FALSE));
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
    __SET_VAR(data__->,MCSTART0,,__BOOL_LITERAL(FALSE));
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
    __SET_VAR(data__->,MCSTART4,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,MCSTOP0,,__BOOL_LITERAL(TRUE));
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
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->DDS1,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,CA1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,DDS1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS1,)) {
    __SET_VAR(data__->,DDS1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PUSH1,,__GET_VAR(data__->VS1,));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->DDS2,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,CB1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,DDS2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS2,)) {
    __SET_VAR(data__->,DDS2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PUSH2,,__GET_VAR(data__->VS2,));
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->DDS3,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON2);
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,CC1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON2.Q,)) {
    __SET_VAR(data__->,DDS3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS3,)) {
    __SET_VAR(data__->,DDS3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PUSH3,,__GET_VAR(data__->VS3,));
  if (__GET_VAR(data__->DS4,)) {
    __SET_VAR(data__->,DDS4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,PUSH4,,__GET_VAR(data__->VS4,));
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->DDS4,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,CD1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,DDS4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->DS5,)) {
    __SET_VAR(data__->,DDS5,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->DDS5,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON4);
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,CE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,DDS5,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TOF0.,IN,,((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,)));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,CA2,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,CB2,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,CC2,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,CD2,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,CE2,,__GET_VAR(data__->TOF0.Q,));
  if (((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,))) {
    __SET_VAR(data__->,CA1,,__BOOL_LITERAL(TRUE));
  };
  if (((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,))) {
    __SET_VAR(data__->,CB1,,__BOOL_LITERAL(TRUE));
  };
  if (((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,))) {
    __SET_VAR(data__->,CC1,,__BOOL_LITERAL(TRUE));
  };
  if (((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,))) {
    __SET_VAR(data__->,CD1,,__BOOL_LITERAL(TRUE));
  };
  if (((((__GET_VAR(data__->DS10,) && __GET_VAR(data__->DS9,)) && __GET_VAR(data__->DS8,)) && __GET_VAR(data__->DS7,)) && __GET_VAR(data__->DS6,))) {
    __SET_VAR(data__->,CE1,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PT1_body__() 





