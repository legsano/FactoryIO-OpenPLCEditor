TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM PICDRO
  VAR
    START : BOOL;
    STOP : BOOL;
    SEN1 : BOOL;
    SEN2 : BOOL;
    CON1 : BOOL;
    CON2 : BOOL;
    X : BOOL;
    Z : BOOL;
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR3 : BOOL;
    VIR4 : BOOL;
    GRAP : BOOL;
    CLAMP2 : BOOL;
    CLPRise2 : BOOL;
    CLAMP1 : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
  END_VAR

  IF START THEN
    CON2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON1 := TRUE; (*set*)
  END_IF;
  TON0(IN := VIR3, PT := T#1s);
  IF TON0.Q THEN
    Z := TRUE; (*set*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#1s);
  IF TON1.Q THEN
    GRAP := TRUE; (*set*)
  END_IF;
  IF TON1.Q THEN
    Z := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    CLAMP1 := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    CON2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    Z := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    X := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLPRise2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAP := FALSE; (*reset*)
  END_IF;
  IF VIR1 THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  TON2(IN := VIR1, PT := T#1s);
  IF TON2.Q THEN
    X := TRUE; (*set*)
  END_IF;
  TON3(IN := VIR4 AND TON2.Q, PT := T#1s);
  IF TON3.Q THEN
    Z := TRUE; (*set*)
  END_IF;
  TON4(IN := TON3.Q, PT := T#1s);
  IF TON4.Q THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF VIR2 THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    GRAP := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    Z := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    CLAMP2 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    CLPRise2 := TRUE; (*set*)
  END_IF;
  TON5(IN := VIR2, PT := T#1s);
  IF TON5.Q THEN
    X := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    CLPRise2 := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  IF SEN1 THEN
    CLAMP1 := TRUE; (*set*)
  END_IF;
  IF SEN1 THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  IF SEN2 THEN
    CLAMP2 := TRUE; (*set*)
  END_IF;
  IF SEN2 THEN
    VIR4 := TRUE; (*set*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : PICDRO;
  END_RESOURCE
END_CONFIGURATION
