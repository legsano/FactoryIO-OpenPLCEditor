PROGRAM muterr
  VAR
    START AT %IX100.0 : BOOL;
    STOP AT %IX100.1 : BOOL;
    SEN1 AT %IX100.2 : BOOL;
    SEN2 AT %IX100.3 : BOOL;
    SEN3 AT %IX100.4 : BOOL;
    TFrontLimit AT %IX100.5 : BOOL;
    TFrontLimit90 AT %IX100.6 : BOOL;
    CON1 AT %QX100.0 : BOOL;
    CON2 AT %QX100.1 : BOOL;
    TurnRoll AT %QX100.2 : BOOL;
    TurnTable AT %QX100.3 : BOOL;
    SEN1VIR AT %QX0.0 : BOOL;
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
