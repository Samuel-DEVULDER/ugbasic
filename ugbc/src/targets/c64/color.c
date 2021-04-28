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

/**
 * @brief Emit ASM code for instruction <b>COLOR BORDER [int]x</b>
 * 
 * This function outputs the ASM code to change the border color, where 
 * the command is invoked with a direct integer value.
 * 
 * @param _environment Current calling environment
 * @param _color Index color to use.
 */
/* <usermanual>
@keyword COLOR BORDER

@english
Change the border color.

@italian
Modifica il colore del bordo (dello schermo).

@syntax COLOR BORDER # [integer]

@example COLOR BORDER #$1
@usedInExample control_uncond_jumps_01.bas
@usedInExample control_uncond_jumps_02.bas

@target c64
</usermanual> */
void color_border( Environment * _environment, int _color ) {
    
    outline1("; COLOR BORDER %2.2x", _color);

    char color[16]; sprintf(color, "#$%2.2x", _color);

    vic2_border_color( _environment, color );

}

/**
 * @brief Emit ASM code for instruction <b>COLOR BORDER [expression]</b>
 * 
 * This function outputs the ASM code to change the border color, where 
 * the command is invoked with an expression.
 * 
 * @param _environment Current calling environment
 * @param _color Variable with the expression.
 */
/* <usermanual>
@keyword COLOR BORDER

@syntax COLOR BORDER [expression]

@example COLOR BORDER BLACK
</usermanual> */
void color_border_var( Environment * _environment, char * _color ) {

    outline1("; COLOR BORDER %s", _color);

    // Safety check -- expression must exists (it should be always true)
    Variable * color = variable_retrieve( _environment, _color );
    if ( ! color ) {
        CRITICAL("Internal error on COLOR BORDER");
    }

    vic2_border_color( _environment, color->realName );

}

/**
 * @brief Emit ASM code for instruction <b>COLOR BACKGROUND [int] TO [int]x</b>
 * 
 * This function outputs the ASM code to change the background color, among 
 * those available. It should be used where the command is invoked with a 
 * direct integer value.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Index of the color to use
 */
/* <usermanual>
@keyword COLOR BACKGROUND

@english
Change the background color among those available.

@italian
Modifica il colore dello sfondo tra quelli disponibili.

@syntax COLOR BACKGROUND # [integer] TO # [integer]

@example COLOR BACKGROUND #$1 TO #$2

@target c64
</usermanual> */
void color_background( Environment * _environment, int _index, int _background_color ) {
    
    outline2("; COLOR BACKGROUND #$%2.2x TO #$%2.2x", _index, _background_color);

    char index[16]; sprintf(index, "#$%2.2x", _index );
    char background_color[16]; sprintf(background_color, "#$%2.2x", _background_color );

    vic2_background_color( _environment, index, background_color );

}

/**
 * @brief Emit ASM code for instruction <b>COLOR BACKGROUND [expression] TO [expression]</b>
 * 
 * This function outputs the ASM code to change the background color, among 
 * those available. It should be used where the command is invoked with expressions.
 * 
 * @param _environment Current calling environment
 * @param _index Expression with the index of the background color
 * @param _background_color Expression with the index of the color to use
 */
/* <usermanual>
@keyword COLOR BACKGROUND

@syntax COLOR BACKGROUND [expression] TO [expression]

@example COLOR BACKGROUND newIndex TO BLACK
</usermanual> */
void color_background_vars( Environment * _environment, char * _index, char * _background_color ) {

    outline2("; COLOR BACKGROUND %s TO %s", _index, _background_color);

    Variable * index = variable_retrieve( _environment, _index );
    if ( ! index ) {
        CRITICAL("Internal error on COLOR BACKGROUND");
    }

    Variable * background_color = variable_retrieve( _environment, _background_color );
    if ( ! background_color ) {
        CRITICAL("Internal error on COLOR BACKGROUND");
    }

    vic2_background_color( _environment, index->realName, background_color->realName );

}

/**
 * @brief Emit ASM code for instruction <b>COLOR SPRITE [int] TO [int]</b>
 * 
 * This function outputs the ASM code to change the common sprite color, among 
 * those available. It should be used where the command is invoked with integers.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the common color to set
 * @param _common_color Index of the color to use
 */
/* <usermanual>
@keyword COLOR SPRITE

@english
Change the sprite color among those available.

@italian
Modifica il colore comune dello sprite tra quelli disponibili.

@syntax COLOR SPRITE # [integer] TO # [integer]

@example COLOR SPRITE #$1 TO #$2

@target c64
</usermanual> */
void color_sprite( Environment * _environment, int _index, int _common_color ) {

    outline2("; COLOR SPRITE #$%2.2x TO #$%2.2x", _index, _common_color);

    char index[16]; sprintf(index, "#$%2.2x", _index);
    char common_color[16]; sprintf(common_color, "#$%2.2x", _common_color);

    vic2_sprite_common_color( _environment, index, common_color );

}

/**
 * @brief Emit ASM code for instruction <b>COLOR SPRITE [expression] TO [expression]</b>
 * 
 * This function outputs the ASM code to change the common sprite color, among 
 * those available. It should be used where the command is invoked with expressions.
 * 
 * @param _environment Current calling environment
 * @param _index Expression with the index of common color to set
 * @param _common_color Expression with the index of the color to use
 */
/* <usermanual>
@keyword COLOR SPRITE

@syntax COLOR SPRITE [expression] TO [expression]

@example COLOR SPRITE mySprite TO YELLOW
</usermanual> */
void color_sprite_vars( Environment * _environment, char * _index, char * _common_color ) {

    outline2("; COLOR SPRITE %s TO %s", _index, _common_color);

    Variable * index = variable_retrieve( _environment, _index );
    if ( ! index ) {
        CRITICAL("Internal error on COLOR SPRITE");
    }
    Variable * common_color = variable_retrieve( _environment, _common_color );
    if ( ! common_color ) {
        CRITICAL("Internal error on COLOR SPRITE");
    }

    vic2_sprite_common_color( _environment, index->realName, common_color->realName );

}