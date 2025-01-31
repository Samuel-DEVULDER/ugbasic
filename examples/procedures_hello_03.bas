REM @english
REM USER-DEFINED PROCEDURES DEFINITION (3)
REM
REM This example will show how to define an user-defined procedure and the various
REM way you can call it. You can call it by using directly its name, or by using the
REM keywords ''PROC'' or ''CALL'. All the way are somewhat equivalent.
REM
REM @italian
REM USARE LE PROCEDURE DEFINENDOLE (3)
REM
REM Questo esempio mostra come definire una procedura utente, e i vari modi
REM con cui può essere richiamata. E' possibile richiamarla usando direttamente il suo nome,
REM o usando le parole chiave ''PROC'' oppure ''CALL. Tutti questi modi sono,
REM in un certo qual modo, equivalenti.

   PROCEDURE hello
      PRINT "HEY!"
   END PROC
   
   PROC hello
   
   hello
   
   CALL hello
   
   HALT