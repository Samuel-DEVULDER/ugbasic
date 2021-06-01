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
;*                      TEXT AT GIVEN POSITION ON VIC-II                       *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

TEXTAT:
    SEI
    
    LDA #23
    STA 53272
    
    LDX $d6
    BEQ TEXTATSKIP
    TEXTATLOOP1:
    CLC
    LDA #40
    ADC $22
    STA $22
    LDA #0
    ADC $23
    STA $23
    DEX
    BNE TEXTATLOOP1

    LDX $d6
TEXTATLOOPC1:
    CLC
    LDA #40
    ADC $29
    STA $29
    LDA #0
    ADC $2a
    STA $2a
    DEX
    BNE TEXTATLOOPC1

TEXTATSKIP:
    CLC
    LDA $d3
    ADC $22
    STA $22
    LDA #0
    ADC $23
    STA $23

    CLC
    LDA $d3
    ADC $29
    STA $29
    LDA #0
    ADC $2a
    STA $2a

    LDX $24
    LDY #$0
TEXTATLOOP2:

    LDA $25
    BEQ TEXTATNSKIPTAB
    JMP TEXTATSKIPTAB

TEXTATNSKIPTAB:
    LDA ($20),Y

    CMP #31
    BCS TEXTATXCC
    JMP TEXTATCC

TEXTATXCC:
    CMP #32
    BCS TEXTATXSP128
    JMP TEXTATSP128
TEXTATXSP128:
    CMP #64
    BCS TEXTATXSP0
    JMP TEXTATSP0
TEXTATXSP0:
    CMP #96
    BCS TEXTATXSM64
    JMP TEXTATSM64
TEXTATXSM64:
    CMP #160
    BCS TEXTATXSP64
    JMP TEXTATSP64
TEXTATXSP64:
    CMP #192
    BCS TEXTATX2SM64
    JMP TEXTATSM64
TEXTATX2SM64:
    CMP #224
    BCS TEXTATX2SM128
    JMP TEXTATSM128
TEXTATX2SM128:
    JMP TEXTATSP0

TEXTATSP64:
    CLC
    ADC #64
    JMP TEXTATSP0
TEXTATSP128:
    ADC #128
    JMP TEXTATSP0
TEXTATSM64:
    SBC #63
    JMP TEXTATSP0
TEXTATSM128:
    SBC #127
    JMP TEXTATSP0

TEXTATTAB:
    LDA $d3
TEXTATTAB2:
    CMP TABCOUNT
    BCC TEXTATTAB3
    DEC TABCOUNT
    JMP TEXTATTAB2
TEXTATTAB3:
    CLC
    ADC TABCOUNT
    STA $25
    JMP TEXTATNEXT

TEXTATCC:
    CMP #09
    BEQ TEXTATTAB
    CMP #01
    BEQ TEXTATPEN
    CMP #02
    BEQ TEXTATPAPER
    CMP #03
    BEQ TEXTATCMOVEPREPARE
    CMP #04
    BEQ TEXTATXAT
    JMP TEXTATNEXT

TEXTATXAT:
    JMP TEXTATAT

TEXTATPEN:
    INC $20
    DEX
    LDA $2c
    AND #$2
    BEQ TEXTATPENDISABLED
    LDA ($20), Y
    STA $2b
TEXTATPENDISABLED:
    INC $20
    DEY
    JMP TEXTATNEXT

TEXTATPAPER:
    INC $20
    DEX
    LDA $2c
    AND #$1
    BEQ TEXTATPAPERDISABLED
    LDA ($20), Y
    STA $d021
    STA $d020
TEXTATPAPERDISABLED:
    INC $20
    DEY
    JMP TEXTATNEXT

TEXTATCMOVEPREPARE:
    INC $20
    DEX
    LDA ($20), Y
    STA $33
    INC $20
    DEX
    LDA ($20), Y
    STA $34

