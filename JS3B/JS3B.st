PROGRAM JS3B
  VAR
    Start AT %IX100.0 : BOOL;
    LOCK AT %QX100.2 : BOOL;
    Stop AT %IX100.2 : BOOL;
    Sensor1 AT %IX100.3 : BOOL;
    Sensor2 AT %IX100.4 : BOOL;
    Con1 AT %QX100.0 : BOOL;
    Con2 AT %QX100.1 : BOOL;
  END_VAR

  Con1 := NOT(Sensor1) AND Stop AND (NOT(LOCK) AND Start OR Con1);
  Con2 := NOT(Sensor2) AND Stop AND (Con2 OR Sensor1);
  LOCK := Stop AND (Con1 OR LOCK);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : JS3B;
  END_RESOURCE
END_CONFIGURATION
