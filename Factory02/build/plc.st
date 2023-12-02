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


PROGRAM Part1
  VAR_EXTERNAL
    START : BOOL;
    STOP : BOOL;
    CONR4_1 : BOOL;
    CONR4_2 : BOOL;
    SENDIF13 : BOOL;
  END_VAR
  VAR
    SENVIS1 : BOOL;
    SENVIS2 : BOOL;
    SENVIS3 : BOOL;
    SENCAP2 : BOOL;
    SENCAP3 : BOOL;
    SENCAP5 : BOOL;
    SENCAP6 : BOOL;
    TTFrontLimit1 : BOOL;
    TTFrontLimit2 : BOOL;
    TTLimit90_1 : BOOL;
    TTLimit90_2 : BOOL;
    SENCAP8 : BOOL;
    SENCAP9 : BOOL;
    SENCAP10 : BOOL;
    SENCAP11 : BOOL;
    SENCAP12 : BOOL;
    SENCAP13 : BOOL;
    CON2_1 : BOOL;
    CON2_2 : BOOL;
    CON4_1 : BOOL;
    CON4_2 : BOOL;
    CON4_3 : BOOL;
    CON6_1 : BOOL;
    CON6_2 : BOOL;
  END_VAR
  VAR_OUTPUT
    CON6_3 : BOOL;
    CON6_5 : BOOL;
    CON6_7 : BOOL;
  END_VAR
  VAR
    CONSCALE1 : BOOL;
    CONSCALE2 : BOOL;
    CONCURV1 : BOOL;
    CONCURV2 : BOOL;
    PIVOTARM1 : BOOL;
    PIVOTARM2 : BOOL;
    PIVOTARM3 : BOOL;
    PIVOTURN1 : BOOL;
    PIVOTURN2 : BOOL;
    PIVOTURN3 : BOOL;
    MCStart1 : BOOL;
    MCStart2 : BOOL;
    MCStart3 : BOOL;
    MCStop1 : BOOL;
    MCStop2 : BOOL;
    MCStop3 : BOOL;
    TurnTable1 : BOOL;
    TurnTable2 : BOOL;
    TTPles1 : BOOL;
    TTPles2 : BOOL;
    RollStop1 : BOOL;
    RollStop2 : BOOL;
    RollStop3 : BOOL;
    RollStop4 : BOOL;
    RollStop5 : BOOL;
    RollStop6 : BOOL;
  END_VAR
  VAR_EXTERNAL
    RollStop7 : BOOL;
  END_VAR
  VAR
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR10 : BOOL;
    VIR11 : BOOL;
  END_VAR
  VAR
    TOF1 : TOF;
    TOF2 : TOF;
    CTU0 : CTU;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
  END_VAR

  R_TRIG1(CLK := SENCAP10);
  TOF2(IN := R_TRIG1.Q, PT := T#1s);
  RollStop6 := TOF2.Q;
  IF START THEN
    CON2_1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON2_2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON4_1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON4_2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON4_3 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONSCALE1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONSCALE2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONCURV1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONCURV2 := TRUE; (*set*)
  END_IF;
  IF SENDIF13 THEN
    RollStop7 := TRUE; (*set*)
  END_IF;
  R_TRIG2(CLK := SENCAP13);
  R_TRIG3(CLK := R_TRIG2.Q);
  R_TRIG4(CLK := RollStop5);
  CTU0(CU := R_TRIG3.Q, R := R_TRIG4.Q, PV := 2);
  TOF1(IN := CTU0.Q, PT := T#4s);
  RollStop5 := TOF1.Q;
  IF NOT(STOP) THEN
    CON2_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON2_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONSCALE1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONSCALE2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONCURV1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONCURV2 := FALSE; (*reset*)
  END_IF;
  IF TTFrontLimit1 THEN
    TurnTable1 := TRUE; (*set*)
  END_IF;
  IF TTFrontLimit2 THEN
    TurnTable2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    MCStart1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    MCStart2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    MCStart3 := TRUE; (*set*)
  END_IF;
  IF START THEN
    MCStop1 := FALSE; (*reset*)
  END_IF;
  IF START THEN
    MCStop2 := FALSE; (*reset*)
  END_IF;
  IF START THEN
    MCStop3 := FALSE; (*reset*)
  END_IF;
  IF START THEN
    CON6_3 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_5 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_7 := TRUE; (*set*)
  END_IF;
  TTPles1 := NOT(TTFrontLimit1) AND TTPles1 OR SENCAP8 OR TTLimit90_1;
  TTPles2 := NOT(TTFrontLimit2) AND TTPles2 OR SENCAP9 OR TTLimit90_2;
  IF NOT(STOP) THEN
    MCStop1 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    MCStop2 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    MCStop3 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    MCStart1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    MCStart2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    MCStart3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    RollStop7 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_7 := FALSE; (*reset*)
  END_IF;
  IF SENCAP3 THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF SENCAP6 THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  PIVOTARM1 := SENVIS1;
  PIVOTURN1 := SENVIS1;
  IF VIR1 THEN
    TurnTable1 := TRUE; (*set*)
  END_IF;
  IF VIR1 THEN
    TTPles1 := TRUE; (*set*)
  END_IF;
  IF VIR2 THEN
    TurnTable2 := TRUE; (*set*)
  END_IF;
  IF VIR2 THEN
    TTPles2 := TRUE; (*set*)
  END_IF;
  PIVOTARM2 := SENVIS2;
  PIVOTURN2 := SENVIS2;
  IF SENCAP2 THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  IF SENCAP2 THEN
    TurnTable1 := FALSE; (*reset*)
  END_IF;
  IF SENCAP2 THEN
    TTPles1 := FALSE; (*reset*)
  END_IF;
  IF SENCAP2 THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    VIR11 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    TurnTable2 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    TTPles2 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  PIVOTARM3 := SENVIS3;
  PIVOTURN3 := SENVIS3;
  IF SENCAP3 THEN
    RollStop1 := TRUE; (*set*)
  END_IF;
  IF SENCAP3 THEN
    CON6_3 := FALSE; (*reset*)
  END_IF;
  IF SENCAP6 THEN
    RollStop2 := TRUE; (*set*)
  END_IF;
  IF SENCAP6 THEN
    CON6_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(RollStop1) AND NOT(VIR10) AND CONR4_1 THEN
    RollStop3 := TRUE; (*set*)
  END_IF;
  IF NOT(RollStop2) AND NOT(VIR11) AND CONR4_2 THEN
    RollStop4 := TRUE; (*set*)
  END_IF;
  IF SENCAP2 THEN
    RollStop3 := FALSE; (*reset*)
  END_IF;
  IF SENCAP2 THEN
    RollStop1 := FALSE; (*reset*)
  END_IF;
  IF SENCAP2 THEN
    CON6_3 := TRUE; (*set*)
  END_IF;
  IF SENCAP5 THEN
    RollStop2 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    RollStop4 := FALSE; (*reset*)
  END_IF;
  IF SENCAP5 THEN
    CON6_5 := TRUE; (*set*)
  END_IF;
  IF SENCAP12 THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF SENCAP11 THEN
    VIR10 := TRUE; (*set*)
  END_IF;
END_PROGRAM

PROGRAM Part2
  VAR_EXTERNAL
    START : BOOL;
    STOP : BOOL;
  END_VAR
  VAR
    SENDIF1 : BOOL;
    SENDIF2 : BOOL;
    SENDIF5 : BOOL;
    SENDIF6 : BOOL;
    SENDIF9 : BOOL;
    SENDIF10 : BOOL;
    CON4_4 : BOOL;
    CON4_5 : BOOL;
    CON4_6 : BOOL;
    CLAMP1 : BOOL;
    CLAMP2 : BOOL;
    CLAMP4 : BOOL;
    CLAMP5 : BOOL;
    CLAMP7 : BOOL;
    CLAMP8 : BOOL;
    RiseCLP1 : BOOL;
    RiseCLP4 : BOOL;
    RiseCLP7 : BOOL;
    X1 : BOOL;
    Z1 : BOOL;
    GRAB1 : BOOL;
    X2 : BOOL;
    Z2 : BOOL;
    GRAB2 : BOOL;
    X3 : BOOL;
    Z3 : BOOL;
    GRAB3 : BOOL;
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR3 : BOOL;
    VIR4 : BOOL;
    VIR5 : BOOL;
    VIR6 : BOOL;
    VIR7 : BOOL;
    VIR8 : BOOL;
    VIR9 : BOOL;
    VIR10 : BOOL;
    VIR11 : BOOL;
    VIR12 : BOOL;
  END_VAR
  VAR
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
    TON0 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TON20 : TON;
  END_VAR

  IF START THEN
    CON4_4 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON4_5 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON4_6 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON4_6 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    X1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    Z2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    X2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    Z3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    X3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    VIR5 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP5 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP7 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP8 := FALSE; (*reset*)
  END_IF;
  TON0(IN := VIR3, PT := T#1s);
  IF TON0.Q THEN
    Z1 := TRUE; (*set*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#1s);
  IF TON1.Q THEN
    GRAB1 := TRUE; (*set*)
  END_IF;
  IF TON1.Q THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    CLAMP2 := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF SENDIF2 THEN
    CLAMP2 := TRUE; (*set*)
  END_IF;
  IF SENDIF2 THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  IF VIR1 THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  TON2(IN := VIR1, PT := T#1s);
  IF TON2.Q THEN
    X1 := TRUE; (*set*)
  END_IF;
  TON3(IN := VIR4 AND TON2.Q, PT := T#1s);
  IF TON3.Q THEN
    Z1 := TRUE; (*set*)
  END_IF;
  TON4(IN := TON3.Q, PT := T#1s);
  IF TON4.Q THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF SENDIF1 THEN
    CLAMP1 := TRUE; (*set*)
  END_IF;
  IF SENDIF1 THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF VIR2 THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    GRAB1 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    CLAMP1 := FALSE; (*reset*)
  END_IF;
  IF VIR2 THEN
    RiseCLP1 := TRUE; (*set*)
  END_IF;
  TON5(IN := VIR2, PT := T#1s);
  IF TON5.Q THEN
    X1 := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    RiseCLP1 := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    CON4_4 := TRUE; (*set*)
  END_IF;
  TON18(IN := VIR3, PT := T#1s);
  IF TON18.Q THEN
    CON4_4 := FALSE; (*reset*)
  END_IF;
  TON11(IN := VIR7, PT := T#1s);
  IF TON11.Q THEN
    Z2 := TRUE; (*set*)
  END_IF;
  TON6(IN := TON11.Q, PT := T#1s);
  IF TON6.Q THEN
    GRAB2 := TRUE; (*set*)
  END_IF;
  IF TON6.Q THEN
    Z2 := FALSE; (*reset*)
  END_IF;
  IF TON6.Q THEN
    CLAMP5 := FALSE; (*reset*)
  END_IF;
  IF TON6.Q THEN
    VIR5 := TRUE; (*set*)
  END_IF;
  IF SENDIF6 THEN
    CLAMP5 := TRUE; (*set*)
  END_IF;
  IF SENDIF6 THEN
    VIR7 := TRUE; (*set*)
  END_IF;
  IF VIR5 THEN
    VIR7 := FALSE; (*reset*)
  END_IF;
  TON7(IN := VIR5, PT := T#1s);
  IF TON7.Q THEN
    X2 := TRUE; (*set*)
  END_IF;
  TON8(IN := VIR8 AND TON7.Q, PT := T#1s);
  IF TON8.Q THEN
    Z2 := TRUE; (*set*)
  END_IF;
  TON9(IN := TON8.Q, PT := T#1s);
  IF TON9.Q THEN
    VIR6 := TRUE; (*set*)
  END_IF;
  IF SENDIF5 THEN
    CLAMP4 := TRUE; (*set*)
  END_IF;
  IF SENDIF5 THEN
    VIR8 := TRUE; (*set*)
  END_IF;
  IF VIR6 THEN
    VIR5 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    VIR8 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    GRAB2 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    Z2 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    CLAMP4 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    RiseCLP4 := TRUE; (*set*)
  END_IF;
  TON10(IN := VIR6, PT := T#1s);
  IF TON10.Q THEN
    X2 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    RiseCLP4 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    VIR6 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    CON4_5 := TRUE; (*set*)
  END_IF;
  TON19(IN := VIR7, PT := T#1s);
  IF TON19.Q THEN
    CON4_5 := FALSE; (*reset*)
  END_IF;
  TON17(IN := VIR11, PT := T#1s);
  IF TON17.Q THEN
    Z3 := TRUE; (*set*)
  END_IF;
  TON12(IN := TON17.Q, PT := T#1s);
  IF TON12.Q THEN
    GRAB3 := TRUE; (*set*)
  END_IF;
  IF TON12.Q THEN
    Z3 := FALSE; (*reset*)
  END_IF;
  IF TON12.Q THEN
    CLAMP8 := FALSE; (*reset*)
  END_IF;
  IF TON12.Q THEN
    VIR9 := TRUE; (*set*)
  END_IF;
  IF SENDIF10 THEN
    CLAMP8 := TRUE; (*set*)
  END_IF;
  IF SENDIF10 THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF VIR9 THEN
    VIR11 := FALSE; (*reset*)
  END_IF;
  TON13(IN := VIR9, PT := T#1s);
  IF TON13.Q THEN
    X3 := TRUE; (*set*)
  END_IF;
  TON14(IN := VIR12 AND TON13.Q, PT := T#1s);
  IF TON14.Q THEN
    Z3 := TRUE; (*set*)
  END_IF;
  TON15(IN := TON14.Q, PT := T#1s);
  IF TON15.Q THEN
    VIR10 := TRUE; (*set*)
  END_IF;
  IF SENDIF9 THEN
    CLAMP7 := TRUE; (*set*)
  END_IF;
  IF SENDIF9 THEN
    VIR12 := TRUE; (*set*)
  END_IF;
  IF VIR10 THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    VIR12 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    GRAB3 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    Z3 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    CLAMP7 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    RiseCLP7 := TRUE; (*set*)
  END_IF;
  TON16(IN := VIR10, PT := T#1s);
  IF TON16.Q THEN
    X3 := FALSE; (*reset*)
  END_IF;
  IF TON16.Q THEN
    RiseCLP7 := FALSE; (*reset*)
  END_IF;
  IF TON16.Q THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  IF TON16.Q THEN
    CON4_6 := TRUE; (*set*)
  END_IF;
  TON20(IN := VIR11, PT := T#1s);
  IF TON20.Q THEN
    CON4_6 := FALSE; (*reset*)
  END_IF;
END_PROGRAM

PROGRAM Part3
  VAR_EXTERNAL
    START : BOOL;
    STOP : BOOL;
  END_VAR
  VAR
    SENDIF3 : BOOL;
    SENDIF4 : BOOL;
    SENDIF7 : BOOL;
    SENDIF8 : BOOL;
    SENDIF11 : BOOL;
    SENDIF12 : BOOL;
    SENCAP1 : BOOL;
    SENCAP4 : BOOL;
    SENCAP7 : BOOL;
    CON6_4 : BOOL;
    CON6_6 : BOOL;
    CON6_8 : BOOL;
    CLAMP3 : BOOL;
    CLAMP6 : BOOL;
    CLAMP9 : BOOL;
    CW4 : BOOL;
    CCW4 : BOOL;
    CW5 : BOOL;
    CCW5 : BOOL;
    CW6 : BOOL;
    CCW6 : BOOL;
    GRAB4 : BOOL;
    GRAB5 : BOOL;
    GRAB6 : BOOL;
    CONR2_1 : BOOL;
    CONR2_2 : BOOL;
    CONR2_3 : BOOL;
  END_VAR
  VAR_EXTERNAL
    CONR4_1 : BOOL;
    CONR4_2 : BOOL;
  END_VAR
  VAR
    CONR4_3 : BOOL;
    CONR4_4 : BOOL;
    CONR6_1 : BOOL;
    CONR6_2 : BOOL;
    CONRLCCW1 : BOOL;
    CONRLCCW2 : BOOL;
    X4 : INT;
    Z4 : INT;
    X5 : INT;
    Z5 : INT;
    X6 : INT;
    Z6 : INT;
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR3 : BOOL;
    VIR4 : BOOL;
    VIR5 : BOOL;
    VIR6 : BOOL;
    VIR7 : BOOL;
    VIR8 : BOOL;
    VIR9 : BOOL;
    VIR10 : BOOL;
    VIR11 : BOOL;
    VIR12 : BOOL;
    VIR13 : BOOL;
    VIR14 : BOOL;
    VIR15 : BOOL;
    VIR16 : BOOL;
    VIR17 : BOOL;
    VIR18 : BOOL;
    VIR19 : BOOL;
    VIR20 : BOOL;
    VIR21 : BOOL;
    VIR22 : BOOL;
    VIR23 : BOOL;
  END_VAR
  VAR_EXTERNAL
    CON6_3 : BOOL;
    CON6_5 : BOOL;
    CON6_7 : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    CTU0 : CTU;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TON20 : TON;
    TON21 : TON;
    TON22 : TON;
    TON23 : TON;
    TON24 : TON;
    TON25 : TON;
    TON26 : TON;
    TON27 : TON;
    TON28 : TON;
    TON29 : TON;
    TON30 : TON;
    TON31 : TON;
    TON32 : TON;
    TON33 : TON;
    CTU1 : CTU;
    TON34 : TON;
    TON35 : TON;
    TON36 : TON;
    TON37 : TON;
    TON38 : TON;
    TON39 : TON;
    TON40 : TON;
    TON41 : TON;
    TON42 : TON;
    TON43 : TON;
    TON44 : TON;
    TON45 : TON;
    TON46 : TON;
    TON47 : TON;
    TON48 : TON;
    TON49 : TON;
    TON50 : TON;
    CTU2 : CTU;
    TON51 : TON;
    TON52 : TON;
    TON53 : TON;
    _TMP_MOVE66_ENO : BOOL;
    _TMP_MOVE66_OUT : INT;
    _TMP_MOVE25_ENO : BOOL;
    _TMP_MOVE25_OUT : INT;
    _TMP_MOVE288_ENO : BOOL;
    _TMP_MOVE288_OUT : INT;
    _TMP_MOVE249_ENO : BOOL;
    _TMP_MOVE249_OUT : INT;
    _TMP_MOVE44_ENO : BOOL;
    _TMP_MOVE44_OUT : INT;
    _TMP_MOVE51_ENO : BOOL;
    _TMP_MOVE51_OUT : INT;
    _TMP_MOVE268_ENO : BOOL;
    _TMP_MOVE268_OUT : INT;
    _TMP_MOVE275_ENO : BOOL;
    _TMP_MOVE275_OUT : INT;
    _TMP_MOVE73_ENO : BOOL;
    _TMP_MOVE73_OUT : INT;
    _TMP_MOVE76_ENO : BOOL;
    _TMP_MOVE76_OUT : INT;
    _TMP_MOVE83_ENO : BOOL;
    _TMP_MOVE83_OUT : INT;
    _TMP_MOVE295_ENO : BOOL;
    _TMP_MOVE295_OUT : INT;
    _TMP_MOVE298_ENO : BOOL;
    _TMP_MOVE298_OUT : INT;
    _TMP_MOVE305_ENO : BOOL;
    _TMP_MOVE305_OUT : INT;
    _TMP_MOVE89_ENO : BOOL;
    _TMP_MOVE89_OUT : INT;
    _TMP_MOVE94_ENO : BOOL;
    _TMP_MOVE94_OUT : INT;
    _TMP_MOVE100_ENO : BOOL;
    _TMP_MOVE100_OUT : INT;
    _TMP_MOVE311_ENO : BOOL;
    _TMP_MOVE311_OUT : INT;
    _TMP_MOVE316_ENO : BOOL;
    _TMP_MOVE316_OUT : INT;
    _TMP_MOVE322_ENO : BOOL;
    _TMP_MOVE322_OUT : INT;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    _TMP_MOVE177_ENO : BOOL;
    _TMP_MOVE177_OUT : INT;
    _TMP_MOVE138_ENO : BOOL;
    _TMP_MOVE138_OUT : INT;
    _TMP_MOVE157_ENO : BOOL;
    _TMP_MOVE157_OUT : INT;
    _TMP_MOVE164_ENO : BOOL;
    _TMP_MOVE164_OUT : INT;
    _TMP_MOVE184_ENO : BOOL;
    _TMP_MOVE184_OUT : INT;
    _TMP_MOVE187_ENO : BOOL;
    _TMP_MOVE187_OUT : INT;
    _TMP_MOVE194_ENO : BOOL;
    _TMP_MOVE194_OUT : INT;
    _TMP_MOVE200_ENO : BOOL;
    _TMP_MOVE200_OUT : INT;
    _TMP_MOVE205_ENO : BOOL;
    _TMP_MOVE205_OUT : INT;
    _TMP_MOVE211_ENO : BOOL;
    _TMP_MOVE211_OUT : INT;
    R_TRIG3 : R_TRIG;
  END_VAR

  IF START THEN
    CON6_4 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_6 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CON6_8 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR2_1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR2_2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR2_3 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR4_4 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR6_1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONR6_2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONRLCCW1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    CONRLCCW2 := TRUE; (*set*)
  END_IF;
  IF SENCAP1 THEN
    VIR22 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_6 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CON6_8 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR2_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR2_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR2_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR4_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR6_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR6_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONRLCCW1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP6 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CLAMP9 := FALSE; (*reset*)
  END_IF;
  IF SENCAP4 THEN
    VIR23 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB5 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    GRAB6 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR4_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR4_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONRLCCW2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    CONR4_3 := FALSE; (*reset*)
  END_IF;
  VIR5 := VIR1;
  TON3(IN := VIR1, PT := T#1800ms);
  _TMP_MOVE66_OUT := MOVE(EN := TON3.Q, IN := 1000, ENO => _TMP_MOVE66_ENO);
  TON4(IN := _TMP_MOVE66_ENO, PT := T#1000ms);
  IF TON4.Q THEN
    GRAB4 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE25_OUT := MOVE(EN := TON4.Q, IN := 0, ENO => _TMP_MOVE25_ENO);
  TON15(IN := _TMP_MOVE25_ENO, PT := T#1s);
  IF TON15.Q THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  VIR19 := VIR15;
  TON36(IN := VIR15, PT := T#1800ms);
  _TMP_MOVE288_OUT := MOVE(EN := TON36.Q, IN := 1000, ENO => _TMP_MOVE288_ENO);
  TON37(IN := _TMP_MOVE288_ENO, PT := T#1000ms);
  IF TON37.Q THEN
    GRAB6 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE249_OUT := MOVE(EN := TON37.Q, IN := 0, ENO => _TMP_MOVE249_ENO);
  TON49(IN := _TMP_MOVE249_ENO, PT := T#1s);
  IF TON49.Q THEN
    VIR17 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE66_ENO THEN
      Z4 := _TMP_MOVE66_OUT;
  END_IF;
  IF _TMP_MOVE25_ENO THEN
      Z4 := _TMP_MOVE25_OUT;
  END_IF;
  IF _TMP_MOVE288_ENO THEN
      Z6 := _TMP_MOVE288_OUT;
  END_IF;
  IF _TMP_MOVE249_ENO THEN
      Z6 := _TMP_MOVE249_OUT;
  END_IF;
  IF SENDIF4 THEN
    CON6_4 := FALSE; (*reset*)
  END_IF;
  IF SENDIF4 THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF SENDIF12 THEN
    CON6_8 := FALSE; (*reset*)
  END_IF;
  IF SENDIF12 THEN
    VIR15 := TRUE; (*set*)
  END_IF;
  VIR6 := VIR3;
  IF VIR3 THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  TON8(IN := VIR3, PT := T#1800ms);
  _TMP_MOVE44_OUT := MOVE(EN := TON8.Q, IN := 1000, ENO => _TMP_MOVE44_ENO);
  TON9(IN := _TMP_MOVE44_ENO, PT := T#1000ms);
  IF TON9.Q THEN
    GRAB4 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE51_OUT := MOVE(EN := TON9.Q, IN := 0, ENO => _TMP_MOVE51_ENO);
  IF _TMP_MOVE51_ENO THEN
    CON6_3 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE51_ENO THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  IF VIR5 THEN
    CW4 := TRUE; (*set*)
  END_IF;
  TON0(IN := VIR5, PT := T#500ms);
  IF TON0.Q THEN
    CW4 := FALSE; (*reset*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#500ms);
  IF TON1.Q THEN
    CW4 := TRUE; (*set*)
  END_IF;
  TON2(IN := TON1.Q, PT := T#500ms);
  IF TON2.Q THEN
    CW4 := FALSE; (*reset*)
  END_IF;
  VIR20 := VIR17;
  IF VIR17 THEN
    VIR15 := FALSE; (*reset*)
  END_IF;
  TON41(IN := VIR17, PT := T#1800ms);
  _TMP_MOVE268_OUT := MOVE(EN := TON41.Q, IN := 1000, ENO => _TMP_MOVE268_ENO);
  TON42(IN := _TMP_MOVE268_ENO, PT := T#1000ms);
  IF TON42.Q THEN
    GRAB6 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE275_OUT := MOVE(EN := TON42.Q, IN := 0, ENO => _TMP_MOVE275_ENO);
  IF _TMP_MOVE275_ENO THEN
    CON6_7 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE275_ENO THEN
    VIR17 := FALSE; (*reset*)
  END_IF;
  IF VIR19 THEN
    CW6 := TRUE; (*set*)
  END_IF;
  TON43(IN := VIR19, PT := T#500ms);
  IF TON43.Q THEN
    CW6 := FALSE; (*reset*)
  END_IF;
  TON34(IN := TON43.Q, PT := T#500ms);
  IF TON34.Q THEN
    CW6 := TRUE; (*set*)
  END_IF;
  TON35(IN := TON34.Q, PT := T#500ms);
  IF TON35.Q THEN
    CW6 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE44_ENO THEN
      Z4 := _TMP_MOVE44_OUT;
  END_IF;
  IF _TMP_MOVE51_ENO THEN
      Z4 := _TMP_MOVE51_OUT;
  END_IF;
  IF _TMP_MOVE268_ENO THEN
      Z6 := _TMP_MOVE268_OUT;
  END_IF;
  IF _TMP_MOVE275_ENO THEN
      Z6 := _TMP_MOVE275_OUT;
  END_IF;
  IF VIR6 THEN
    CCW4 := TRUE; (*set*)
  END_IF;
  TON7(IN := VIR6, PT := T#500ms);
  IF TON7.Q THEN
    CCW4 := FALSE; (*reset*)
  END_IF;
  TON5(IN := TON7.Q, PT := T#500ms);
  IF TON5.Q THEN
    CCW4 := TRUE; (*set*)
  END_IF;
  TON6(IN := TON5.Q, PT := T#500ms);
  IF TON6.Q THEN
    CCW4 := FALSE; (*reset*)
  END_IF;
  IF VIR20 THEN
    CCW6 := TRUE; (*set*)
  END_IF;
  TON40(IN := VIR20, PT := T#500ms);
  IF TON40.Q THEN
    CCW6 := FALSE; (*reset*)
  END_IF;
  TON38(IN := TON40.Q, PT := T#500ms);
  IF TON38.Q THEN
    CCW6 := TRUE; (*set*)
  END_IF;
  TON39(IN := TON38.Q, PT := T#500ms);
  IF TON39.Q THEN
    CCW6 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE73_OUT := MOVE(EN := VIR2, IN := 1000, ENO => _TMP_MOVE73_ENO);
  TON10(IN := _TMP_MOVE73_ENO, PT := T#1s);
  _TMP_MOVE76_OUT := MOVE(EN := TON10.Q, IN := 1000, ENO => _TMP_MOVE76_ENO);
  TON11(IN := _TMP_MOVE76_ENO, PT := T#1s);
  IF TON11.Q THEN
    GRAB4 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE83_OUT := MOVE(EN := TON11.Q, IN := 0, ENO => _TMP_MOVE83_ENO);
  IF _TMP_MOVE83_ENO THEN
    CLAMP3 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE83_ENO THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF SENDIF3 THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF SENDIF3 THEN
    CLAMP3 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE295_OUT := MOVE(EN := VIR16, IN := 1000, ENO => _TMP_MOVE295_ENO);
  TON44(IN := _TMP_MOVE295_ENO, PT := T#1s);
  _TMP_MOVE298_OUT := MOVE(EN := TON44.Q, IN := 1000, ENO => _TMP_MOVE298_ENO);
  TON45(IN := _TMP_MOVE298_ENO, PT := T#1s);
  IF TON45.Q THEN
    GRAB6 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE305_OUT := MOVE(EN := TON45.Q, IN := 0, ENO => _TMP_MOVE305_ENO);
  IF _TMP_MOVE305_ENO THEN
    CLAMP9 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE305_ENO THEN
    VIR18 := TRUE; (*set*)
  END_IF;
  IF SENDIF11 THEN
    VIR16 := TRUE; (*set*)
  END_IF;
  IF SENDIF11 THEN
    CLAMP9 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE76_ENO THEN
      Z4 := _TMP_MOVE76_OUT;
  END_IF;
  IF _TMP_MOVE298_ENO THEN
      Z6 := _TMP_MOVE298_OUT;
  END_IF;
  IF _TMP_MOVE83_ENO THEN
      Z4 := _TMP_MOVE83_OUT;
  END_IF;
  IF _TMP_MOVE305_ENO THEN
      Z6 := _TMP_MOVE305_OUT;
  END_IF;
  IF _TMP_MOVE73_ENO THEN
      X4 := _TMP_MOVE73_OUT;
  END_IF;
  IF _TMP_MOVE295_ENO THEN
      X6 := _TMP_MOVE295_OUT;
  END_IF;
  IF VIR4 THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  TON12(IN := VIR4, PT := T#1s);
  _TMP_MOVE89_OUT := MOVE(EN := TON12.Q, IN := 150, ENO => _TMP_MOVE89_ENO);
  TON13(IN := _TMP_MOVE89_ENO, PT := T#1s);
  _TMP_MOVE94_OUT := MOVE(EN := TON13.Q, IN := 900, ENO => _TMP_MOVE94_ENO);
  TON14(IN := _TMP_MOVE94_ENO, PT := T#1s);
  IF TON14.Q THEN
    GRAB4 := FALSE; (*reset*)
  END_IF;
  TON16(IN := TON14.Q, PT := T#500ms);
  _TMP_MOVE100_OUT := MOVE(EN := TON16.Q, IN := 0, ENO => _TMP_MOVE100_ENO);
  IF _TMP_MOVE100_ENO THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  VIR7 := _TMP_MOVE100_ENO;
  IF VIR18 THEN
    VIR16 := FALSE; (*reset*)
  END_IF;
  TON46(IN := VIR18, PT := T#1s);
  _TMP_MOVE311_OUT := MOVE(EN := TON46.Q, IN := 150, ENO => _TMP_MOVE311_ENO);
  TON47(IN := _TMP_MOVE311_ENO, PT := T#1s);
  _TMP_MOVE316_OUT := MOVE(EN := TON47.Q, IN := 900, ENO => _TMP_MOVE316_ENO);
  TON48(IN := _TMP_MOVE316_ENO, PT := T#1s);
  IF TON48.Q THEN
    GRAB6 := FALSE; (*reset*)
  END_IF;
  TON50(IN := TON48.Q, PT := T#500ms);
  _TMP_MOVE322_OUT := MOVE(EN := TON50.Q, IN := 0, ENO => _TMP_MOVE322_ENO);
  IF _TMP_MOVE322_ENO THEN
    VIR18 := FALSE; (*reset*)
  END_IF;
  VIR21 := _TMP_MOVE322_ENO;
  IF _TMP_MOVE89_ENO THEN
      X4 := _TMP_MOVE89_OUT;
  END_IF;
  IF _TMP_MOVE94_ENO THEN
      Z4 := _TMP_MOVE94_OUT;
  END_IF;
  IF _TMP_MOVE311_ENO THEN
      X6 := _TMP_MOVE311_OUT;
  END_IF;
  IF _TMP_MOVE316_ENO THEN
      Z6 := _TMP_MOVE316_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      Z4 := _TMP_MOVE100_OUT;
  END_IF;
  IF _TMP_MOVE322_ENO THEN
      Z6 := _TMP_MOVE322_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      X4 := _TMP_MOVE100_OUT;
  END_IF;
  IF _TMP_MOVE322_ENO THEN
      X6 := _TMP_MOVE322_OUT;
  END_IF;
  R_TRIG1(CLK := VIR7);
  TON52(IN := VIR22, PT := T#2000ms);
  CTU0(CU := R_TRIG1.Q, R := TON52.Q, PV := 3);
  IF CTU0.Q THEN
    CON6_3 := FALSE; (*reset*)
  END_IF;
  CONR4_1 := CTU0.Q;
  R_TRIG2(CLK := VIR21);
  TON51(IN := SENCAP7, PT := T#1s);
  CTU2(CU := R_TRIG2.Q, R := TON51.Q, PV := 3);
  IF CTU2.Q THEN
    CON6_7 := FALSE; (*reset*)
  END_IF;
  CONR4_3 := CTU2.Q;
  IF TON52.Q THEN
    VIR22 := FALSE; (*reset*)
  END_IF;
  IF TON52.Q THEN
    CON6_4 := TRUE; (*set*)
  END_IF;
  IF TON51.Q THEN
    CON6_8 := TRUE; (*set*)
  END_IF;
  VIR12 := VIR8;
  TON19(IN := VIR8, PT := T#1800ms);
  _TMP_MOVE177_OUT := MOVE(EN := TON19.Q, IN := 1000, ENO => _TMP_MOVE177_ENO);
  TON20(IN := _TMP_MOVE177_ENO, PT := T#1000ms);
  IF TON20.Q THEN
    GRAB5 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE138_OUT := MOVE(EN := TON20.Q, IN := 0, ENO => _TMP_MOVE138_ENO);
  TON32(IN := _TMP_MOVE138_ENO, PT := T#1s);
  IF TON32.Q THEN
    VIR10 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE177_ENO THEN
      Z5 := _TMP_MOVE177_OUT;
  END_IF;
  IF _TMP_MOVE138_ENO THEN
      Z5 := _TMP_MOVE138_OUT;
  END_IF;
  IF SENDIF8 THEN
    CON6_6 := FALSE; (*reset*)
  END_IF;
  IF SENDIF8 THEN
    VIR8 := TRUE; (*set*)
  END_IF;
  VIR13 := VIR10;
  IF VIR10 THEN
    VIR8 := FALSE; (*reset*)
  END_IF;
  TON24(IN := VIR10, PT := T#1800ms);
  _TMP_MOVE157_OUT := MOVE(EN := TON24.Q, IN := 1000, ENO => _TMP_MOVE157_ENO);
  TON25(IN := _TMP_MOVE157_ENO, PT := T#1000ms);
  IF TON25.Q THEN
    GRAB5 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE164_OUT := MOVE(EN := TON25.Q, IN := 0, ENO => _TMP_MOVE164_ENO);
  IF _TMP_MOVE164_ENO THEN
    CON6_5 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE164_ENO THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  IF VIR12 THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON26(IN := VIR12, PT := T#500ms);
  IF TON26.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  TON17(IN := TON26.Q, PT := T#500ms);
  IF TON17.Q THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON18(IN := TON17.Q, PT := T#500ms);
  IF TON18.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE157_ENO THEN
      Z5 := _TMP_MOVE157_OUT;
  END_IF;
  IF _TMP_MOVE164_ENO THEN
      Z5 := _TMP_MOVE164_OUT;
  END_IF;
  IF VIR13 THEN
    CCW5 := TRUE; (*set*)
  END_IF;
  TON23(IN := VIR13, PT := T#500ms);
  IF TON23.Q THEN
    CCW5 := FALSE; (*reset*)
  END_IF;
  TON21(IN := TON23.Q, PT := T#500ms);
  IF TON21.Q THEN
    CCW5 := TRUE; (*set*)
  END_IF;
  TON22(IN := TON21.Q, PT := T#500ms);
  IF TON22.Q THEN
    CCW5 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE184_OUT := MOVE(EN := VIR9, IN := 1000, ENO => _TMP_MOVE184_ENO);
  TON27(IN := _TMP_MOVE184_ENO, PT := T#1s);
  _TMP_MOVE187_OUT := MOVE(EN := TON27.Q, IN := 1000, ENO => _TMP_MOVE187_ENO);
  TON28(IN := _TMP_MOVE187_ENO, PT := T#1s);
  IF TON28.Q THEN
    GRAB5 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE194_OUT := MOVE(EN := TON28.Q, IN := 0, ENO => _TMP_MOVE194_ENO);
  IF _TMP_MOVE194_ENO THEN
    CLAMP6 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE194_ENO THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF SENDIF7 THEN
    VIR9 := TRUE; (*set*)
  END_IF;
  IF SENDIF7 THEN
    CLAMP6 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE187_ENO THEN
      Z5 := _TMP_MOVE187_OUT;
  END_IF;
  IF _TMP_MOVE194_ENO THEN
      Z5 := _TMP_MOVE194_OUT;
  END_IF;
  IF _TMP_MOVE184_ENO THEN
      X5 := _TMP_MOVE184_OUT;
  END_IF;
  IF VIR11 THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  TON29(IN := VIR11, PT := T#1s);
  _TMP_MOVE200_OUT := MOVE(EN := TON29.Q, IN := 150, ENO => _TMP_MOVE200_ENO);
  TON30(IN := _TMP_MOVE200_ENO, PT := T#1s);
  _TMP_MOVE205_OUT := MOVE(EN := TON30.Q, IN := 900, ENO => _TMP_MOVE205_ENO);
  TON31(IN := _TMP_MOVE205_ENO, PT := T#1s);
  IF TON31.Q THEN
    GRAB5 := FALSE; (*reset*)
  END_IF;
  TON33(IN := TON31.Q, PT := T#500ms);
  _TMP_MOVE211_OUT := MOVE(EN := TON33.Q, IN := 0, ENO => _TMP_MOVE211_ENO);
  IF _TMP_MOVE211_ENO THEN
    VIR11 := FALSE; (*reset*)
  END_IF;
  VIR14 := _TMP_MOVE211_ENO;
  IF _TMP_MOVE200_ENO THEN
      X5 := _TMP_MOVE200_OUT;
  END_IF;
  IF _TMP_MOVE205_ENO THEN
      Z5 := _TMP_MOVE205_OUT;
  END_IF;
  IF _TMP_MOVE211_ENO THEN
      Z5 := _TMP_MOVE211_OUT;
  END_IF;
  IF _TMP_MOVE211_ENO THEN
      X5 := _TMP_MOVE211_OUT;
  END_IF;
  R_TRIG3(CLK := VIR14);
  TON53(IN := VIR23, PT := T#1600ms);
  CTU1(CU := R_TRIG3.Q, R := TON53.Q, PV := 3);
  IF CTU1.Q THEN
    CON6_5 := FALSE; (*reset*)
  END_IF;
  CONR4_2 := CTU1.Q;
  IF TON53.Q THEN
    VIR23 := FALSE; (*reset*)
  END_IF;
  IF TON53.Q THEN
    CON6_6 := TRUE; (*set*)
  END_IF;
END_PROGRAM

PROGRAM Part4
  VAR_EXTERNAL
    START : BOOL;
    STOP : BOOL;
    SENDIF13 : BOOL;
    RollStop7 : BOOL;
  END_VAR
  VAR
    SENDIF14 : BOOL;
    SENDIF15 : BOOL;
    SENVIS4 : BOOL;
    SENVIS5 : BOOL;
    X1 : BOOL;
    Z1 : BOOL;
    X2 : BOOL;
    Z2 : BOOL;
    X3 : BOOL;
    Z3 : BOOL;
    Liift : BOOL;
    Leeft : BOOL;
    Riight : BOOL;
    Liift2 : BOOL;
    Leeft2 : BOOL;
    Riight2 : BOOL;
    Liift3 : BOOL;
    Leeft3 : BOOL;
    Riight3 : BOOL;
    LoadCon1 : BOOL;
    LoadCon2 : BOOL;
    LoadCon3 : BOOL;
    LoadCon4 : BOOL;
    LoadCon5 : BOOL;
    Target : INT;
    Target2 : INT;
    Target3 : INT;
    DIGDIS1 : INT;
    DIGDIS2 : INT;
    DIGDIS3 : INT;
    VIR1 : BOOL;
    VIR2 : BOOL;
    VIR3 : BOOL;
    VIR4 : BOOL;
    VIR5 : BOOL;
    VIR6 : BOOL;
    VIRblckx1 : BOOL;
    VIRblckz1 : BOOL;
    Hijau : BOOL;
    Switch1 : BOOL;
    Reset1 : BOOL;
    VIR7 : BOOL;
    VIR8 : BOOL;
    VIR9 : BOOL;
    VIR10 : BOOL;
    VIR11 : BOOL;
    VIR12 : BOOL;
    VIRblckx2 : BOOL;
    VIRblckz2 : BOOL;
    Metal : BOOL;
    Switch2 : BOOL;
    Reset2 : BOOL;
    VIR13 : BOOL;
    VIR14 : BOOL;
    VIR15 : BOOL;
    VIR16 : BOOL;
    VIR17 : BOOL;
    VIRblckx3 : BOOL;
    VIRblckz3 : BOOL;
    Switch3 : BOOL;
    Reset3 : BOOL;
    VR1 : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    CTU0 : CTU;
    TON2 : TON;
    TON7 : TON;
    TON4 : TON;
    TON6 : TON;
    TON3 : TON;
    CTU1 : CTU;
    TON5 : TON;
    TON8 : TON;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    CTU2 : CTU;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TON20 : TON;
    CTU3 : CTU;
    TON21 : TON;
    TON22 : TON;
    TON23 : TON;
    TON24 : TON;
    TON25 : TON;
    CTU4 : CTU;
    TON26 : TON;
    TON27 : TON;
    TON28 : TON;
    TON29 : TON;
    TON30 : TON;
    CTU5 : CTU;
    CTU6 : CTU;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    F_TRIG1 : F_TRIG;
    F_TRIG2 : F_TRIG;
    F_TRIG3 : F_TRIG;
    F_TRIG4 : F_TRIG;
    R_TRIG3 : R_TRIG;
    F_TRIG5 : F_TRIG;
    F_TRIG6 : F_TRIG;
    R_TRIG4 : R_TRIG;
    _TMP_AND69_OUT : BOOL;
    _TMP_AND190_OUT : BOOL;
    _TMP_ADD46_ENO : BOOL;
    _TMP_ADD46_OUT : INT;
    _TMP_ADD167_ENO : BOOL;
    _TMP_ADD167_OUT : INT;
    F_TRIG7 : F_TRIG;
    R_TRIG5 : R_TRIG;
    R_TRIG6 : R_TRIG;
    R_TRIG7 : R_TRIG;
    F_TRIG8 : F_TRIG;
    F_TRIG9 : F_TRIG;
    F_TRIG10 : F_TRIG;
    R_TRIG8 : R_TRIG;
    _TMP_AND290_OUT : BOOL;
    _TMP_ADD269_ENO : BOOL;
    _TMP_ADD269_OUT : INT;
  END_VAR

  IF START THEN
    LoadCon1 := TRUE; (*set*)
  END_IF;
  IF START THEN
    LoadCon2 := TRUE; (*set*)
  END_IF;
  IF START THEN
    LoadCon3 := TRUE; (*set*)
  END_IF;
  IF START THEN
    LoadCon4 := TRUE; (*set*)
  END_IF;
  IF START THEN
    LoadCon5 := TRUE; (*set*)
  END_IF;
  IF NOT(STOP) THEN
    LoadCon1 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    LoadCon2 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    LoadCon3 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    LoadCon4 := FALSE; (*reset*)
  END_IF;
  IF NOT(STOP) THEN
    LoadCon5 := FALSE; (*reset*)
  END_IF;
  IF VIR1 THEN
    Riight := TRUE; (*set*)
  END_IF;
  TON0(IN := VIR1, PT := T#1500ms);
  IF TON0.Q THEN
    Liift := TRUE; (*set*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#1500ms);
  IF TON1.Q THEN
    Riight := FALSE; (*reset*)
  END_IF;
  VIR2 := TON1.Q OR TON1.Q;
  IF SENVIS4 THEN
    Hijau := TRUE; (*set*)
  END_IF;
  IF VIR7 THEN
    Riight2 := TRUE; (*set*)
  END_IF;
  TON12(IN := VIR7, PT := T#1500ms);
  IF TON12.Q THEN
    Liift2 := TRUE; (*set*)
  END_IF;
  TON13(IN := TON12.Q, PT := T#1500ms);
  IF TON13.Q THEN
    Riight2 := FALSE; (*reset*)
  END_IF;
  VIR8 := TON13.Q OR TON13.Q;
  IF SENVIS5 THEN
    Metal := TRUE; (*set*)
  END_IF;
  IF SENDIF13 THEN
    LoadCon1 := FALSE; (*reset*)
  END_IF;
  IF SENDIF14 THEN
    LoadCon2 := FALSE; (*reset*)
  END_IF;
  IF SENDIF14 THEN
    LoadCon3 := FALSE; (*reset*)
  END_IF;
  TON2(IN := VIR2, PT := T#1500ms);
  IF TON2.Q THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  TON16(IN := VIR8, PT := T#1500ms);
  IF TON16.Q THEN
    VIR9 := TRUE; (*set*)
  END_IF;
  IF TON2.Q THEN
    Hijau := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  R_TRIG1(CLK := TON2.Q);
  CTU0(CU := R_TRIG1.Q, R := VIR1 AND Reset1, PV := 5);
  IF CTU0.Q THEN
    Reset1 := TRUE; (*set*)
  END_IF;
  IF Hijau AND SENDIF13 THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF TON16.Q THEN
    Metal := FALSE; (*reset*)
  END_IF;
  IF TON16.Q THEN
    VIR7 := FALSE; (*reset*)
  END_IF;
  R_TRIG2(CLK := TON16.Q);
  CTU2(CU := R_TRIG2.Q, R := VIR7 AND Reset2, PV := 5);
  IF CTU2.Q THEN
    Reset2 := TRUE; (*set*)
  END_IF;
  IF Metal AND SENDIF14 THEN
    VIR7 := TRUE; (*set*)
  END_IF;
  Target := CTU0.CV;
  Target2 := CTU2.CV;
  IF NOT(Hijau) AND SENDIF13 THEN
    VIR6 := TRUE; (*set*)
  END_IF;
  IF NOT(Metal) AND SENDIF14 THEN
    VIR12 := TRUE; (*set*)
  END_IF;
  DIGDIS1 := CTU0.CV;
  IF VIR1 AND Reset1 THEN
    Switch1 := TRUE; (*set*)
  END_IF;
  IF VIR7 AND Reset2 THEN
    Switch2 := TRUE; (*set*)
  END_IF;
  DIGDIS2 := CTU2.CV;
  TON7(IN := VIR1, PT := T#4400ms);
  IF TON7.Q THEN
    VIR5 := FALSE; (*reset*)
  END_IF;
  TON17(IN := VIR7, PT := T#4400ms);
  IF TON17.Q THEN
    VIR11 := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND VIR5 AND VIR3 THEN
    Leeft := TRUE; (*set*)
  END_IF;
  TON4(IN := NOT(Switch1) AND VIR5 AND VIR3 OR Switch1 AND VIR5 AND VIR3, PT := T#1500ms);
  IF TON4.Q THEN
    Liift := FALSE; (*reset*)
  END_IF;
  IF TON4.Q THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF TON4.Q THEN
    Reset1 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND VIR11 AND VIR9 THEN
    Leeft2 := TRUE; (*set*)
  END_IF;
  TON18(IN := NOT(Switch2) AND VIR11 AND VIR9 OR Switch2 AND VIR11 AND VIR9, PT := T#1500ms);
  IF TON18.Q THEN
    Liift2 := FALSE; (*reset*)
  END_IF;
  IF TON18.Q THEN
    VIR10 := TRUE; (*set*)
  END_IF;
  IF TON18.Q THEN
    Reset2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND VIR5 AND VIR3 THEN
    Riight := TRUE; (*set*)
  END_IF;
  F_TRIG1(CLK := X1);
  IF F_TRIG1.Q THEN
    VIRblckx1 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch2) AND VIR11 AND VIR9 THEN
    Riight2 := TRUE; (*set*)
  END_IF;
  F_TRIG2(CLK := X2);
  IF F_TRIG2.Q THEN
    VIRblckx2 := TRUE; (*set*)
  END_IF;
  F_TRIG3(CLK := Z1);
  F_TRIG4(CLK := Z1);
  R_TRIG3(CLK := F_TRIG4.Q);
  CTU1(CU := R_TRIG3.Q, R := SENDIF13, PV := 2);
  IF F_TRIG3.Q AND CTU1.Q THEN
    VIRblckz1 := TRUE; (*set*)
  END_IF;
  F_TRIG5(CLK := Z2);
  F_TRIG6(CLK := Z2);
  R_TRIG4(CLK := F_TRIG6.Q);
  CTU3(CU := R_TRIG4.Q, R := SENDIF14, PV := 2);
  IF F_TRIG5.Q AND CTU3.Q THEN
    VIRblckz2 := TRUE; (*set*)
  END_IF;
  TON3(IN := VIR4, PT := T#1000ms);
  IF TON3.Q THEN
    LoadCon1 := TRUE; (*set*)
  END_IF;
  IF Switch1 AND TON3.Q THEN
    Leeft := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND TON3.Q THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND TON3.Q THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  TON20(IN := VIR10, PT := T#1000ms);
  IF TON20.Q THEN
    LoadCon2 := TRUE; (*set*)
  END_IF;
  IF TON20.Q THEN
    LoadCon3 := TRUE; (*set*)
  END_IF;
  IF Switch2 AND TON20.Q THEN
    Leeft2 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND TON20.Q THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND TON20.Q THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  _TMP_AND69_OUT := AND(VIRblckz1, VIRblckx1);
  IF _TMP_AND69_OUT THEN
    VIR5 := TRUE; (*set*)
  END_IF;
  _TMP_AND190_OUT := AND(VIRblckz2, VIRblckx2);
  IF _TMP_AND190_OUT THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch1) AND TON3.Q THEN
    Riight := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND TON3.Q THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND TON3.Q THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND TON20.Q THEN
    Riight2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND TON20.Q THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND TON20.Q THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckx1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckz1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND190_OUT THEN
    VIRblckx2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND190_OUT THEN
    VIRblckz2 := FALSE; (*reset*)
  END_IF;
  TON6(IN := VIR5, PT := T#4500ms);
  _TMP_ADD46_OUT := ADD(EN := TON6.Q, IN1 := Target, IN2 := 55, ENO => _TMP_ADD46_ENO);
  IF _TMP_ADD46_ENO THEN
      Target := _TMP_ADD46_OUT;
  END_IF;
  TON19(IN := VIR11, PT := T#4500ms);
  _TMP_ADD167_OUT := ADD(EN := TON19.Q, IN1 := Target2, IN2 := 55, ENO => _TMP_ADD167_ENO);
  IF _TMP_ADD167_ENO THEN
      Target2 := _TMP_ADD167_OUT;
  END_IF;
  IF VIR6 THEN
    Riight := TRUE; (*set*)
  END_IF;
  TON5(IN := VIR6, PT := T#1500ms);
  IF TON5.Q THEN
    Liift := TRUE; (*set*)
  END_IF;
  TON8(IN := TON5.Q, PT := T#1500ms);
  IF TON8.Q THEN
    Riight := FALSE; (*reset*)
  END_IF;
  TON9(IN := TON8.Q, PT := T#500ms);
  IF TON9.Q THEN
    Leeft := TRUE; (*set*)
  END_IF;
  TON10(IN := TON9.Q, PT := T#1500ms);
  IF TON10.Q THEN
    Liift := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    LoadCon1 := TRUE; (*set*)
  END_IF;
  TON11(IN := TON10.Q, PT := T#1500ms);
  IF TON11.Q THEN
    Leeft := FALSE; (*reset*)
  END_IF;
  IF TON11.Q THEN
    VIR6 := FALSE; (*reset*)
  END_IF;
  IF TON11.Q THEN
    RollStop7 := FALSE; (*reset*)
  END_IF;
  IF VIR12 THEN
    Riight2 := TRUE; (*set*)
  END_IF;
  TON14(IN := VIR12, PT := T#1500ms);
  IF TON14.Q THEN
    Liift2 := TRUE; (*set*)
  END_IF;
  TON15(IN := TON14.Q, PT := T#1500ms);
  IF TON15.Q THEN
    Riight2 := FALSE; (*reset*)
  END_IF;
  TON21(IN := TON15.Q, PT := T#500ms);
  IF TON21.Q THEN
    Leeft2 := TRUE; (*set*)
  END_IF;
  TON22(IN := TON21.Q, PT := T#1500ms);
  IF TON22.Q THEN
    Liift2 := FALSE; (*reset*)
  END_IF;
  IF TON22.Q THEN
    LoadCon2 := TRUE; (*set*)
  END_IF;
  IF TON22.Q THEN
    LoadCon3 := TRUE; (*set*)
  END_IF;
  TON23(IN := TON22.Q, PT := T#1500ms);
  IF TON23.Q THEN
    Leeft2 := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    VIR12 := FALSE; (*reset*)
  END_IF;
  F_TRIG7(CLK := X1);
  R_TRIG5(CLK := F_TRIG7.Q);
  R_TRIG6(CLK := SENDIF13);
  CTU6(CU := R_TRIG5.Q, R := R_TRIG6.Q, PV := 2);
  IF CTU6.Q THEN
    RollStop7 := FALSE; (*reset*)
  END_IF;
  IF VIR13 THEN
    Riight3 := TRUE; (*set*)
  END_IF;
  TON24(IN := VIR13, PT := T#1500ms);
  IF TON24.Q THEN
    Liift3 := TRUE; (*set*)
  END_IF;
  TON25(IN := TON24.Q, PT := T#1500ms);
  IF TON25.Q THEN
    Riight3 := FALSE; (*reset*)
  END_IF;
  VIR14 := TON25.Q OR TON25.Q;
  TON26(IN := VIR14, PT := T#1500ms);
  IF TON26.Q THEN
    VIR15 := TRUE; (*set*)
  END_IF;
  IF SENDIF15 THEN
    LoadCon4 := FALSE; (*reset*)
  END_IF;
  IF SENDIF15 THEN
    LoadCon5 := FALSE; (*reset*)
  END_IF;
  IF TON26.Q THEN
    VIR13 := FALSE; (*reset*)
  END_IF;
  R_TRIG7(CLK := TON26.Q);
  CTU4(CU := R_TRIG7.Q, R := VIR13 AND Reset3, PV := 5);
  IF CTU4.Q THEN
    Reset3 := TRUE; (*set*)
  END_IF;
  IF SENDIF15 THEN
    VIR13 := TRUE; (*set*)
  END_IF;
  Target3 := CTU4.CV;
  IF VIR13 AND Reset3 THEN
    Switch3 := TRUE; (*set*)
  END_IF;
  DIGDIS3 := CTU4.CV;
  TON27(IN := VIR13, PT := T#4400ms);
  IF TON27.Q THEN
    VIR17 := FALSE; (*reset*)
  END_IF;
  IF Switch3 AND VIR17 AND VIR15 THEN
    Leeft3 := TRUE; (*set*)
  END_IF;
  TON28(IN := NOT(Switch3) AND VIR17 AND VIR15 OR Switch3 AND VIR17 AND VIR15, PT := T#1500ms);
  IF TON28.Q THEN
    Liift3 := FALSE; (*reset*)
  END_IF;
  IF TON28.Q THEN
    VIR16 := TRUE; (*set*)
  END_IF;
  IF TON28.Q THEN
    Reset3 := FALSE; (*reset*)
  END_IF;
  F_TRIG8(CLK := X3);
  IF F_TRIG8.Q THEN
    VIRblckx3 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch3) AND VIR17 AND VIR15 THEN
    Riight3 := TRUE; (*set*)
  END_IF;
  F_TRIG9(CLK := Z3);
  F_TRIG10(CLK := Z3);
  R_TRIG8(CLK := F_TRIG10.Q);
  CTU5(CU := R_TRIG8.Q, R := SENDIF15, PV := 2);
  IF F_TRIG9.Q AND CTU5.Q THEN
    VIRblckz3 := TRUE; (*set*)
  END_IF;
  TON30(IN := VIR16, PT := T#1000ms);
  IF TON30.Q THEN
    LoadCon4 := TRUE; (*set*)
  END_IF;
  IF TON30.Q THEN
    LoadCon5 := TRUE; (*set*)
  END_IF;
  IF Switch3 AND TON30.Q THEN
    Leeft3 := FALSE; (*reset*)
  END_IF;
  IF Switch3 AND TON30.Q THEN
    VIR15 := FALSE; (*reset*)
  END_IF;
  IF Switch3 AND TON30.Q THEN
    VIR16 := FALSE; (*reset*)
  END_IF;
  _TMP_AND290_OUT := AND(VIRblckz3, VIRblckx3);
  IF _TMP_AND290_OUT THEN
    VIR17 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch3) AND TON30.Q THEN
    Riight3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch3) AND TON30.Q THEN
    VIR15 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch3) AND TON30.Q THEN
    VIR16 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND290_OUT THEN
    VIRblckx3 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND290_OUT THEN
    VIRblckz3 := FALSE; (*reset*)
  END_IF;
  TON29(IN := VIR17, PT := T#4500ms);
  _TMP_ADD269_OUT := ADD(EN := TON29.Q, IN1 := Target3, IN2 := 55, ENO => _TMP_ADD269_ENO);
  IF _TMP_ADD269_ENO THEN
      Target3 := _TMP_ADD269_OUT;
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    VAR_GLOBAL
      START : BOOL;
      STOP : BOOL;
      SENDIF13 : BOOL;
      CONR4_1 : BOOL;
      CONR4_2 : BOOL;
      CON6_3 : BOOL;
      CON6_5 : BOOL;
      CON6_7 : BOOL;
      RollStop7 : BOOL;
    END_VAR
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task1(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task2(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task3(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : Part1;
    PROGRAM instance1 WITH task1 : Part2;
    PROGRAM instance2 WITH task2 : Part3;
    PROGRAM instance3 WITH task3 : Part4;
  END_RESOURCE
END_CONFIGURATION
