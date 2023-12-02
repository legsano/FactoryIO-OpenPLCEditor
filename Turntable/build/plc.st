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


PROGRAM muterr
  VAR
    START : BOOL;
    STOP : BOOL;
    SEN1 : BOOL;
    SEN2 : BOOL;
    SEN3 : BOOL;
    TFrontLimit : BOOL;
    TFrontLimit90 : BOOL;
    CON1 : BOOL;
    CON2 : BOOL;
    TurnRoll : BOOL;
    TurnTable : BOOL;
    SEN1VIR : BOOL;
  END_VAR

  IF START THEN
    CON1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON2 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    CON1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    TurnTable := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    TurnRoll := FALSE; (*reset*)
  END_IF;
  IF SEN1 THEN
    TurnRoll := TRUE; (*set*)
  END_IF;
  TurnTable := TFrontLimit;
  IF TFrontLimit THEN
    TurnRoll := FALSE; (*reset*)
  END_IF;
  IF TFrontLimit90 THEN
    TurnRoll := TRUE; (*set*)
  END_IF;
  IF SEN2 THEN
    TurnRoll := FALSE; (*reset*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : muterr;
  END_RESOURCE
END_CONFIGURATION
