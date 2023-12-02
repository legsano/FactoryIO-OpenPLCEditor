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


PROGRAM PT5
  VAR_EXTERNAL
    Start : BOOL;
    Stop : BOOL;
  END_VAR
  VAR
    VS5 : BOOL;
    DS18 : BOOL;
    DS19 : BOOL;
    DS20 : BOOL;
    X0 : BOOL;
    Z0 : BOOL;
    X1 : BOOL;
    Z1 : BOOL;
    X2 : BOOL;
    Z2 : BOOL;
    LC1 : BOOL;
    LC2 : BOOL;
    LC3 : BOOL;
    LC4 : BOOL;
    Liift0 : BOOL;
    Leeft0 : BOOL;
    Riight0 : BOOL;
    Liift1 : BOOL;
    Leeft1 : BOOL;
    Riight1 : BOOL;
    Liift2 : BOOL;
    Leeft2 : BOOL;
    Riight2 : BOOL;
    Target0 : INT;
    Target1 : INT;
    Target2 : INT;
    D5_1 : BOOL;
    D5_2 : BOOL;
    D5_3 : BOOL;
    D5_4 : BOOL;
    D5_5 : BOOL;
    D5_6 : BOOL;
    VIRblckx0 : BOOL;
    VIRblckz0 : BOOL;
    Switch0 : BOOL;
    Reset0 : BOOL;
    Biru : BOOL;
    D5_7 : BOOL;
    D5_8 : BOOL;
    D5_9 : BOOL;
    D5_10 : BOOL;
    D5_11 : BOOL;
    VIRblckx1 : BOOL;
    VIRblckz1 : BOOL;
    Switch1 : BOOL;
    Reset1 : BOOL;
    D5_12 : BOOL;
    D5_13 : BOOL;
    D5_14 : BOOL;
    D5_15 : BOOL;
    D5_16 : BOOL;
    VIRblckx2 : BOOL;
    VIRblckz2 : BOOL;
    Switch2 : BOOL;
    Reset2 : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    CTU0 : CTU;
    TON5 : TON;
    TON8 : TON;
    TON2 : TON;
    TON7 : TON;
    TON4 : TON;
    TON6 : TON;
    TON3 : TON;
    CTU1 : CTU;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    CTU2 : CTU;
    TON16 : TON;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TON20 : TON;
    CTU3 : CTU;
    TON14 : TON;
    TON15 : TON;
    CTU4 : CTU;
    TON21 : TON;
    TON22 : TON;
    TON23 : TON;
    TON24 : TON;
    TON25 : TON;
    CTU5 : CTU;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    F_TRIG1 : F_TRIG;
    F_TRIG2 : F_TRIG;
    F_TRIG3 : F_TRIG;
    F_TRIG4 : F_TRIG;
    F_TRIG5 : F_TRIG;
    R_TRIG4 : R_TRIG;
    F_TRIG6 : F_TRIG;
    F_TRIG7 : F_TRIG;
    R_TRIG5 : R_TRIG;
    F_TRIG8 : F_TRIG;
    F_TRIG9 : F_TRIG;
    R_TRIG6 : R_TRIG;
    _TMP_AND69_OUT : BOOL;
    _TMP_AND190_OUT : BOOL;
    _TMP_AND265_OUT : BOOL;
    _TMP_ADD46_ENO : BOOL;
    _TMP_ADD46_OUT : INT;
    _TMP_ADD167_ENO : BOOL;
    _TMP_ADD167_OUT : INT;
    _TMP_ADD244_ENO : BOOL;
    _TMP_ADD244_OUT : INT;
  END_VAR

  IF Start THEN
    LC1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    LC2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    LC3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    LC4 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    LC1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LC2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LC3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LC4 := FALSE; (*reset*)
  END_IF;
  IF D5_1 THEN
    Riight0 := TRUE; (*set*)
  END_IF;
  TON0(IN := D5_1, PT := T#1500ms);
  IF TON0.Q THEN
    Liift0 := TRUE; (*set*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#1500ms);
  IF TON1.Q THEN
    Riight0 := FALSE; (*reset*)
  END_IF;
  D5_2 := TON1.Q OR TON1.Q;
  IF VS5 THEN
    Biru := TRUE; (*set*)
  END_IF;
  IF D5_7 THEN
    Riight1 := TRUE; (*set*)
  END_IF;
  TON12(IN := D5_7, PT := T#1500ms);
  IF TON12.Q THEN
    Liift1 := TRUE; (*set*)
  END_IF;
  TON13(IN := TON12.Q, PT := T#1500ms);
  IF TON13.Q THEN
    Riight1 := FALSE; (*reset*)
  END_IF;
  D5_8 := TON13.Q OR TON13.Q;
  IF D5_12 THEN
    Leeft2 := TRUE; (*set*)
  END_IF;
  TON14(IN := D5_12, PT := T#1500ms);
  IF TON14.Q THEN
    Liift2 := TRUE; (*set*)
  END_IF;
  TON15(IN := TON14.Q, PT := T#1500ms);
  IF TON15.Q THEN
    Leeft2 := FALSE; (*reset*)
  END_IF;
  D5_13 := TON15.Q OR TON15.Q;
  IF DS18 THEN
    LC1 := FALSE; (*reset*)
  END_IF;
  IF DS19 THEN
    LC2 := FALSE; (*reset*)
  END_IF;
  IF DS19 THEN
    LC3 := FALSE; (*reset*)
  END_IF;
  IF DS20 THEN
    LC4 := FALSE; (*reset*)
  END_IF;
  TON2(IN := D5_2, PT := T#1500ms);
  IF TON2.Q THEN
    D5_3 := TRUE; (*set*)
  END_IF;
  TON16(IN := D5_8, PT := T#1500ms);
  IF TON16.Q THEN
    D5_9 := TRUE; (*set*)
  END_IF;
  TON21(IN := D5_13, PT := T#1500ms);
  IF TON21.Q THEN
    D5_14 := TRUE; (*set*)
  END_IF;
  IF TON2.Q THEN
    Biru := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    D5_1 := FALSE; (*reset*)
  END_IF;
  R_TRIG1(CLK := TON2.Q);
  CTU0(CU := R_TRIG1.Q, R := D5_1 AND Reset0, PV := 10);
  IF CTU0.Q THEN
    Reset0 := TRUE; (*set*)
  END_IF;
  IF Biru AND DS18 THEN
    D5_1 := TRUE; (*set*)
  END_IF;
  IF TON16.Q THEN
    D5_7 := FALSE; (*reset*)
  END_IF;
  R_TRIG2(CLK := TON16.Q);
  CTU2(CU := R_TRIG2.Q, R := D5_7 AND Reset1, PV := 5);
  IF CTU2.Q THEN
    Reset1 := TRUE; (*set*)
  END_IF;
  IF TON21.Q THEN
    D5_12 := FALSE; (*reset*)
  END_IF;
  R_TRIG3(CLK := TON21.Q);
  CTU4(CU := R_TRIG3.Q, R := D5_12 AND Reset2, PV := 5);
  IF CTU4.Q THEN
    Reset2 := TRUE; (*set*)
  END_IF;
  Target0 := CTU0.CV;
  IF DS19 THEN
    D5_7 := TRUE; (*set*)
  END_IF;
  IF DS20 THEN
    D5_12 := TRUE; (*set*)
  END_IF;
  Target1 := CTU2.CV;
  Target2 := CTU4.CV;
  IF NOT(Biru) AND DS18 THEN
    D5_6 := TRUE; (*set*)
  END_IF;
  IF D5_1 AND Reset0 THEN
    Switch0 := TRUE; (*set*)
  END_IF;
  IF D5_7 AND Reset1 THEN
    Switch1 := TRUE; (*set*)
  END_IF;
  IF D5_12 AND Reset2 THEN
    Switch2 := TRUE; (*set*)
  END_IF;
  TON7(IN := D5_1, PT := T#4400ms);
  IF TON7.Q THEN
    D5_5 := FALSE; (*reset*)
  END_IF;
  TON17(IN := D5_7, PT := T#4400ms);
  IF TON17.Q THEN
    D5_11 := FALSE; (*reset*)
  END_IF;
  TON22(IN := D5_12, PT := T#4400ms);
  IF TON22.Q THEN
    D5_16 := FALSE; (*reset*)
  END_IF;
  IF Switch0 AND D5_5 AND D5_3 THEN
    Leeft0 := TRUE; (*set*)
  END_IF;
  TON4(IN := NOT(Switch0) AND D5_5 AND D5_3 OR Switch0 AND D5_5 AND D5_3, PT := T#1500ms);
  IF TON4.Q THEN
    Liift0 := FALSE; (*reset*)
  END_IF;
  IF TON4.Q THEN
    D5_4 := TRUE; (*set*)
  END_IF;
  IF TON4.Q THEN
    Reset0 := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND D5_11 AND D5_9 THEN
    Leeft1 := TRUE; (*set*)
  END_IF;
  TON18(IN := NOT(Switch1) AND D5_11 AND D5_9 OR Switch1 AND D5_11 AND D5_9, PT := T#1500ms);
  IF TON18.Q THEN
    Liift1 := FALSE; (*reset*)
  END_IF;
  IF TON18.Q THEN
    D5_10 := TRUE; (*set*)
  END_IF;
  IF TON18.Q THEN
    Reset1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND D5_16 AND D5_14 THEN
    Riight2 := TRUE; (*set*)
  END_IF;
  TON23(IN := NOT(Switch2) AND D5_16 AND D5_14 OR Switch2 AND D5_16 AND D5_14, PT := T#1500ms);
  IF TON23.Q THEN
    Liift2 := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    D5_15 := TRUE; (*set*)
  END_IF;
  IF TON23.Q THEN
    D5_12 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch0) AND D5_5 AND D5_3 THEN
    Riight0 := TRUE; (*set*)
  END_IF;
  F_TRIG1(CLK := X0);
  IF F_TRIG1.Q THEN
    VIRblckx0 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch1) AND D5_11 AND D5_9 THEN
    Riight1 := TRUE; (*set*)
  END_IF;
  F_TRIG2(CLK := X1);
  IF F_TRIG2.Q THEN
    VIRblckx1 := TRUE; (*set*)
  END_IF;
  IF Switch2 AND D5_16 AND D5_14 THEN
    Leeft2 := TRUE; (*set*)
  END_IF;
  F_TRIG3(CLK := X2);
  IF F_TRIG3.Q THEN
    VIRblckx2 := TRUE; (*set*)
  END_IF;
  F_TRIG4(CLK := Z0);
  F_TRIG5(CLK := Z0);
  R_TRIG4(CLK := F_TRIG5.Q);
  CTU1(CU := R_TRIG4.Q, R := DS18, PV := 2);
  IF F_TRIG4.Q AND CTU1.Q THEN
    VIRblckz0 := TRUE; (*set*)
  END_IF;
  F_TRIG6(CLK := Z1);
  F_TRIG7(CLK := Z1);
  R_TRIG5(CLK := F_TRIG7.Q);
  CTU3(CU := R_TRIG5.Q, R := DS19, PV := 2);
  IF F_TRIG6.Q AND CTU3.Q THEN
    VIRblckz1 := TRUE; (*set*)
  END_IF;
  F_TRIG8(CLK := Z2);
  F_TRIG9(CLK := Z2);
  R_TRIG6(CLK := F_TRIG9.Q);
  CTU5(CU := R_TRIG6.Q, R := DS20, PV := 2);
  IF F_TRIG8.Q AND CTU5.Q THEN
    VIRblckz2 := TRUE; (*set*)
  END_IF;
  TON3(IN := D5_4, PT := T#1000ms);
  IF TON3.Q THEN
    LC1 := TRUE; (*set*)
  END_IF;
  IF Switch0 AND TON3.Q THEN
    Leeft0 := FALSE; (*reset*)
  END_IF;
  IF Switch0 AND TON3.Q THEN
    D5_3 := FALSE; (*reset*)
  END_IF;
  IF Switch0 AND TON3.Q THEN
    D5_4 := FALSE; (*reset*)
  END_IF;
  TON20(IN := D5_10, PT := T#1000ms);
  IF TON20.Q THEN
    LC2 := TRUE; (*set*)
  END_IF;
  IF TON20.Q THEN
    LC3 := TRUE; (*set*)
  END_IF;
  IF Switch1 AND TON20.Q THEN
    Leeft1 := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND TON20.Q THEN
    D5_9 := FALSE; (*reset*)
  END_IF;
  IF Switch1 AND TON20.Q THEN
    D5_10 := FALSE; (*reset*)
  END_IF;
  TON25(IN := D5_15, PT := T#1000ms);
  IF TON25.Q THEN
    LC4 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch2) AND TON25.Q THEN
    Riight2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND TON25.Q THEN
    D5_14 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch2) AND TON25.Q THEN
    D5_15 := FALSE; (*reset*)
  END_IF;
  _TMP_AND69_OUT := AND(VIRblckz0, VIRblckx0);
  IF _TMP_AND69_OUT THEN
    D5_5 := TRUE; (*set*)
  END_IF;
  _TMP_AND190_OUT := AND(VIRblckz1, VIRblckx1);
  IF _TMP_AND190_OUT THEN
    D5_11 := TRUE; (*set*)
  END_IF;
  _TMP_AND265_OUT := AND(VIRblckz2, VIRblckx2);
  IF _TMP_AND265_OUT THEN
    D5_16 := TRUE; (*set*)
  END_IF;
  IF NOT(Switch0) AND TON3.Q THEN
    Riight0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch0) AND TON3.Q THEN
    D5_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch0) AND TON3.Q THEN
    D5_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND TON20.Q THEN
    Riight1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND TON20.Q THEN
    D5_9 := FALSE; (*reset*)
  END_IF;
  IF NOT(Switch1) AND TON20.Q THEN
    D5_10 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND TON25.Q THEN
    Leeft2 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND TON25.Q THEN
    D5_14 := FALSE; (*reset*)
  END_IF;
  IF Switch2 AND TON25.Q THEN
    D5_15 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckx0 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND69_OUT THEN
    VIRblckz0 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND190_OUT THEN
    VIRblckx1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND190_OUT THEN
    VIRblckz1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND265_OUT THEN
    VIRblckx2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_AND265_OUT THEN
    VIRblckz2 := FALSE; (*reset*)
  END_IF;
  TON6(IN := D5_5, PT := T#4500ms);
  _TMP_ADD46_OUT := ADD(EN := TON6.Q, IN1 := Target0, IN2 := 55, ENO => _TMP_ADD46_ENO);
  IF _TMP_ADD46_ENO THEN
      Target0 := _TMP_ADD46_OUT;
  END_IF;
  TON19(IN := D5_11, PT := T#4500ms);
  _TMP_ADD167_OUT := ADD(EN := TON19.Q, IN1 := Target1, IN2 := 55, ENO => _TMP_ADD167_ENO);
  IF _TMP_ADD167_ENO THEN
      Target1 := _TMP_ADD167_OUT;
  END_IF;
  TON24(IN := D5_16, PT := T#4500ms);
  _TMP_ADD244_OUT := ADD(EN := TON24.Q, IN1 := Target2, IN2 := 55, ENO => _TMP_ADD244_ENO);
  IF _TMP_ADD244_ENO THEN
      Target2 := _TMP_ADD244_OUT;
  END_IF;
  IF D5_6 THEN
    Riight0 := TRUE; (*set*)
  END_IF;
  TON5(IN := D5_6, PT := T#1500ms);
  IF TON5.Q THEN
    Liift0 := TRUE; (*set*)
  END_IF;
  TON8(IN := TON5.Q, PT := T#1500ms);
  IF TON8.Q THEN
    Riight0 := FALSE; (*reset*)
  END_IF;
  TON9(IN := TON8.Q, PT := T#500ms);
  IF TON9.Q THEN
    Leeft0 := TRUE; (*set*)
  END_IF;
  TON10(IN := TON9.Q, PT := T#1500ms);
  IF TON10.Q THEN
    Liift0 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    LC1 := TRUE; (*set*)
  END_IF;
  TON11(IN := TON10.Q, PT := T#1500ms);
  IF TON11.Q THEN
    Leeft0 := FALSE; (*reset*)
  END_IF;
  IF TON11.Q THEN
    D5_6 := FALSE; (*reset*)
  END_IF;
END_PROGRAM

PROGRAM PT4
  VAR_EXTERNAL
    Start : BOOL;
    Stop : BOOL;
  END_VAR
  VAR
    DS16 : BOOL;
    DS17 : BOOL;
    CS6 : BOOL;
    CS7 : BOOL;
    CS8 : BOOL;
    CS9 : BOOL;
    CS10 : BOOL;
    CS11 : BOOL;
    CS12 : BOOL;
    CS13 : BOOL;
    CS14 : BOOL;
    TTFrontL0 : BOOL;
    TTFrontL1 : BOOL;
    TT90L0 : BOOL;
    TT90L1 : BOOL;
    BC4m_7 : BOOL;
    BC4m_8 : BOOL;
    RC6m_10 : BOOL;
    CRCCCW4 : BOOL;
    LCLP8 : BOOL;
    CW5 : BOOL;
    Grb5 : BOOL;
    RC6m_4 : BOOL;
    RC6m_5 : BOOL;
    RC6m_6 : BOOL;
    RC6m_7 : BOOL;
    RC6m_11 : BOOL;
    RC2m_0 : BOOL;
    RC2m_1 : BOOL;
    RC2m_5 : BOOL;
    RC4m_2 : BOOL;
    RC4m_3 : BOOL;
    RC4m_4 : BOOL;
    RC4m_5 : BOOL;
    CRCCCW0 : BOOL;
    CRCCCW1 : BOOL;
    CRCCCW2 : BOOL;
    CRCCCW3 : BOOL;
    TTrollP0 : BOOL;
    TTrollP1 : BOOL;
    TTTurn0 : BOOL;
    TTTurn1 : BOOL;
    RollStop1 : BOOL;
    RollStop2 : BOOL;
    RollStop3 : BOOL;
    TTrollN0 : BOOL;
    TTrollN1 : BOOL;
    RollStop4 : BOOL;
    RollStop5 : BOOL;
    RollStop6 : BOOL;
    X5 : INT;
    Z5 : INT;
    D4_1 : BOOL;
    D4_2 : BOOL;
    D4_3 : BOOL;
    D4_4 : BOOL;
    D4_5 : BOOL;
    D4_6 : BOOL;
    D4_7 : BOOL;
  END_VAR
  VAR
    TON1 : TON;
    TON2 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON9 : TON;
    TON0 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    CTU0 : CTU;
    TON32 : TON;
    CTU1 : CTU;
    TOF0 : TOF;
    TOF1 : TOF;
    TOF2 : TOF;
    TOF3 : TOF;
    _TMP_MOVE66_ENO : BOOL;
    _TMP_MOVE66_OUT : INT;
    _TMP_MOVE25_ENO : BOOL;
    _TMP_MOVE25_OUT : INT;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    _TMP_MOVE44_ENO : BOOL;
    _TMP_MOVE44_OUT : INT;
    _TMP_MOVE51_ENO : BOOL;
    _TMP_MOVE51_OUT : INT;
    _TMP_MOVE73_ENO : BOOL;
    _TMP_MOVE73_OUT : INT;
    _TMP_MOVE76_ENO : BOOL;
    _TMP_MOVE76_OUT : INT;
    _TMP_MOVE83_ENO : BOOL;
    _TMP_MOVE83_OUT : INT;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
    _TMP_MOVE89_ENO : BOOL;
    _TMP_MOVE89_OUT : INT;
    _TMP_MOVE94_ENO : BOOL;
    _TMP_MOVE94_OUT : INT;
    _TMP_MOVE100_ENO : BOOL;
    _TMP_MOVE100_OUT : INT;
    R_TRIG5 : R_TRIG;
    R_TRIG6 : R_TRIG;
    R_TRIG7 : R_TRIG;
    R_TRIG8 : R_TRIG;
    R_TRIG9 : R_TRIG;
    R_TRIG10 : R_TRIG;
    R_TRIG11 : R_TRIG;
  END_VAR

  IF Start THEN
    BC4m_7 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC4m_8 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CRCCCW0 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CRCCCW1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CRCCCW2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC2m_0 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC2m_1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC2m_5 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CRCCCW3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC4m_2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC4m_3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC4m_4 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC4m_5 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_10 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_11 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_4 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_5 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_6 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_7 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CRCCCW4 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_7 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_8 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CRCCCW0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CRCCCW1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CRCCCW2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC2m_0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC2m_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC2m_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CRCCCW3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC4m_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC4m_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC4m_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC4m_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_10 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_11 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_6 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_7 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CRCCCW4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP8 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP8 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE66_OUT := MOVE(EN := D4_1, IN := 10, ENO => _TMP_MOVE66_ENO);
  TON4(IN := _TMP_MOVE66_ENO, PT := T#1s);
  IF TON4.Q THEN
    Grb5 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE25_OUT := MOVE(EN := TON4.Q, IN := 0, ENO => _TMP_MOVE25_ENO);
  TON15(IN := _TMP_MOVE25_ENO, PT := T#1s);
  IF TON15.Q THEN
    D4_3 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE25_ENO THEN
      Z5 := _TMP_MOVE25_OUT;
  END_IF;
  IF Start THEN
    D4_5 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE66_ENO THEN
      Z5 := _TMP_MOVE66_OUT;
  END_IF;
  R_TRIG1(CLK := CS6);
  IF R_TRIG1.Q THEN
    RC6m_10 := FALSE; (*reset*)
  END_IF;
  R_TRIG2(CLK := CS6);
  IF R_TRIG2.Q THEN
    D4_1 := TRUE; (*set*)
  END_IF;
  D4_6 := D4_3;
  IF D4_3 THEN
    D4_1 := FALSE; (*reset*)
  END_IF;
  TON8(IN := D4_3, PT := T#1800ms);
  _TMP_MOVE44_OUT := MOVE(EN := TON8.Q, IN := 1000, ENO => _TMP_MOVE44_ENO);
  TON9(IN := _TMP_MOVE44_ENO, PT := T#1000ms);
  IF TON9.Q THEN
    Grb5 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE51_OUT := MOVE(EN := TON9.Q, IN := 0, ENO => _TMP_MOVE51_ENO);
  IF _TMP_MOVE51_ENO THEN
    D4_3 := FALSE; (*reset*)
  END_IF;
  IF D4_5 THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON0(IN := D4_5, PT := T#500ms);
  IF TON0.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#500ms);
  IF TON1.Q THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON2(IN := TON1.Q, PT := T#500ms);
  IF TON2.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    D4_5 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE44_ENO THEN
      Z5 := _TMP_MOVE44_OUT;
  END_IF;
  IF _TMP_MOVE51_ENO THEN
      Z5 := _TMP_MOVE51_OUT;
  END_IF;
  IF D4_6 THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON7(IN := D4_6, PT := T#500ms);
  IF TON7.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  TON5(IN := TON7.Q, PT := T#500ms);
  IF TON5.Q THEN
    CW5 := TRUE; (*set*)
  END_IF;
  TON6(IN := TON5.Q, PT := T#500ms);
  IF TON6.Q THEN
    CW5 := FALSE; (*reset*)
  END_IF;
  TON32(IN := D4_2, PT := T#500ms);
  IF TON32.Q THEN
    LCLP8 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE73_OUT := MOVE(EN := TON32.Q, IN := 1000, ENO => _TMP_MOVE73_ENO);
  TON10(IN := _TMP_MOVE73_ENO, PT := T#1s);
  _TMP_MOVE76_OUT := MOVE(EN := TON10.Q, IN := 1000, ENO => _TMP_MOVE76_ENO);
  TON11(IN := _TMP_MOVE76_ENO, PT := T#1s);
  IF TON11.Q THEN
    Grb5 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE83_OUT := MOVE(EN := TON11.Q, IN := 0, ENO => _TMP_MOVE83_ENO);
  IF _TMP_MOVE83_ENO THEN
    LCLP8 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE83_ENO THEN
    D4_4 := TRUE; (*set*)
  END_IF;
  R_TRIG3(CLK := DS16);
  IF R_TRIG3.Q THEN
    D4_2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE76_ENO THEN
      Z5 := _TMP_MOVE76_OUT;
  END_IF;
  IF _TMP_MOVE83_ENO THEN
      Z5 := _TMP_MOVE83_OUT;
  END_IF;
  R_TRIG4(CLK := DS17);
  IF R_TRIG4.Q THEN
    BC4m_8 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE73_ENO THEN
      X5 := _TMP_MOVE73_OUT;
  END_IF;
  IF D4_4 THEN
    D4_2 := FALSE; (*reset*)
  END_IF;
  TON12(IN := D4_4, PT := T#1s);
  _TMP_MOVE89_OUT := MOVE(EN := TON12.Q, IN := 150, ENO => _TMP_MOVE89_ENO);
  TON13(IN := _TMP_MOVE89_ENO, PT := T#1s);
  _TMP_MOVE94_OUT := MOVE(EN := TON13.Q, IN := 750, ENO => _TMP_MOVE94_ENO);
  TON14(IN := _TMP_MOVE94_ENO, PT := T#1s);
  IF TON14.Q THEN
    Grb5 := FALSE; (*reset*)
  END_IF;
  TON16(IN := TON14.Q, PT := T#500ms);
  _TMP_MOVE100_OUT := MOVE(EN := TON16.Q, IN := 0, ENO => _TMP_MOVE100_ENO);
  IF _TMP_MOVE100_ENO THEN
    D4_4 := FALSE; (*reset*)
  END_IF;
  D4_7 := _TMP_MOVE100_ENO;
  IF _TMP_MOVE89_ENO THEN
      X5 := _TMP_MOVE89_OUT;
  END_IF;
  IF _TMP_MOVE94_ENO THEN
      Z5 := _TMP_MOVE94_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      Z5 := _TMP_MOVE100_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      X5 := _TMP_MOVE100_OUT;
  END_IF;
  R_TRIG5(CLK := D4_7);
  CTU0(CU := R_TRIG5.Q, R := DS17, PV := 3);
  IF CTU0.Q THEN
    D4_5 := TRUE; (*set*)
  END_IF;
  IF CTU0.Q THEN
    BC4m_8 := TRUE; (*set*)
  END_IF;
  IF CTU0.Q THEN
    RC6m_10 := TRUE; (*set*)
  END_IF;
  IF CS7 THEN
    TTrollP0 := TRUE; (*set*)
  END_IF;
  IF CS8 THEN
    RollStop4 := TRUE; (*set*)
  END_IF;
  IF CS8 THEN
    TTrollP1 := TRUE; (*set*)
  END_IF;
  IF CS9 THEN
    RollStop5 := TRUE; (*set*)
  END_IF;
  IF CS9 THEN
    TTTurn1 := TRUE; (*set*)
  END_IF;
  IF CS9 THEN
    TTrollN1 := TRUE; (*set*)
  END_IF;
  IF TTFrontL0 THEN
    TTTurn0 := TRUE; (*set*)
  END_IF;
  IF TTFrontL0 THEN
    TTrollP0 := FALSE; (*reset*)
  END_IF;
  IF TTFrontL1 THEN
    TTTurn1 := TRUE; (*set*)
  END_IF;
  IF TTFrontL1 THEN
    TTrollP1 := FALSE; (*reset*)
  END_IF;
  IF TT90L0 THEN
    TTrollN0 := TRUE; (*set*)
  END_IF;
  IF TT90L1 THEN
    TTrollN1 := TRUE; (*set*)
  END_IF;
  IF CS9 THEN
    TTTurn0 := FALSE; (*reset*)
  END_IF;
  IF CS9 THEN
    TTrollN0 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    RollStop4 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    TTTurn1 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    TTrollN1 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    RollStop5 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    TTTurn1 := FALSE; (*reset*)
  END_IF;
  IF CS10 THEN
    TTrollN1 := FALSE; (*reset*)
  END_IF;
  R_TRIG6(CLK := CS11);
  R_TRIG7(CLK := R_TRIG6.Q);
  R_TRIG8(CLK := RollStop1);
  CTU1(CU := R_TRIG7.Q, R := R_TRIG8.Q, PV := 2);
  TOF0(IN := CTU1.Q, PT := T#4s);
  RollStop1 := TOF0.Q;
  R_TRIG9(CLK := CS14);
  TOF3(IN := R_TRIG9.Q, PT := T#2s);
  RollStop6 := TOF3.Q;
  R_TRIG10(CLK := CS12);
  TOF1(IN := R_TRIG10.Q, PT := T#2s);
  RollStop2 := TOF1.Q;
  R_TRIG11(CLK := CS13);
  TOF2(IN := R_TRIG11.Q, PT := T#2s);
  RollStop3 := TOF2.Q;
END_PROGRAM

PROGRAM PT3
  VAR_EXTERNAL
    Start : BOOL;
    Stop : BOOL;
  END_VAR
  VAR
    DS8 : BOOL;
    DS9 : BOOL;
    DS10 : BOOL;
    DS11 : BOOL;
    CS4 : BOOL;
    CS5 : BOOL;
    CBC1CW : BOOL;
    BC2m_20 : BOOL;
    BC4m_4 : BOOL;
    BC4m_3 : BOOL;
    CBC2CW : BOOL;
    BC2m_18 : BOOL;
    BC4m_1 : BOOL;
    BC4m_2 : BOOL;
    RC6m_2 : BOOL;
    RC6m_3 : BOOL;
    RC6m_0 : BOOL;
    RC6m_1 : BOOL;
    LCLP4 : BOOL;
    LCLP5 : BOOL;
    CW2 : BOOL;
    CW3 : BOOL;
    Grb2 : BOOL;
    Grb3 : BOOL;
    X2 : INT;
    Z2 : INT;
    X3 : INT;
    Z3 : INT;
    D3_1 : BOOL;
    D3_2 : BOOL;
    D3_3 : BOOL;
    D3_4 : BOOL;
    D3_5 : BOOL;
    D3_6 : BOOL;
    D3_7 : BOOL;
    D3_8 : BOOL;
    D3_9 : BOOL;
    D3_10 : BOOL;
    D3_11 : BOOL;
    D3_12 : BOOL;
    D3_13 : BOOL;
    D3_14 : BOOL;
  END_VAR
  VAR
    TON1 : TON;
    TON2 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON9 : TON;
    TON0 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    CTU0 : CTU;
    TON32 : TON;
    TON3 : TON;
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
    CTU1 : CTU;
    TON33 : TON;
    _TMP_MOVE66_ENO : BOOL;
    _TMP_MOVE66_OUT : INT;
    _TMP_MOVE25_ENO : BOOL;
    _TMP_MOVE25_OUT : INT;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    _TMP_MOVE44_ENO : BOOL;
    _TMP_MOVE44_OUT : INT;
    _TMP_MOVE51_ENO : BOOL;
    _TMP_MOVE51_OUT : INT;
    _TMP_MOVE73_ENO : BOOL;
    _TMP_MOVE73_OUT : INT;
    _TMP_MOVE76_ENO : BOOL;
    _TMP_MOVE76_OUT : INT;
    _TMP_MOVE83_ENO : BOOL;
    _TMP_MOVE83_OUT : INT;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
    _TMP_MOVE89_ENO : BOOL;
    _TMP_MOVE89_OUT : INT;
    _TMP_MOVE94_ENO : BOOL;
    _TMP_MOVE94_OUT : INT;
    _TMP_MOVE100_ENO : BOOL;
    _TMP_MOVE100_OUT : INT;
    R_TRIG5 : R_TRIG;
    _TMP_MOVE204_ENO : BOOL;
    _TMP_MOVE204_OUT : INT;
    _TMP_MOVE165_ENO : BOOL;
    _TMP_MOVE165_OUT : INT;
    R_TRIG6 : R_TRIG;
    R_TRIG7 : R_TRIG;
    _TMP_MOVE184_ENO : BOOL;
    _TMP_MOVE184_OUT : INT;
    _TMP_MOVE191_ENO : BOOL;
    _TMP_MOVE191_OUT : INT;
    _TMP_MOVE211_ENO : BOOL;
    _TMP_MOVE211_OUT : INT;
    _TMP_MOVE214_ENO : BOOL;
    _TMP_MOVE214_OUT : INT;
    _TMP_MOVE221_ENO : BOOL;
    _TMP_MOVE221_OUT : INT;
    R_TRIG8 : R_TRIG;
    R_TRIG9 : R_TRIG;
    _TMP_MOVE227_ENO : BOOL;
    _TMP_MOVE227_OUT : INT;
    _TMP_MOVE232_ENO : BOOL;
    _TMP_MOVE232_OUT : INT;
    _TMP_MOVE238_ENO : BOOL;
    _TMP_MOVE238_OUT : INT;
    R_TRIG10 : R_TRIG;
  END_VAR

  IF Start THEN
    BC2m_18 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC2m_20 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC4m_1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC4m_2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC4m_3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC4m_4 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CBC1CW := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CBC2CW := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_0 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    RC6m_1 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    BC2m_18 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC2m_20 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC4m_4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CBC1CW := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CBC2CW := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RC6m_1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP5 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE66_OUT := MOVE(EN := D3_1, IN := 1000, ENO => _TMP_MOVE66_ENO);
  TON4(IN := _TMP_MOVE66_ENO, PT := T#1s);
  IF TON4.Q THEN
    Grb2 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE25_OUT := MOVE(EN := TON4.Q, IN := 0, ENO => _TMP_MOVE25_ENO);
  TON15(IN := _TMP_MOVE25_ENO, PT := T#1s);
  IF TON15.Q THEN
    D3_3 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE66_ENO THEN
      Z2 := _TMP_MOVE66_OUT;
  END_IF;
  IF _TMP_MOVE25_ENO THEN
      Z2 := _TMP_MOVE25_OUT;
  END_IF;
  IF Start THEN
    D3_5 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    D3_12 := TRUE; (*set*)
  END_IF;
  R_TRIG1(CLK := CS4);
  IF R_TRIG1.Q THEN
    RC6m_0 := FALSE; (*reset*)
  END_IF;
  R_TRIG2(CLK := CS4);
  IF R_TRIG2.Q THEN
    D3_1 := TRUE; (*set*)
  END_IF;
  D3_6 := D3_3;
  IF D3_3 THEN
    D3_1 := FALSE; (*reset*)
  END_IF;
  TON8(IN := D3_3, PT := T#1800ms);
  _TMP_MOVE44_OUT := MOVE(EN := TON8.Q, IN := 1000, ENO => _TMP_MOVE44_ENO);
  TON9(IN := _TMP_MOVE44_ENO, PT := T#1000ms);
  IF TON9.Q THEN
    Grb2 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE51_OUT := MOVE(EN := TON9.Q, IN := 0, ENO => _TMP_MOVE51_ENO);
  IF _TMP_MOVE51_ENO THEN
    D3_3 := FALSE; (*reset*)
  END_IF;
  IF D3_5 THEN
    CW2 := TRUE; (*set*)
  END_IF;
  TON0(IN := D3_5, PT := T#500ms);
  IF TON0.Q THEN
    CW2 := FALSE; (*reset*)
  END_IF;
  TON1(IN := TON0.Q, PT := T#500ms);
  IF TON1.Q THEN
    CW2 := TRUE; (*set*)
  END_IF;
  TON2(IN := TON1.Q, PT := T#500ms);
  IF TON2.Q THEN
    CW2 := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    D3_5 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE44_ENO THEN
      Z2 := _TMP_MOVE44_OUT;
  END_IF;
  IF _TMP_MOVE51_ENO THEN
      Z2 := _TMP_MOVE51_OUT;
  END_IF;
  IF D3_6 THEN
    CW2 := TRUE; (*set*)
  END_IF;
  TON7(IN := D3_6, PT := T#500ms);
  IF TON7.Q THEN
    CW2 := FALSE; (*reset*)
  END_IF;
  TON5(IN := TON7.Q, PT := T#500ms);
  IF TON5.Q THEN
    CW2 := TRUE; (*set*)
  END_IF;
  TON6(IN := TON5.Q, PT := T#500ms);
  IF TON6.Q THEN
    CW2 := FALSE; (*reset*)
  END_IF;
  TON32(IN := D3_2, PT := T#500ms);
  IF TON32.Q THEN
    LCLP4 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE73_OUT := MOVE(EN := TON32.Q, IN := 1000, ENO => _TMP_MOVE73_ENO);
  TON10(IN := _TMP_MOVE73_ENO, PT := T#1s);
  _TMP_MOVE76_OUT := MOVE(EN := TON10.Q, IN := 1000, ENO => _TMP_MOVE76_ENO);
  TON11(IN := _TMP_MOVE76_ENO, PT := T#1s);
  IF TON11.Q THEN
    Grb2 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE83_OUT := MOVE(EN := TON11.Q, IN := 0, ENO => _TMP_MOVE83_ENO);
  IF _TMP_MOVE83_ENO THEN
    LCLP4 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE83_ENO THEN
    D3_4 := TRUE; (*set*)
  END_IF;
  R_TRIG3(CLK := DS8);
  IF R_TRIG3.Q THEN
    D3_2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE76_ENO THEN
      Z2 := _TMP_MOVE76_OUT;
  END_IF;
  IF _TMP_MOVE83_ENO THEN
      Z2 := _TMP_MOVE83_OUT;
  END_IF;
  R_TRIG4(CLK := DS9);
  IF R_TRIG4.Q THEN
    BC4m_1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE73_ENO THEN
      X2 := _TMP_MOVE73_OUT;
  END_IF;
  IF D3_4 THEN
    D3_2 := FALSE; (*reset*)
  END_IF;
  TON12(IN := D3_4, PT := T#1s);
  _TMP_MOVE89_OUT := MOVE(EN := TON12.Q, IN := 150, ENO => _TMP_MOVE89_ENO);
  TON13(IN := _TMP_MOVE89_ENO, PT := T#1s);
  _TMP_MOVE94_OUT := MOVE(EN := TON13.Q, IN := 750, ENO => _TMP_MOVE94_ENO);
  TON14(IN := _TMP_MOVE94_ENO, PT := T#1s);
  IF TON14.Q THEN
    Grb2 := FALSE; (*reset*)
  END_IF;
  TON16(IN := TON14.Q, PT := T#500ms);
  _TMP_MOVE100_OUT := MOVE(EN := TON16.Q, IN := 0, ENO => _TMP_MOVE100_ENO);
  IF _TMP_MOVE100_ENO THEN
    D3_4 := FALSE; (*reset*)
  END_IF;
  D3_7 := _TMP_MOVE100_ENO;
  IF _TMP_MOVE89_ENO THEN
      X2 := _TMP_MOVE89_OUT;
  END_IF;
  IF _TMP_MOVE94_ENO THEN
      Z2 := _TMP_MOVE94_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      Z2 := _TMP_MOVE100_OUT;
  END_IF;
  IF _TMP_MOVE100_ENO THEN
      X2 := _TMP_MOVE100_OUT;
  END_IF;
  R_TRIG5(CLK := D3_7);
  CTU0(CU := R_TRIG5.Q, R := DS9, PV := 3);
  IF CTU0.Q THEN
    D3_5 := TRUE; (*set*)
  END_IF;
  IF CTU0.Q THEN
    BC4m_1 := TRUE; (*set*)
  END_IF;
  IF CTU0.Q THEN
    RC6m_0 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE204_OUT := MOVE(EN := D3_8, IN := 1000, ENO => _TMP_MOVE204_ENO);
  TON18(IN := _TMP_MOVE204_ENO, PT := T#1s);
  IF TON18.Q THEN
    Grb3 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE165_OUT := MOVE(EN := TON18.Q, IN := 0, ENO => _TMP_MOVE165_ENO);
  TON30(IN := _TMP_MOVE165_ENO, PT := T#1s);
  IF TON30.Q THEN
    D3_10 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE204_ENO THEN
      Z3 := _TMP_MOVE204_OUT;
  END_IF;
  IF _TMP_MOVE165_ENO THEN
      Z3 := _TMP_MOVE165_OUT;
  END_IF;
  R_TRIG6(CLK := CS5);
  IF R_TRIG6.Q THEN
    RC6m_1 := FALSE; (*reset*)
  END_IF;
  R_TRIG7(CLK := CS5);
  IF R_TRIG7.Q THEN
    D3_8 := TRUE; (*set*)
  END_IF;
  D3_13 := D3_10;
  IF D3_10 THEN
    D3_8 := FALSE; (*reset*)
  END_IF;
  TON22(IN := D3_10, PT := T#1800ms);
  _TMP_MOVE184_OUT := MOVE(EN := TON22.Q, IN := 1000, ENO => _TMP_MOVE184_ENO);
  TON23(IN := _TMP_MOVE184_ENO, PT := T#1000ms);
  IF TON23.Q THEN
    Grb3 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE191_OUT := MOVE(EN := TON23.Q, IN := 0, ENO => _TMP_MOVE191_ENO);
  IF _TMP_MOVE191_ENO THEN
    D3_10 := FALSE; (*reset*)
  END_IF;
  IF D3_12 THEN
    CW3 := TRUE; (*set*)
  END_IF;
  TON24(IN := D3_12, PT := T#500ms);
  IF TON24.Q THEN
    CW3 := FALSE; (*reset*)
  END_IF;
  TON3(IN := TON24.Q, PT := T#500ms);
  IF TON3.Q THEN
    CW3 := TRUE; (*set*)
  END_IF;
  TON17(IN := TON3.Q, PT := T#500ms);
  IF TON17.Q THEN
    CW3 := FALSE; (*reset*)
  END_IF;
  IF TON17.Q THEN
    D3_12 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE184_ENO THEN
      Z3 := _TMP_MOVE184_OUT;
  END_IF;
  IF _TMP_MOVE191_ENO THEN
      Z3 := _TMP_MOVE191_OUT;
  END_IF;
  IF D3_13 THEN
    CW3 := TRUE; (*set*)
  END_IF;
  TON21(IN := D3_13, PT := T#500ms);
  IF TON21.Q THEN
    CW3 := FALSE; (*reset*)
  END_IF;
  TON19(IN := TON21.Q, PT := T#500ms);
  IF TON19.Q THEN
    CW3 := TRUE; (*set*)
  END_IF;
  TON20(IN := TON19.Q, PT := T#500ms);
  IF TON20.Q THEN
    CW3 := FALSE; (*reset*)
  END_IF;
  TON33(IN := D3_9, PT := T#500ms);
  IF TON33.Q THEN
    LCLP5 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE211_OUT := MOVE(EN := TON33.Q, IN := 1000, ENO => _TMP_MOVE211_ENO);
  TON25(IN := _TMP_MOVE211_ENO, PT := T#1s);
  _TMP_MOVE214_OUT := MOVE(EN := TON25.Q, IN := 1000, ENO => _TMP_MOVE214_ENO);
  TON26(IN := _TMP_MOVE214_ENO, PT := T#1s);
  IF TON26.Q THEN
    Grb3 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE221_OUT := MOVE(EN := TON26.Q, IN := 0, ENO => _TMP_MOVE221_ENO);
  IF _TMP_MOVE221_ENO THEN
    LCLP5 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE221_ENO THEN
    D3_11 := TRUE; (*set*)
  END_IF;
  R_TRIG8(CLK := DS10);
  IF R_TRIG8.Q THEN
    D3_9 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE214_ENO THEN
      Z3 := _TMP_MOVE214_OUT;
  END_IF;
  IF _TMP_MOVE221_ENO THEN
      Z3 := _TMP_MOVE221_OUT;
  END_IF;
  R_TRIG9(CLK := DS11);
  IF R_TRIG9.Q THEN
    BC4m_2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE211_ENO THEN
      X3 := _TMP_MOVE211_OUT;
  END_IF;
  IF D3_11 THEN
    D3_9 := FALSE; (*reset*)
  END_IF;
  TON27(IN := D3_11, PT := T#1s);
  _TMP_MOVE227_OUT := MOVE(EN := TON27.Q, IN := 150, ENO => _TMP_MOVE227_ENO);
  TON28(IN := _TMP_MOVE227_ENO, PT := T#1s);
  _TMP_MOVE232_OUT := MOVE(EN := TON28.Q, IN := 750, ENO => _TMP_MOVE232_ENO);
  TON29(IN := _TMP_MOVE232_ENO, PT := T#1s);
  IF TON29.Q THEN
    Grb3 := FALSE; (*reset*)
  END_IF;
  TON31(IN := TON29.Q, PT := T#500ms);
  _TMP_MOVE238_OUT := MOVE(EN := TON31.Q, IN := 0, ENO => _TMP_MOVE238_ENO);
  IF _TMP_MOVE238_ENO THEN
    D3_11 := FALSE; (*reset*)
  END_IF;
  D3_14 := _TMP_MOVE238_ENO;
  IF _TMP_MOVE227_ENO THEN
      X3 := _TMP_MOVE227_OUT;
  END_IF;
  IF _TMP_MOVE232_ENO THEN
      Z3 := _TMP_MOVE232_OUT;
  END_IF;
  IF _TMP_MOVE238_ENO THEN
      Z3 := _TMP_MOVE238_OUT;
  END_IF;
  IF _TMP_MOVE238_ENO THEN
      X3 := _TMP_MOVE238_OUT;
  END_IF;
  R_TRIG10(CLK := D3_14);
  CTU1(CU := R_TRIG10.Q, R := DS11, PV := 3);
  IF CTU1.Q THEN
    D3_12 := TRUE; (*set*)
  END_IF;
  IF CTU1.Q THEN
    BC4m_2 := TRUE; (*set*)
  END_IF;
  IF CTU1.Q THEN
    RC6m_1 := TRUE; (*set*)
  END_IF;
END_PROGRAM

PROGRAM PT2
  VAR_EXTERNAL
    Start : BOOL;
    Stop : BOOL;
  END_VAR
  VAR
    CS0 : BOOL;
    CS1 : BOOL;
    CS2 : BOOL;
    CS3 : BOOL;
    DS14 : BOOL;
    DS15 : BOOL;
    LCLP2 : BOOL;
    LCLP3 : BOOL;
    LCLP2Rise : BOOL;
    RCLP1 : BOOL;
    RCLP0 : BOOL;
    RCLP0Rise : BOOL;
    X0 : BOOL;
    Z0 : BOOL;
    Grb0 : BOOL;
    X1 : BOOL;
    Z1 : BOOL;
    Grb1 : BOOL;
    RCLP6 : BOOL;
    RCLP7 : BOOL;
    RCLP7Rise : BOOL;
    X4 : BOOL;
    Z4 : BOOL;
    Grb4 : BOOL;
    C5_4m : BOOL;
    C6_4m : BOOL;
    Blade1 : BOOL;
    Blade2 : BOOL;
    Blade3 : BOOL;
    Blade4 : BOOL;
    C22_2m : BOOL;
    C23_2m : BOOL;
    DCS0 : BOOL;
    DCS1 : BOOL;
    DCS2 : BOOL;
    DCS3 : BOOL;
    D1 : BOOL;
    D2 : BOOL;
    DDS1 : BOOL;
    DDS2 : BOOL;
    D3 : BOOL;
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
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TON20 : TON;
    TON21 : TON;
    TON22 : TON;
    TON23 : TON;
  END_VAR

  IF Start THEN
    X1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    X0 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C5_4m := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C22_2m := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C23_2m := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    X1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    X0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP2Rise := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    LCLP3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RCLP0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RCLP0Rise := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RCLP1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Z0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C5_4m := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C6_4m := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Grb4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RCLP6 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    RCLP7 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    X4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    Z4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C22_2m := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C23_2m := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    DCS2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    DCS0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    DDS1 := FALSE; (*reset*)
  END_IF;
  TON0(IN := DCS1, PT := T#2s);
  TON1(IN := TON0.Q, PT := T#1s);
  IF TON1.Q THEN
    Z1 := TRUE; (*set*)
  END_IF;
  IF TON0.Q THEN
    Blade2 := TRUE; (*set*)
  END_IF;
  IF TON0.Q THEN
    LCLP3 := TRUE; (*set*)
  END_IF;
  TON2(IN := TON1.Q, PT := T#1s);
  IF TON2.Q THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    Grb1 := TRUE; (*set*)
  END_IF;
  IF TON2.Q THEN
    LCLP3 := FALSE; (*reset*)
  END_IF;
  TON3(IN := TON2.Q, PT := T#1s);
  IF TON3.Q THEN
    X1 := FALSE; (*reset*)
  END_IF;
  TON4(IN := DCS0 AND TON3.Q, PT := T#2s);
  IF TON4.Q THEN
    LCLP2 := TRUE; (*set*)
  END_IF;
  IF TON4.Q THEN
    Blade1 := TRUE; (*set*)
  END_IF;
  TON5(IN := TON4.Q, PT := T#1s);
  IF TON5.Q THEN
    D1 := TRUE; (*set*)
  END_IF;
  IF CS0 THEN
    DCS0 := TRUE; (*set*)
  END_IF;
  IF CS1 THEN
    DCS1 := TRUE; (*set*)
  END_IF;
  IF CS2 THEN
    DCS2 := TRUE; (*set*)
  END_IF;
  IF D1 THEN
    DCS1 := FALSE; (*reset*)
  END_IF;
  IF D1 THEN
    Z1 := TRUE; (*set*)
  END_IF;
  TON6(IN := D1, PT := T#1s);
  IF TON6.Q THEN
    Z1 := FALSE; (*reset*)
  END_IF;
  IF TON6.Q THEN
    Grb1 := FALSE; (*reset*)
  END_IF;
  IF TON6.Q THEN
    LCLP2 := FALSE; (*reset*)
  END_IF;
  IF TON6.Q THEN
    LCLP2Rise := TRUE; (*set*)
  END_IF;
  TON7(IN := TON6.Q, PT := T#1s);
  IF TON7.Q THEN
    LCLP2Rise := FALSE; (*reset*)
  END_IF;
  IF TON7.Q THEN
    X1 := TRUE; (*set*)
  END_IF;
  IF TON7.Q THEN
    D1 := FALSE; (*reset*)
  END_IF;
  IF TON7.Q THEN
    DCS0 := FALSE; (*reset*)
  END_IF;
  IF TON7.Q THEN
    Blade1 := FALSE; (*reset*)
  END_IF;
  IF TON7.Q THEN
    Blade2 := FALSE; (*reset*)
  END_IF;
  IF CS3 THEN
    DCS3 := TRUE; (*set*)
  END_IF;
  TON8(IN := DCS2, PT := T#2s);
  IF TON8.Q THEN
    Blade3 := TRUE; (*set*)
  END_IF;
  IF TON8.Q THEN
    RCLP1 := TRUE; (*set*)
  END_IF;
  TON9(IN := TON8.Q, PT := T#1s);
  IF TON9.Q THEN
    Z0 := TRUE; (*set*)
  END_IF;
  TON10(IN := TON9.Q, PT := T#1s);
  IF TON10.Q THEN
    Z0 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    Grb0 := TRUE; (*set*)
  END_IF;
  IF TON10.Q THEN
    RCLP1 := FALSE; (*reset*)
  END_IF;
  TON11(IN := TON10.Q, PT := T#1s);
  IF TON11.Q THEN
    X0 := FALSE; (*reset*)
  END_IF;
  TON12(IN := DCS3 AND TON11.Q, PT := T#2s);
  IF TON12.Q THEN
    Blade4 := TRUE; (*set*)
  END_IF;
  IF TON12.Q THEN
    RCLP0 := TRUE; (*set*)
  END_IF;
  TON13(IN := TON12.Q, PT := T#1s);
  IF TON13.Q THEN
    D2 := TRUE; (*set*)
  END_IF;
  IF D2 THEN
    DCS2 := FALSE; (*reset*)
  END_IF;
  IF D2 THEN
    Z0 := TRUE; (*set*)
  END_IF;
  TON14(IN := D2, PT := T#1s);
  IF TON14.Q THEN
    Z0 := FALSE; (*reset*)
  END_IF;
  IF TON14.Q THEN
    Grb0 := FALSE; (*reset*)
  END_IF;
  IF TON14.Q THEN
    RCLP0 := FALSE; (*reset*)
  END_IF;
  IF TON14.Q THEN
    RCLP0Rise := TRUE; (*set*)
  END_IF;
  TON15(IN := TON14.Q, PT := T#1s);
  IF TON15.Q THEN
    RCLP0Rise := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    X0 := TRUE; (*set*)
  END_IF;
  IF TON15.Q THEN
    D2 := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    DCS3 := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    Blade3 := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    Blade4 := FALSE; (*reset*)
  END_IF;
  TON16(IN := DDS1, PT := T#1s);
  IF TON16.Q THEN
    RCLP6 := TRUE; (*set*)
  END_IF;
  TON17(IN := TON16.Q, PT := T#1s);
  IF TON17.Q THEN
    C6_4m := TRUE; (*set*)
  END_IF;
  IF TON17.Q THEN
    Z4 := TRUE; (*set*)
  END_IF;
  TON18(IN := TON17.Q, PT := T#1s);
  IF TON18.Q THEN
    Z4 := FALSE; (*reset*)
  END_IF;
  IF TON18.Q THEN
    Grb4 := TRUE; (*set*)
  END_IF;
  IF TON18.Q THEN
    RCLP6 := FALSE; (*reset*)
  END_IF;
  TON19(IN := TON18.Q, PT := T#1s);
  IF TON19.Q THEN
    X4 := TRUE; (*set*)
  END_IF;
  TON20(IN := DDS2 AND TON19.Q, PT := T#1s);
  IF TON20.Q THEN
    RCLP7 := TRUE; (*set*)
  END_IF;
  TON21(IN := TON20.Q, PT := T#1s);
  IF TON21.Q THEN
    D3 := TRUE; (*set*)
  END_IF;
  IF DS14 THEN
    DDS1 := TRUE; (*set*)
  END_IF;
  IF DS15 THEN
    DDS2 := TRUE; (*set*)
  END_IF;
  IF D3 THEN
    DDS1 := FALSE; (*reset*)
  END_IF;
  IF D3 THEN
    Z4 := TRUE; (*set*)
  END_IF;
  TON22(IN := D3, PT := T#1s);
  IF TON22.Q THEN
    Z4 := FALSE; (*reset*)
  END_IF;
  IF TON22.Q THEN
    Grb4 := FALSE; (*reset*)
  END_IF;
  IF TON22.Q THEN
    RCLP7 := FALSE; (*reset*)
  END_IF;
  IF TON22.Q THEN
    RCLP7Rise := TRUE; (*set*)
  END_IF;
  TON23(IN := TON22.Q, PT := T#1s);
  IF TON23.Q THEN
    RCLP7Rise := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    X4 := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    D3 := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    DDS2 := FALSE; (*reset*)
  END_IF;
  IF TON23.Q THEN
    C6_4m := FALSE; (*reset*)
  END_IF;
END_PROGRAM

PROGRAM PT1
  VAR_EXTERNAL
    Start : BOOL;
    Stop : BOOL;
  END_VAR
  VAR
    DS1 : BOOL;
    DS2 : BOOL;
    DS3 : BOOL;
    DS4 : BOOL;
    DS5 : BOOL;
    DS6 : BOOL;
    DS7 : BOOL;
    DS8 : BOOL;
    DS9 : BOOL;
    DS10 : BOOL;
    VS1 : BOOL;
    VS2 : BOOL;
    VS3 : BOOL;
    VS4 : BOOL;
    CA1 : BOOL;
    CB1 : BOOL;
    CC1 : BOOL;
    CD1 : BOOL;
    CE1 : BOOL;
    CA2 : BOOL;
    CB2 : BOOL;
    CC2 : BOOL;
    CD2 : BOOL;
    CE2 : BOOL;
    C1 : BOOL;
    C2 : BOOL;
    C3 : BOOL;
    C4 : BOOL;
    C5 : BOOL;
    MCStart0 : BOOL;
    MCStart1 : BOOL;
    MCStart2 : BOOL;
    MCStart3 : BOOL;
    MCStart4 : BOOL;
    MCStop0 : BOOL;
    MCStop1 : BOOL;
    MCStop2 : BOOL;
    MCStop3 : BOOL;
    MCStop4 : BOOL;
    C5kiri : BOOL;
    C6 : BOOL;
    C7 : BOOL;
    C8 : BOOL;
    C9 : BOOL;
    C10 : BOOL;
    C11 : BOOL;
    Push1 : BOOL;
    Push2 : BOOL;
    Push3 : BOOL;
    Push4 : BOOL;
    BC14 : BOOL;
    BC15 : BOOL;
    BC16 : BOOL;
    BC17 : BOOL;
    DDS1 : BOOL;
    DDS2 : BOOL;
    DDS3 : BOOL;
    DDS4 : BOOL;
    DDS5 : BOOL;
  END_VAR
  VAR
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TOF0 : TOF;
  END_VAR

  IF Start THEN
    C1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C4 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C5 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CA1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CB1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CC1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CD1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    CE1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C5kiri := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C6 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C7 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C8 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C9 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C10 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    C11 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC14 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC15 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC16 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    BC17 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    C1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C5 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CA1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CB1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CC1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CD1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    CE1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C5kiri := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C6 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C7 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C8 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C9 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C10 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    C11 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC14 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC15 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC16 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    BC17 := FALSE; (*reset*)
  END_IF;
  IF Start THEN
    MCStart0 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    MCStart1 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    MCStart2 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    MCStart3 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    MCStart4 := TRUE; (*set*)
  END_IF;
  IF Start THEN
    MCStop0 := FALSE; (*reset*)
  END_IF;
  IF Start THEN
    MCStop1 := FALSE; (*reset*)
  END_IF;
  IF Start THEN
    MCStop2 := FALSE; (*reset*)
  END_IF;
  IF Start THEN
    MCStop3 := FALSE; (*reset*)
  END_IF;
  IF Start THEN
    MCStop4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStart0 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStart1 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStart2 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStart3 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStart4 := FALSE; (*reset*)
  END_IF;
  IF NOT(Stop) THEN
    MCStop0 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    MCStop1 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    MCStop2 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    MCStop3 := TRUE; (*set*)
  END_IF;
  IF NOT(Stop) THEN
    MCStop4 := TRUE; (*set*)
  END_IF;
  TON0(IN := DDS1, PT := T#2s);
  IF TON0.Q THEN
    CA1 := FALSE; (*reset*)
  END_IF;
  IF TON0.Q THEN
    DDS1 := FALSE; (*reset*)
  END_IF;
  IF DS1 THEN
    DDS1 := TRUE; (*set*)
  END_IF;
  Push1 := VS1;
  TON1(IN := DDS2, PT := T#2s);
  IF TON1.Q THEN
    CB1 := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    DDS2 := FALSE; (*reset*)
  END_IF;
  IF DS2 THEN
    DDS2 := TRUE; (*set*)
  END_IF;
  Push2 := VS2;
  TON2(IN := DDS3, PT := T#2s);
  IF TON2.Q THEN
    CC1 := FALSE; (*reset*)
  END_IF;
  IF TON2.Q THEN
    DDS3 := FALSE; (*reset*)
  END_IF;
  IF DS3 THEN
    DDS3 := TRUE; (*set*)
  END_IF;
  Push3 := VS3;
  IF DS4 THEN
    DDS4 := TRUE; (*set*)
  END_IF;
  Push4 := VS4;
  TON3(IN := DDS4, PT := T#2s);
  IF TON3.Q THEN
    CD1 := FALSE; (*reset*)
  END_IF;
  IF TON3.Q THEN
    DDS4 := FALSE; (*reset*)
  END_IF;
  IF DS5 THEN
    DDS5 := TRUE; (*set*)
  END_IF;
  TON4(IN := DDS5, PT := T#2s);
  IF TON4.Q THEN
    CE1 := FALSE; (*reset*)
  END_IF;
  IF TON4.Q THEN
    DDS5 := FALSE; (*reset*)
  END_IF;
  TOF0(IN := DS10 AND DS9 AND DS8 AND DS7 AND DS6, PT := T#4s);
  CA2 := TOF0.Q;
  CB2 := TOF0.Q;
  CC2 := TOF0.Q;
  CD2 := TOF0.Q;
  CE2 := TOF0.Q;
  IF DS10 AND DS9 AND DS8 AND DS7 AND DS6 THEN
    CA1 := TRUE; (*set*)
  END_IF;
  IF DS10 AND DS9 AND DS8 AND DS7 AND DS6 THEN
    CB1 := TRUE; (*set*)
  END_IF;
  IF DS10 AND DS9 AND DS8 AND DS7 AND DS6 THEN
    CC1 := TRUE; (*set*)
  END_IF;
  IF DS10 AND DS9 AND DS8 AND DS7 AND DS6 THEN
    CD1 := TRUE; (*set*)
  END_IF;
  IF DS10 AND DS9 AND DS8 AND DS7 AND DS6 THEN
    CE1 := TRUE; (*set*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    VAR_GLOBAL
      Start : BOOL;
      Stop : BOOL;
    END_VAR
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task1(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task2(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task3(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task4(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : PT1;
    PROGRAM instance1 WITH task1 : PT2;
    PROGRAM instance2 WITH task2 : PT3;
    PROGRAM instance3 WITH task3 : PT4;
    PROGRAM instance4 WITH task4 : PT5;
  END_RESOURCE
END_CONFIGURATION
