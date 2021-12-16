; /*****************************************************************************
;  * ugBASIC - an isomorphic BASIC language compiler for retrocomputers        *
;  *****************************************************************************
;  * Copyright 2021 Marco Spedaletti (asimov@mclink.it)
;  *
;  * Licensed under the Apache License, Version 2.0 (the "License");
;  * you may not use this file except in compliance with the License.
;  * You may obtain a copy of the License at
;  *
;  * http://www.apache.org/licenses/LICENSE-2.0
;  *
;  * Unless required by applicable law or agreed to in writing, software
;  * distributed under the License is distributed on an "AS IS" BASIS,
;  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
;  * See the License for the specific language governing permissions and
;  * limitations under the License.
;  *----------------------------------------------------------------------------
;  * Concesso in licenza secondo i termini della Licenza Apache, versione 2.0
;  * (la "Licenza"); è proibito usare questo file se non in conformità alla
;  * Licenza. Una copia della Licenza è disponibile all'indirizzo:
;  *
;  * http://www.apache.org/licenses/LICENSE-2.0
;  *
;  * Se non richiesto dalla legislazione vigente o concordato per iscritto,
;  * il software distribuito nei termini della Licenza è distribuito
;  * "COSì COM'è", SENZA GARANZIE O CONDIZIONI DI ALCUN TIPO, esplicite o
;  * implicite. Consultare la Licenza per il testo specifico che regola le
;  * autorizzazioni e le limitazioni previste dalla medesima.
;  ****************************************************************************/
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
;*                                                                             *
;*                          VERTICAL SCROLL ON VIC-I                          *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

VSCROLLT:
    TXA
    PHA
    TYA
    PHA
    LDA DIRECTION
    CMP #$80
    BCC VSCROLLTDOWN

VSCROLLTUP:
    LDA TEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA TEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1
    CLC
    LDA TEXTADDRESS
    ADC CURRENTTILESWIDTH
    STA COPYOFTEXTADDRESS2
    LDA TEXTADDRESS+1
    ADC #0
    STA COPYOFTEXTADDRESS2+1

    LDY #0
VSCROLLTUPYSCR:
    LDA (COPYOFTEXTADDRESS2),Y
    STA (COPYOFTEXTADDRESS),Y
    INY
    BNE VSCROLLTUPYSCR
    INC COPYOFTEXTADDRESS+1
    INC COPYOFTEXTADDRESS2+1

VSCROLLTUPYSCR2:
    LDA (COPYOFTEXTADDRESS2),Y
    STA (COPYOFTEXTADDRESS),Y
    INY
    CPY #228
    BNE VSCROLLTUPYSCR2
VSCROLLTUPYSCRNXT:

    LDY #228
VSCROLLTUPREFILL:
    LDA EMPTYTILE
    STA (COPYOFTEXTADDRESS),Y
    INY
    CPY #250
    BNE VSCROLLTUPREFILL
VSCROLLTUEND:

    PLA
    TAY
    PLA
    TAX
    RTS

VSCROLLTDOWN:
    LDA TEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA TEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1
    CLC
    LDA TEXTADDRESS
    ADC CURRENTTILESWIDTH
    STA COPYOFTEXTADDRESS2
    LDA TEXTADDRESS+1
    ADC #0
    STA COPYOFTEXTADDRESS2+1
    
    INC COPYOFTEXTADDRESS+1
    INC COPYOFTEXTADDRESS2+1
    LDY #228
VSCROLLTDOWNYS3:
    LDA (COPYOFTEXTADDRESS),Y
    STA (COPYOFTEXTADDRESS2),Y
    DEY
    CPY #255
    BNE VSCROLLTDOWNYS3

    DEC COPYOFTEXTADDRESS+1
    DEC COPYOFTEXTADDRESS2+1
    LDY #255
VSCROLLTDOWNYS4:
    LDA (COPYOFTEXTADDRESS),Y
    STA (COPYOFTEXTADDRESS2),Y
    DEY
    CPY #255
    BNE VSCROLLTDOWNYS4

    LDA TEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA TEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1

    LDY #0
SCROLLFILLUP:
    LDA EMPTYTILE
    STA (COPYOFTEXTADDRESS),Y
    INY
    CPY CURRENTTILESWIDTH
    BNE SCROLLFILLUP

    PLA
    TAY
    PLA
    TAX
    RTS
