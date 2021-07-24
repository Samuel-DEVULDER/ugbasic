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
;*                      INTERNAL VARIABLES FOR GTIA HARDWARE                   *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
PLOTDEST = $8a ; $8b
PLOTCDEST= $8c ; $8d
PLOTLDEST= $8e ; $8f

PLOTVBASELO:
    .byte <($9C40+(0*320)),<($9C40+(1*320)),<($9C40+(2*320)),<($9C40+(3*320))
    .byte <($9C40+(4*320)),<($9C40+(5*320)),<($9C40+(6*320)),<($9C40+(7*320))
    .byte <($9C40+(8*320)),<($9C40+(9*320)),<($9C40+(10*320)),<($9C40+(11*320))
    .byte <($9C40+(12*320)),<($9C40+(13*320)),<($9C40+(14*320)),<($9C40+(15*320))
    .byte <($9C40+(16*320)),<($9C40+(17*320)),<($9C40+(18*320)),<($9C40+(19*320))
    .byte <($9C40+(20*320)),<($9C40+(21*320)),<($9C40+(22*320)),<($9C40+(23*320))
    .byte <($9C40+(24*320))

PLOTVBASEHI:
    .byte >($9C40+(0*320)),>($9C40+(1*320)),>($9C40+(2*320)),>($9C40+(3*320))
    .byte >($9C40+(4*320)),>($9C40+(5*320)),>($9C40+(6*320)),>($9C40+(7*320))
    .byte >($9C40+(8*320)),>($9C40+(9*320)),>($9C40+(10*320)),>($9C40+(11*320))
    .byte >($9C40+(12*320)),>($9C40+(13*320)),>($9C40+(14*320)),>($9C40+(15*320))
    .byte >($9C40+(16*320)),>($9C40+(17*320)),>($9C40+(18*320)),>($9C40+(19*320))
    .byte >($9C40+(20*320)),>($9C40+(21*320)),>($9C40+(22*320)),>($9C40+(23*320))
    .byte >($9C40+(24*320))

PLOT8LO:
    .byte <(0*8),<(1*8),<(2*8),<(3*8),<(4*8),<(5*8),<(6*8),<(7*8),<(8*8),<(9*8)
    .byte <(10*8),<(11*8),<(12*8),<(13*8),<(14*8),<(15*8),<(16*8),<(17*8),<(18*8),<(19*8)
    .byte <(20*8),<(21*8),<(22*8),<(23*8),<(24*8),<(25*8),<(26*8),<(27*8),<(28*8),<(29*8)
    .byte <(30*8),<(31*8),<(32*8),<(33*8),<(34*8),<(35*8),<(36*8),<(37*8),<(38*8),<(39*8)

PLOT8HI:
    .byte >(0*8),>(1*8),>(2*8),>(3*8),>(4*8),>(5*8),>(6*8),>(7*8),>(8*8),>(9*8)
    .byte >(10*8),>(11*8),>(12*8),>(13*8),>(14*8),>(15*8),>(16*8),>(17*8),>(18*8),>(19*8)
    .byte >(20*8),>(21*8),>(22*8),>(23*8),>(24*8),>(25*8),>(26*8),>(27*8),>(28*8),>(29*8)
    .byte >(30*8),>(31*8),>(32*8),>(33*8),>(34*8),>(35*8),>(36*8),>(37*8),>(38*8),>(39*8)

PLOT4VBASELO:
    .byte <($9C40+(0*10)),<($9C40+(1*10)),<($9C40+(2*10)),<($9C40+(3*10))
    .byte <($9C40+(4*10)),<($9C40+(5*10)),<($9C40+(6*10)),<($9C40+(7*10))
    .byte <($9C40+(8*10)),<($9C40+(9*10)),<($9C40+(10*10)),<($9C40+(11*10))
    .byte <($9C40+(12*10)),<($9C40+(13*10)),<($9C40+(14*10)),<($9C40+(15*10))
    .byte <($9C40+(16*10)),<($9C40+(17*10)),<($9C40+(18*10)),<($9C40+(19*10))
    .byte <($9C40+(20*10)),<($9C40+(21*10)),<($9C40+(22*10)),<($9C40+(23*10))
    .byte <($9C40+(24*10))

PLOT4VBASEHI:
    .byte >($9C40+(0*10)),>($9C40+(1*10)),>($9C40+(2*10)),>($9C40+(3*10))
    .byte >($9C40+(4*10)),>($9C40+(5*10)),>($9C40+(6*10)),>($9C40+(7*10))
    .byte >($9C40+(8*10)),>($9C40+(9*10)),>($9C40+(10*10)),>($9C40+(11*10))
    .byte >($9C40+(12*10)),>($9C40+(13*10)),>($9C40+(14*10)),>($9C40+(15*10))
    .byte >($9C40+(16*10)),>($9C40+(17*10)),>($9C40+(18*10)),>($9C40+(19*10))
    .byte >($9C40+(20*10)),>($9C40+(21*10)),>($9C40+(22*10)),>($9C40+(23*10))
    .byte >($9C40+(24*10))

PLOT4LO:
    .byte <(0),<(1),<(2),<(3)
    .byte <(4),<(5),<(6),<(7)
    .byte <(8),<(9)
    

PLOT4HI:
    .byte >(0),>(1),>(2),>(3)
    .byte >(4),>(5),>(6),>(7)
    .byte >(8),>(9)

XGR:    .word 0
YGR:    .word 0
LINE:   .byte $ff, $ff

CLIPX1:    .word 0
CLIPY1:    .word 0
CLIPX2:    .word 319
CLIPY2:    .word 199

CURRENTWIDTH:      .word 40
CURRENTHEIGHT:      .word 24
TEXTBLOCKREMAIN:      .byte 152
TEXTBLOCKREMAINPW:      .byte 192
