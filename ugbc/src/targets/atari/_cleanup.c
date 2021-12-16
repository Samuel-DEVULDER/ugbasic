/*****************************************************************************
 * ugBASIC - an isomorphic BASIC language compiler for retrocomputers        *
 *****************************************************************************
 * Copyright 2021 Marco Spedaletti (asimov@mclink.it)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *----------------------------------------------------------------------------
 * Concesso in licenza secondo i termini della Licenza Apache, versione 2.0
 * (la "Licenza"); è proibito usare questo file se non in conformità alla
 * Licenza. Una copia della Licenza è disponibile all'indirizzo:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Se non richiesto dalla legislazione vigente o concordato per iscritto,
 * il software distribuito nei termini della Licenza è distribuito
 * "COSÌ COM'È", SENZA GARANZIE O CONDIZIONI DI ALCUN TIPO, esplicite o
 * implicite. Consultare la Licenza per il testo specifico che regola le
 * autorizzazioni e le limitazioni previste dalla medesima.
 ****************************************************************************/

/****************************************************************************
 * INCLUDE SECTION 
 ****************************************************************************/

#include "../../ugbc.h"

/****************************************************************************
 * CODE SECTION 
 ****************************************************************************/

void target_finalization( Environment * _environment ) {

    gtia_finalization( _environment );

    outhead0(".segment \"CODE\"");
    outhead0("MAINEND:");
    outhead0(".endproc");

    outhead0(".SEGMENT \"EXEHDR\"");
    outhead0(".word   $FFFF");
    outhead0(".word   MAINENTRY");
    outhead0(".word   MAINENTRY::MAINEND - 1");

    outhead0(".segment \"AUTOSTRT\"");
    outhead0(".word   RUNAD                   ; defined in atari.h");
    outhead0(".word   RUNAD+1");
    outhead0(".word   MAINENTRY");

}

void target_finalize( Environment * _environment ) {

}

void target_cleanup( Environment * _environment ) {

    remove( _environment->configurationFileName );
    remove( _environment->asmFileName );

    if ( _environment->analysis && _environment->listingFileName ) {
        target_analysis( _environment );
    }

}

void target_analysis( Environment * _environment ) {
    
}