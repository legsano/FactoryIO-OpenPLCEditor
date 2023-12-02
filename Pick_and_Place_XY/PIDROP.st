PROGRAM PICDRO
  VAR
    START AT %IX100.0 : BOOL;
    STOP AT %IX100.1 : BOOL;
    SEN1 AT %IX100.2 : BOOL;
    SEN2 AT %IX100.3 : BOOL;
    CON1 AT %QX100.0 : BOOL;
    CON2 AT %QX100.4 : BOOL;
    X AT %QX100.1 : BOOL;
    Z AT %QX100.2 : BOOL;
    VIR1 AT %QX0.0 : BOOL;
    VIR2 AT %QX0.1 : BOOL;
    VIR3 AT %QX0.2 : BOOL;
    VIR4 AT %QX0.3 : BOOL;
    GRAP AT %QX100.3 : BOOL;
    CLAMP2 AT %QX100.5 : BOOL;
    CLPRise2 AT %QX100.6 : BOOL;
    CLAMP1 AT %QX100.7 : BOOL;
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
