REM @english
REM STATIC IMAGES MULTIPLE IMAGES LOADING (1)
REM
REM This small example will show how to load images from a single image.
REM The basic syntax is to give a "frame size" of each frame inside the
REM original image. In this way, every frame will be taken to generate
REM an IMAGES datatype. Note that IMAGES can be used as IMAGE as well,
REM and it means to use the first frame.
REM
REM @italian
REM GESTIONE DELLE IMMAGINI CARICAMENTO MULTIPLO (1)
REM
REM Questo piccolo esempio mostrerà come caricare un set di immagini 
REM a partire da una immagine. La sintassi di base permette di dare una 
REM "dimensione del fotogramma" all'interno dell'immagine originale. 
REM In questo modo, l'insieme dei frame verrà preso per generare un tipo 
REM di dati IMAGES. Nota che questo tipo di dato può essere usato anche 
REM come IMMAGINE, il che significa usare il primo fotogramma.
REM

BITMAP ENABLE (16)
CLS

bat := IMAGES LOAD("examples/bat.png" ) FRAME SIZE (32,32)

frame = (BYTE) 0

DO
    PUT IMAGE bat FRAME frame AT 0,0
    WAIT 100 MS
    ADD frame,1,0 TO FRAMES(bat)
LOOP



