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

/**
 * @brief Emit ASM implementation for <b>BITMAP ENABLE</b> instruction
 * 
 * This function can be called to emit the code to enable bitmap graphics
 * on the target machine. Bitmap resolution and colors depends on hardware.
 * Enabling the bitmap also sets the starting address in memory, for those 
 * computers that have graphics mapped in memory.
 * 
 * On some machine calling this instruction will define two special variables:
 * 
 *  * `bitmapAddress` (VT_ADDRESS) - the starting address of bitmap memory
 *  * `colormapAddress` (VT_ADDRESS) - the starting address of color map memory
 * 
 * @param _environment Current calling environment
 */
void bitmap_enable( Environment * _environment, int _width, int _height, int _colors ) {

    // Let's define the special variable bitmapAddress.
    Variable * bitmapAddress = variable_retrieve_or_define( _environment, "BITMAPADDRESS", VT_ADDRESS, 0x4000 );

    // Let's define the special variable colormapAddress.
    Variable * colormapAddress = variable_retrieve_or_define( _environment, "colormapAddress", VT_ADDRESS, 0x5800 );

    // Let's define the special variable colormapAddress.
    Variable * bitmap_enabled = variable_retrieve_or_define( _environment, "bitmap_enabled", VT_BYTE, 1 );

    outline0("; BITMAP ENABLE (ignored)");
    
    variable_store( _environment, bitmap_enabled->name, 1 );

}

/**
 * @brief Emit ASM implementation for <b>BITMAP DISABLE</b> instruction
 * 
 * This function can be called to emit the code to disable bitmap graphics
 * on the target machine.
 * 
 * @param _environment Current calling environment
 */
void bitmap_disable( Environment * _environment ) {

    Variable * bitmap_enabled = variable_retrieve_or_define( _environment, "bitmap_enabled", VT_BYTE, 0 );

    outline0("; BITMAP DISABLE (ignored)");

    variable_store( _environment, bitmap_enabled->name, 0 );
}

/**
 * @brief Emit ASM implementation for <b>BITMAP AT [int]</b> instruction
 * 
 * This function allows you to set the starting address, in memory, for the 
 * bitmap and it is the version that is used when the memory is given as a
 * direct number (i.e.: $2000). The input parameter is decoded and declined 
 * according to the hardware limits. So it is not said that exactly the 
 * given address is set.
 * 
 * On some machine calling this instruction will define the special variable:
 * 
 *  * `bitmapAddress` (VT_ADDRESS) - the starting address of bitmap memory
 * 
 * @param _environment Current calling environment
 * @param _address Address to use
 */
void bitmap_at( Environment * _environment, int _address ) {

    outline1("; BITMAP AT $%4.4x (ignored)", _address );

    // Let's define the special variable bitmapAddress, and update
    // it with the requested value.
    Variable * bitmapAddress = variable_retrieve_or_define( _environment, "BITMAPADDRESS", VT_ADDRESS, 0x4000 );

}

/**
 * @brief Emit ASM implementation for <b>BITMAP AT [expression]</b> instruction
 * 
 * This function allows you to set the starting address, in memory, for the 
 * bitmap and it is the version that is used when the memory is given as a
 * expression that involves variables. The input parameter is decoded and declined 
 * according to the hardware limits. So it is not said that exactly the 
 * given address is set.
 * 
 * On some machine calling this instruction will define the special variable:
 * 
 *  * `bitmapAddress` (VT_ADDRESS) - the starting address of bitmap memory
 * 
 * @param _environment Current calling environment
 * @param _address Address to use
 */
void bitmap_at_var( Environment * _environment, char * _address ) {

    outline1("; BITMAP AT %s (ignored)", _address );

    // Let's define the special variable bitmapAddress, and update
    // it with the requested value.    
    Variable * bitmapAddress = variable_retrieve_or_define( _environment, "BITMAPADDRESS", VT_ADDRESS, 0x4000 );

}

/**
* @brief Emit ASM implementation for <b>BITMAP CLEAR WITH [int]</b> instruction
 * 
 * This instruction allows you to fill the bitmap with a certain pattern 
 * (usually zero is used to indicate the blank screen). The filled part is 
 * exclusively that linked to the bitmap, so the color information is kept 
 * unchanged. This is the version that is recalled where the source presents 
 * the instruction with reference to a direct pattern (e.g. 42).
 * 
 * @pre Bitmap must be enabled at least once with instruction <b>BITMAP ENABLE</b>.
 * 
 * @param _environment Current calling environment
 * @param _pattern Pattern to use
 * @throw EXIT_FAILURE "BITMAP CLEAR WITH xxx needs BITMAP ENABLED"
 */
/* <usermanual>
@keyword BITMAP CLEAR

@target zx
</usermanual> */
void bitmap_clear_with( Environment * _environment, int _pattern ) {

    outline1("; BITMAP CLEAR WITH $%2.2x", _pattern );

    // Safety check -- bitmap address must be defined at least once.
    Variable * bitmapAddress = variable_retrieve( _environment, "BITMAPADDRESS" );

    Variable * pattern = variable_temporary( _environment, VT_BYTE, "(pattern)");

    variable_store( _environment, pattern->name, _pattern );

    z80_fill( _environment, bitmapAddress->realName, "24", pattern->realName );

    variable_reset( _environment );

}

/**
 * @brief Emit ASM implementation for <b>BITMAP CLEAR WITH [expression]</b> instruction
 * 
 * This instruction allows you to fill the bitmap with a certain pattern 
 * (usually zero is used to indicate the blank screen). The filled part is 
 * exclusively that linked to the bitmap, so the color information is kept 
 * unchanged. This is the version that is recalled where the source presents 
 * the instruction with reference to a computer expression.
 * 
 * @pre Bitmap must be enabled at least once with instruction <b>BITMAP ENABLE</b>.
 * 
 * @param _environment Current calling environment
 * @param _pattern Pattern to use
 * @throw EXIT_FAILURE "BITMAP CLEAR WITH xxx needs BITMAP ENABLED"
 */
void bitmap_clear_with_vars( Environment * _environment, char * _pattern ) {

    outline1("; BITMAP CLEAR WITH %s", _pattern );

    // Safety check -- bitmap address must be defined at least once.
    Variable * bitmapAddress = variable_retrieve( _environment, "BITMAPADDRESS" );

    // Safety check -- expression must exists (it should be always true)
    Variable * pattern = variable_retrieve( _environment, _pattern );

    z80_fill( _environment, bitmapAddress->realName, "24", pattern->realName );

}

/**
 * @brief Emit ASM implementation for <b>BITMAP CLEAR</b> instruction
 * 
 * This instruction allows you to fill the bitmap with an empty pattern 
 * (usually zero). The filled part is exclusively that linked to the bitmap, 
 * so the color information is kept unchanged. This is the version that is 
 * recalled where the source presents the instruction with reference to a 
 * computer expression.
 * 
 * @pre Bitmap must be enabled at least once with instruction <b>BITMAP ENABLE</b>.
 * 
 * @param _environment Current calling environment
 * @throw EXIT_FAILURE CRITICAL: BITMAP CLEAR WITH xxx needs BITMAP ENABLED
 */
void bitmap_clear( Environment * _environment ) {

    outline0("; BITMAP CLEAR ->" );

    // Equal to: "BITMAP CLEAR WITH $#0"

    bitmap_clear_with( _environment, 0 );

}
