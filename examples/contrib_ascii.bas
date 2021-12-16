REM @english
REM OTHER CONTRIBUTIONS PRINTABLE CHARACTERS
REM
REM This small example will show the (printable) CHARACTERS TABLE on the screen.
REM 
REM @italian
REM VARI ALTRI CONTRIBUTI CARATTERI STAMPABILI
REM
REM Questo piccolo esempio mostra la tabella dei codici ASCII (stampabili) sullo schermo.
REM

PRINT "print ascii:"
PRINT "0123456789\|!£$%&/()=?^ABCDEFGHIJKLMNOPQRSTUVXYWZabcdefghijklmnopqrstuvxywz"

PRINT

PRINT "print raw:"
PRINT #"0123456789\|!£$%&/()=?^ABCDEFGHIJKLMNOPQRSTUVXYWZabcdefghijklmnopqrstuvxywz"

a := LOAD("examples/printable.txt")

PRINT

PRINT "print buffer:"
PRINT BUFFER a

PRINT

PRINT "print raw:"
PRINT BUFFER RAW a