TEXTATCMOVE:
    CLC
    LDA $33
    ADC $d3
    CMP #$80
    BCS TEXTATCMOVESKIPX
    CMP #40
    BCS TEXTATCMOVESKIPX
    STA $d3
    LDA $33

    CMP #$80
    BCC TEXTATCMOVEADDPX

TEXTATCMOVESUBPX:
    EOR #$FF
    CLC
    ADC #$1
    STA $33
    SEC
    LDA $22
    SBC $33
    STA $22
    LDA $23
    SBC #0
    STA $23

    SEC
    LDA $29
    SBC $33
    STA $29
    LDA $30
    SBC #0
    STA $30

    JMP TEXTATCMOVESKIPX

TEXTATCMOVEADDPX:

    CLC
    ADC $22
    STA $22
    LDA #0
    ADC $23
    STA $23
    JMP TEXTATCMOVESKIPX

TEXTATCMOVESKIPX:

    CLC
    LDA $34
    ADC $d6
    CMP #$80
    BCS TEXTATCMOVESKIPY
    CMP #26
    BCS TEXTATCMOVESKIPY
    STA $d6

TEXTATCMOVEADDPY:
    TXA
    PHA
    LDA $34
    CMP #$80
    BCC TEXTATCMOVELOOPYP
    JMP TEXTATCMOVELOOPYM

TEXTATCMOVELOOPYP:
    TAX
TEXTATCMOVELOOPY:

    CLC
    LDA #40
    ADC $22
    STA $22
    LDA #0
    ADC $23
    STA $23

    CLC
    LDA #40
    ADC $29
    STA $29
    LDA #0
    ADC $30
    STA $30

    DEX
    BNE TEXTATCMOVELOOPY
    PLA
    TAX
    JMP TEXTATCMOVESKIPY

TEXTATCMOVELOOPYM:
    EOR #$FF
    CLC
    ADC #$1
    STA $34
    TAX
TEXTATCMOVELOOPY2:

    SEC
    LDA $22
    SBC #40
    STA $22
    LDA $23
    SBC #0
    STA $23

    SEC
    LDA $29
    SBC #40
    STA $29
    LDA $30
    SBC #0
    STA $30

    DEX
    BNE TEXTATCMOVELOOPY2
    PLA
    TAX
    JMP TEXTATCMOVESKIPY

TEXTATCMOVESKIPY:
    INC $20
    DEY
    JMP TEXTATNEXT

    TEXTATAT:
    INC $20
    DEX
    LDA ($20), Y
    SEC
    SBC $d3
    STA $33
    INC $20
    DEX
    LDA ($20), Y
    SEC
    SBC $d6
    STA $34
    JMP TEXTATCMOVE

TEXTATSP0:
    STA ($22),Y
    LDA $2c
    AND #$2
    BEQ TEXTATCNOPEN
    LDA $2b
    STA ($29),Y
TEXTATCNOPEN:
    JMP TEXTATINCX

TEXTATSKIPTAB:
    DEC $25
    JMP TEXTATINCX

TEXTATINCX:
    INC $d3
    LDA $d3
    CMP #40
    BEQ TEXTATNEXT2
    JMP TEXTATNEXT
TEXTATNEXT2:
    LDA #0
    STA $d3
    INC $d6
    LDA $d6
    CMP #24

    BEQ TEXTATNEXT3
    JMP TEXTATNEXT
TEXTATNEXT3:

    LDA #$FE
    JSR VSCROLLT

    DEC $d6
    SEC
    LDA $22
    SBC #40
    STA $22
    LDA $23
    SBC #0
    STA $23

    SEC
    LDA $29
    SBC #40
    STA $29
    LDA $2a
    SBC #0
    STA $2a

TEXTATNEXT:
    LDA $25
    BEQ TEXTATXLOOP2
    JMP TEXTATLOOP2
TEXTATXLOOP2:
    INY
    DEX
    BEQ TEXTATEND
    JMP TEXTATLOOP2
TEXTATEND:
    CLI
    RTS
