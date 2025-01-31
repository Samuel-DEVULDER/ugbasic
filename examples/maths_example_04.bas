REM @english
REM MATHEMATIC ROUTINES WITH ASSOCIATIVE PRIORITY (2)
REM
REM This example will show the application of associative priority. Since multiplication (''*'') and division
REM (''/'') has greater priority in respect of sum (''+''), and exponential (''^'') are always calculated first
REM the result of the two expression is different.
REM
REM @italian
REM ROUTINE DI MATEMATICA CON PRIORITA' ASSOCIATIVA (2)
REM
REM Questo esempio mostrerà l'applicazione della priorità associativa. Poiché la moltiplicazione (''*'') e la 
REM divisione (''/'') hanno maggiore priorità rispetto alla somma (''+''), e l'esponenziale (''^'') è sempre 
REM calcolato per primo, il risultato della due espressioni sarà diverso.

    PRINT "(10+2*5) = ";(10+2*5)
    PRINT "(10+2*5-8/4 ) = ";(10+2*5-8/4)
    PRINT "(10+2*5-8/4+5^2 ) = ";(10+2*5-8/4+5^2)
    PRINT "((10+2)*(5-8/4+5)^2) = ";((10+2)*(5-8/4+5)^2)

    HALT