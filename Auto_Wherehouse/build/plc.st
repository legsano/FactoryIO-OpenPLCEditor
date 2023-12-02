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


PROGRAM AWH
  VAR
    Start : BOOL;
    Stop : BOOL;
    Reset : BOOL;
    Sensor : BOOL;
    X : BOOL;
    Z : BOOL;
    EntryCon : BOOL;
    LoadCon : BOOL;
    Lift : BOOL;
    Leeft : BOOL;
    Riight : BOOL;
    Target : INT;
    DigitalDis : INT;
    DigitalDis0 : INT;
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR3 : BOOL;
    VIR4 : BOOL;
    VIR10 : BOOL;
    VIRblckx : BOOL;
    VIRblckz : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    CTU0 : CTU;
    TON7 : TON;
    TON4 : TON;
    TON6 : TON;
    TON3 : TON;
    CTU1 : CTU;
    R_TRIG1 : R_TRIG;
    F_TRIG1 : F_TRIG;
    F_TRIG2 : F_TRIG;
    F_TRIG3 : F_TRIG;
    R_TRIG2 : R_TRIG;
    _TMP_AND69_OUT : BOOL;
    _TMP_ADD46_ENO : BOOL;
    _TMP_ADD46_OUT : INT;
  END_VAR

  IF VIR1 THEN
    Leeft := TRUE; (*set*)
  END_IF;
  TON0(IN := VIR1, PT := T#1500ms);
  IF TON0.Q THEN
    Lift := TRUE; (*set*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#1500ms);
  IF TON1.Q THEN
    Leeft := FALSE; (*reset*)
  END_IF;
  VIR2 := TON1.Q OR TON1.Q;
  IF Start THEN
    LoadCon := TRUE; (*set*)
  END_IF;
  IF Start THEN
    EntryCon := TRUE; (*set*)
  END_IF;
  IF Sensor THEN
    LoadCon := FALSE; (*reset*)
  END_IF;
  IF Sensor THEN
    EntryCon := FALSE; (*reset*)
  END_IF;
  TON2(IN := VIR2, PT := T#1500ms);
  IF TON2.Q THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    LoadCon := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    EntryCon := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  R_TRIG1(CLK := TON2.Q);
  CTU0(CU := R_TRIG1.Q, PV := 54);
  Target := CTU0.CV;
  DigitalDis := CTU0.CV;
  IF Sensor THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF VIR10 AND VIR3 THEN
    Riight := TRUE; (*set*)
  END_IF;
  TON4(IN := VIR10 AND VIR3, PT := T#1500ms);
  IF TON4.Q THEN
    Lift := FALSE; (*reset*)
  END_IF;
  IF TON4.Q THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  TON7(IN := VIR1, PT := T#4400ms);
  IF TON7.Q THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  F_TRIG1(CLK := X);
  IF F_TRIG1.Q THEN
    VIRblckx := TRUE; (*set*)
  END_IF;
  TON3(IN := VIR4, PT := T#1000ms);
  IF TON3.Q THEN
    Riight := FALSE; (*reset*)
  END_IF;
  IF TON3.Q THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  IF TON3.Q THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  IF TON3.Q THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  F_TRIG2(CLK := Z);
  F_TRIG3(CLK := Z);
  R_TRIG2(CLK := F_TRIG3.Q);
  CTU1(CU := R_TRIG2.Q, R := Start, PV := 2);
  IF F_TRIG2.Q AND CTU1.Q THEN
    VIRblckz := TRUE; (*set*)
  END_IF;
  DigitalDis0 := CTU1.CV;
  _TMP_AND69_OUT := AND(VIRblckz, VIRblckx);
  IF _TMP_AND69_OUT THEN
    VIR10 := TRUE; (*set*)
  END_IF;
  TON6(IN := VIR10, PT := T#4500ms);
  _TMP_ADD46_OUT := ADD(EN := TON6.Q, IN1 := Target, IN2 := 55, ENO => _TMP_ADD46_ENO);
  IF _TMP_ADD46_ENO THEN
      Target := _TMP_ADD46_OUT;
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckx := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckz := FALSE; (*reset*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : AWH;
  END_RESOURCE
END_CONFIGURATION
