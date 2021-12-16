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
 * "COSì COM'è", SENZA GARANZIE O CONDIZIONI DI ALCUN TIPO, esplicite o
 * implicite. Consultare la Licenza per il testo specifico che regola le
 * autorizzazioni e le limitazioni previste dalla medesima.
 ****************************************************************************/

/****************************************************************************
 * INCLUDE SECTION 
 ****************************************************************************/

#if defined(__pc128op__) || defined(__mo5__)

#include "../ugbc.h"
#include <math.h>

#if defined(__pc128op__)
	/* values for C64: http://unusedino.de/ec64/technical/misc/vic656x/colors/ */
    static RGBi SYSTEM_PALETTE[] = {
            { 0x00, 0x00, 0x00, 0, "BLACK" },
            { 0xff, 0xff, 0xff, 1, "WHITE" },
            { 0x88, 0x00, 0x00, 2, "RED" },
            { 0xaa, 0xff, 0xe6, 3, "CYAN" },
            { 0xcc, 0x44, 0xcc, 4, "VIOLET" },
            { 0x00, 0xcc, 0x55, 5, "GREEN" },
            { 0x00, 0x00, 0xaa, 6, "BLUE" },
            { 0xee, 0xee, 0x77, 7, "YELLOW" },
            { 0xa1, 0x68, 0x3c, 8, "ORANGE" },
            { 0xdd, 0x88, 0x65, 9, "BROWN" },
            { 0xff, 0x77, 0x77, 10, "LIGHT RED" },
            { 0x33, 0x33, 0x33, 11, "DARK GREY" },
            { 0x77, 0x77, 0x77, 12, "GREY" },
            { 0xaa, 0xff, 0x66, 13, "LIGHT GREEN" },
            { 0x00, 0x88, 0xff, 14, "LIGHT BLUE" },
            { 0xbb, 0xbb, 0xbb, 15, "LIGHT GREY" }
    };

#elif defined(__mo5__)

    static RGBi SYSTEM_PALETTE[] = {
            { 0x00, 0x00, 0x00, 0, "BLACK" },        
            { 0x88, 0x00, 0x00, 1, "RED" },
            { 0x00, 0xcc, 0x55, 2, "GREEN" },
            { 0xee, 0xee, 0x77, 3, "YELLOW" },
            { 0x00, 0x00, 0xaa, 4, "BLUE" },
            { 0xcc, 0x44, 0xcc, 5, "VIOLET" },
            { 0xaa, 0xff, 0xe6, 6, "CYAN" },
            { 0xff, 0xff, 0xff, 7, "WHITE" },
            { 0x77, 0x77, 0x77, 8, "GREY" },
            { 0xff, 0x77, 0x77, 9, "OLD ROSE" },
            { 0xaa, 0xff, 0x66, 10, "LIGHT GREEN" },
            { 0xdd, 0x88, 0x65, 11, "SAND" },
            { 0x00, 0x88, 0xff, 12, "SKY BLUE" },
            { 0xec, 0x54, 0xe4, 13, "LIGHT MAGENTA" },
            { 0xee, 0xff, 0xff, 14, "CYAN" },
            { 0xa1, 0x68, 0x3c, 15, "ORANGE" }
        };

#endif

static RGBi * commonPalette;
int lastUsedSlotInCommonPalette = 0;

/****************************************************************************
 * CODE SECTION
 ****************************************************************************/

/**
 * @brief <i>VIC-II</i>: emit code to check for collision
 * 
 * This function can be used to issue code aimed at verifying if a sprite has 
 * had a collision with another sprite. The result (0 = no collision, 1 = 
 * collision occurred) is returned in the output variable.
 * 
 * @param _environment Current calling environment
 * @param _sprite_mask Sprite mask to use
 * @param _result Where to store the result
 */
void ef936x_collision( Environment * _environment, char * _sprite_mask, char * _result ) {
    
}

/**
 * @brief <i>VIC-II</i>: emit code to check for collision
 * 
 * This function can be used to issue code aimed at verifying if a sprite has 
 * had a collision with a tile. The result (0 = no collision, 1 = 
 * collision occurred) is returned in the output variable.
 * 
 * @param _environment Current calling environment
 * @param _sprite_mask Sprite mask to use
 * @param _result Where to store the result
 */
void ef936x_hit( Environment * _environment, char * _sprite_mask, char * _result ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to change border color
 * 
 * This function can be used to issue code aimed at changing the
 * border color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _border_color Border color to use
 */
void ef936x_border_color( Environment * _environment, char * _border_color ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ef936x_background_color( Environment * _environment, int _index, int _background_color ) {

    outline1("LDA #$%2.2x", ( _index & 0x0f ) * 2 );
    outline0("STA $A7DB" );
    outline1("LDD #$%4.4x", _background_color );
    outline0("STB $A7DA" );
    outline0("STA $A7DA" );
    
}

/**
 * @brief <i>VIC-II</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ef936x_background_color_vars( Environment * _environment, char * _index, char * _background_color ) {

    outline1("LDA %s", _index );
    outline0("ASLA" );
    outline0("STA $A7DB" );
    outline1("LDD %s", _background_color );
    outline0("STB $A7DA" );
    outline0("STA $A7DA" );
    
}

/**
 * @brief <i>VIC-II</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ef936x_background_color_semivars( Environment * _environment, int _index, char * _background_color ) {

    outline1("LDA #$%2.2x", (_index*2) );
    outline0("STA $A7DB" );
    outline1("LDD %s", _background_color );
    outline0("STB $A7DA" );
    outline0("STA $A7DA" );
    
}

/**
 * @brief <i>VIC-II</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ef936x_background_color_get_vars( Environment * _environment, char * _index, char * _background_color ) {

    outline1("LDA %s", _index );
    outline0("ASLA" );
    outline0("STA $A7DB" );
    outline0("LDB $A7DA" );
    outline0("LDA $A7DA" );
    outline1("STD %s", _background_color );
    
}

/**
 * @brief <i>VIC-II</i>: emit code to change common sprite's color 
 * 
 * This function can be used to issue code aimed at changing the
 * common color of the sprites.

 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _common_color Index of the color to use
 */
void ef936x_sprite_common_color( Environment * _environment, char * _index, char * _common_color ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to set raster irq
 * 
 * This function outputs assembly code needed to initialize a raster routine. 
 * In other words, asynchronously and in parallel with the execution of the 
 * main program, the routine starting from the label provided will be executed
 * when the vertical brush on the screen reaches the value of _position. 
 * This function is particularly useful when the position is communicated 
 * is given as an integer.
 * 
 * @param _environment Current calling environment
 * @param _label Label to jump to when vertical raster reach the value given
 * @param _positionlo The vertical position to wait for (bits 7..0)
 * @param _positionhi The vertical position to wait for (bit 8)
 */
void ef936x_raster_at( Environment * _environment, char * _label, char * _positionlo, char * _positionhi ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to wait for next raster irq
 * 
 * This function outputs assembly code needed to wait for the
 * next raster. Meanwhile, the execution of the main code will resume 
 * where it left off.
 * 
 * @param _environment Current calling environment
 *
 */
void ef936x_next_raster( Environment * _environment ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to wait for next raster irq at different position
 * 
 * This function outputs assembly code needed to wait for the
 * next raster on a different position with a different code to
 * execute. Meanwhile, the execution of the main code will resume 
 * where it left off.
 * 
 * @param _environment Current calling environment
 * @param _label Label to jump to when vertical raster reach the value given
 * @param _positionlo The vertical position to wait for (bits 7..0)
 * @param _positionhi The vertical position to wait for (bit 8)
 */
void ef936x_next_raster_at( Environment * _environment, char * _label, char * _positionlo, char * _positionhi ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to enable ECM
 * 
 * @param _environment Current calling environment
 */
void ef936x_enable_ecm( Environment * _environment ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to disable ECM
 * 
 * @param _environment Current calling environment
 */
void ef936x_disable_ecm( Environment * _environment ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to enable MCM
 * 
 * @param _environment Current calling environment
 */
void ef936x_enable_mcm( Environment * _environment ) {

}

/**
 * @brief <i>VIC-II</i>: emit code to disable ECM
 * 
 * @param _environment Current calling environment
 */
void ef936x_disable_mcm( Environment * _environment ) {

}

void ef936x_bank_select( Environment * _environment, int _bank ) {

}

int ef936x_screen_mode_enable( Environment * _environment, ScreenMode * _screen_mode ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm );

    _environment->fontWidth = 8;
    _environment->fontHeight = 8;
    _environment->screenTiles = 255;
    switch( _screen_mode->id ) {
        case BITMAP_MODE_40_COLUMN:
            _environment->screenWidth = 320;
            _environment->screenHeight = 200;
            _environment->screenTilesWidth = 40;
            _environment->screenTilesHeight = 25;
            _environment->screenColors = 16;
            outline0("LDA #%00000000");
            outline0("STA $A7DC");
            break;
        case BITMAP_MODE_80_COLUMN:
            _environment->screenWidth = 640;
            _environment->screenHeight = 200;
            _environment->screenTilesWidth = 80;
            _environment->screenTilesHeight = 25;
            _environment->screenColors = 4;
            outline0("LDA #%00101010");
            outline0("STA $A7DC");
            break;
        case BITMAP_MODE_BITMAP_4:
            _environment->screenWidth = 320;
            _environment->screenHeight = 200;
            _environment->screenTilesWidth = 40;
            _environment->screenTilesHeight = 25;
            _environment->screenColors = 4;
            outline0("LDA #%00100001");
            outline0("STA $A7DC");
            break;
        case BITMAP_MODE_BITMAP_16:
            _environment->screenWidth = 160;
            _environment->screenHeight = 200;
            _environment->screenTilesWidth = 20;
            _environment->screenTilesHeight = 25;
            _environment->screenColors = 16;
            outline0("LDA #%01111011");
            outline0("STA $A7DC");
            break;
        case BITMAP_MODE_PAGE:
            _environment->screenWidth = 320;
            _environment->screenHeight = 200;
            _environment->screenTilesWidth = 40;
            _environment->screenTilesHeight = 25;
            _environment->screenColors = 4;
            outline0("LDA #%00100100");
            outline0("STA $A7DC");
            break;
        default:
            CRITICAL_SCREEN_UNSUPPORTED( _screen_mode->id );
    }

    cpu_store_16bit( _environment, "CLIPX1", 0 );
    cpu_store_16bit( _environment, "CLIPX2", _environment->screenWidth-1 );
    cpu_store_16bit( _environment, "CLIPY1", 0 );
    cpu_store_16bit( _environment, "CLIPY2", _environment->screenHeight-1 );
    cpu_store_16bit( _environment, "CURRENTFRAMESIZE", 40*200 );

    cpu_store_16bit( _environment, "CURRENTWIDTH", _environment->screenWidth );
    cpu_store_16bit( _environment, "CURRENTHEIGHT", _environment->screenHeight );
    cpu_store_8bit( _environment, "CURRENTTILES", _environment->screenTiles );
    cpu_store_8bit( _environment, "CURRENTTILESWIDTH", _environment->screenTilesWidth );
    cpu_store_8bit( _environment, "CURRENTTILESHEIGHT", _environment->screenTilesHeight );

}

void ef936x_bitmap_enable( Environment * _environment, int _width, int _height, int _colors ) {

    ScreenMode * mode = find_screen_mode_by_suggestion( _environment, 1, _width, _height, _colors );

    if ( mode ) {
        ef936x_screen_mode_enable( _environment, mode );
        cpu_store_8bit( _environment, "CURRENTMODE", mode->id );
        _environment->currentMode = mode->id;
    } else {
        WARNING_SCREEN_MODE( -1 );
    }

}

void ef936x_bitmap_disable( Environment * _environment ) {    

}

void ef936x_tilemap_enable( Environment * _environment, int _width, int _height, int _colors ) {

    ScreenMode * mode = find_screen_mode_by_suggestion( _environment, 0, _width, _height, _colors );

    if ( mode ) {
        ef936x_screen_mode_enable( _environment, mode );
        cpu_store_8bit( _environment, "CURRENTMODE", mode->id );
        _environment->currentMode = mode->id;
    } else {
        WARNING_SCREEN_MODE( -1 );
    }

}

void ef936x_bitmap_at( Environment * _environment, char * _address ) {

}

void ef936x_colormap_at( Environment * _environment, char * _address ) {    

}

void ef936x_textmap_at( Environment * _environment, char * _address ) {  

}

void ef936x_point_at_int( Environment * _environment, int _x, int _y ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm );
    deploy( plot, src_hw_ef936x_plot_asm );
    
    outline1("LDD %4.4x", (_x & 0xffff ) );
    outline0("STD <PLOTX");
    outline1("LDD %4.4x", ( _y & 0xffff ) );
    outline0("STD <PLOTY");
    outline0("LDA #1");
    outline0("STA <PLOTM");
    outline0("JSR PLOT");
    

}

void ef936x_point_at_vars( Environment * _environment, char *_x, char *_y ) {

    Variable * x = variable_retrieve_or_define( _environment, _x, VT_POSITION, 0 );
    Variable * y = variable_retrieve_or_define( _environment, _y, VT_POSITION, 0 );

    deploy( ef936xvars, src_hw_ef936x_vars_asm );
    deploy( plot, src_hw_ef936x_plot_asm );
    
    outline1("LDD %s", x->realName );
    outline0("STD <PLOTX");
    outline1("LDD %s", y->realName );
    outline0("STD <PLOTY");
    outline0("LDA #1");
    outline0("STA <PLOTM");
    outline0("JSR PLOT");

}

void ef936x_point( Environment * _environment, char *_x, char *_y, char * _result ) {

    Variable * x = variable_retrieve_or_define( _environment, _x, VT_POSITION, 0 );
    Variable * y = variable_retrieve_or_define( _environment, _y, VT_POSITION, 0 );
    Variable * result = variable_retrieve_or_define( _environment, _result, VT_BYTE, 0 );

    deploy( ef936xvars, src_hw_ef936x_vars_asm );
    deploy( plot, src_hw_ef936x_plot_asm );
    
    outline1("LDD %s", x->realName );
    outline0("STD <PLOTX");
    outline1("LDD %s", y->realName );
    outline0("STD <PLOTY");
    outline0("LDA #3");
    outline0("STA <PLOTM");
    outline0("JSR PLOT");
    outline0("LDA <PLOTM");
    outline1("STA %s", result->realName );    

}

void ef936x_screen_on( Environment * _environment ) {

}

void ef936x_screen_off( Environment * _environment ) {

}

void ef936x_screen_rows( Environment * _environment, char * _rows ) {

}

void ef936x_sprite_data_from( Environment * _environment, char * _sprite, char * _address ) {

}

void ef936x_sprite_enable( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_disable( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_at( Environment * _environment, char * _sprite, char * _x, char * _y ) {

}

void ef936x_sprite_expand_vertical( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_expand_horizontal( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_compress_vertical( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_compress_horizontal( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_multicolor( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_monocolor( Environment * _environment, char * _sprite ) {

}

void ef936x_sprite_color( Environment * _environment, char * _sprite, char * _color ) {

}

void ef936x_tiles_at( Environment * _environment, char * _address ) {

}

void ef936x_vertical_scroll( Environment * _environment, char * _displacement ) {

}

void ef936x_horizontal_scroll( Environment * _environment, char * _displacement ) {

}

void ef936x_get_width( Environment * _environment, char *_result ) {

    outline0("LDX CURRENTWIDTH" );
    outline1("STX %s", _result );

}

void ef936x_tiles_get( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILES" );
    outline1("STA %s", _result );

}

void ef936x_tiles_get_width( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILESWIDTH" );
    outline1("STA %s", _result );

}

void ef936x_get_height( Environment * _environment, char *_result ) {

    outline0("LDD CURRENTHEIGHT" );
    outline1("STD %s", _result );

}

void ef936x_tiles_get_height( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILESHEIGHT" );
    outline1("STA %s", _result );

}

void ef936x_cls( Environment * _environment ) {

    deploy( cls, src_hw_ef936x_cls_asm );

    outline0("JSR CLS");

}

void ef936x_scroll_text( Environment * _environment, int _direction ) {

    deploy( vScrollText, src_hw_ef936x_vscroll_text_asm );

    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA <DIRECTION" );

    outline0("JSR VSCROLLT");

}

void ef936x_text( Environment * _environment, char * _text, char * _text_size ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm);
    deploy( vScrollText, src_hw_ef936x_vscroll_text_asm );
    deploy( cls, src_hw_ef936x_cls_asm );
    deploy( textEncodedAt, src_hw_ef936x_text_at_asm );

    outline1("LDY %s", _text);
    outline0("STY <TEXTPTR" );
    outline1("LDA %s", _text_size);
    outline0("STA <TEXTSIZE" );

    outline0("JSR TEXTAT");

}

static int rgbConverterFunction( int _red, int _green, int _blue ) {
    
    int value = ( ( ( _blue >> 4 ) & 0x0f ) << 8 ) |
            ( ( ( _green >> 4 ) & 0x0f ) << 4 ) |
            ( ( ( _red >> 4 ) & 0x0f ) );

    return value;

}

void ef936x_initialization( Environment * _environment ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm );
    deploy( ef936xstartup, src_hw_ef936x_startup_asm );
    // src_hw_chipset_mob_asm = src_hw_ef936x_mob_asm;
    // src_hw_chipset_mob_asm_len = src_hw_ef936x_mob_asm_len;

    variable_import( _environment, "CURRENTWIDTH", VT_POSITION );
    variable_global( _environment, "CURRENTWIDTH" );
    variable_import( _environment, "CURRENTHEIGHT", VT_POSITION  );
    variable_global( _environment, "CURRENTHEIGHT" );
    variable_import( _environment, "CURRENTTILES", VT_BYTE );
    variable_global( _environment, "CURRENTTILES" );
    variable_import( _environment, "CURRENTTILESWIDTH", VT_BYTE );
    variable_global( _environment, "CURRENTTILESWIDTH" );
    variable_import( _environment, "CURRENTTILESHEIGHT", VT_BYTE );
    variable_global( _environment, "CURRENTTILESHEIGHT" );
    variable_import( _environment, "FONTWIDTH", VT_BYTE );
    variable_global( _environment, "FONTWIDTH" );
    variable_import( _environment, "FONTHEIGHT", VT_BYTE );
    variable_global( _environment, "FONTHEIGHT" );

#if !defined(__mo5__)
    SCREEN_MODE_DEFINE( BITMAP_MODE_BITMAP_4, 1, 320, 200, 4, "BITMAP MODE BITMAP 4" );
    SCREEN_MODE_DEFINE( BITMAP_MODE_BITMAP_16, 1, 160, 200, 16, "BITMAP MODE BITMAP 16" );
#endif
    SCREEN_MODE_DEFINE( BITMAP_MODE_40_COLUMN, 1, 320, 200, 2, "BITMAP MODE 40 COLUMN" );
    // SCREEN_MODE_DEFINE( BITMAP_MODE_80_COLUMN, 1, 640, 200, 2, "BITMAP MODE 80 COLUMN" );
    // SCREEN_MODE_DEFINE( BITMAP_MODE_PAGE, 1, 320, 200, 4, "BITMAP MODE PAGE" );

    outline0("JSR EF936XSTARTUP");

    variable_import( _environment, "XGR", VT_POSITION );
    variable_global( _environment, "XGR" );
    variable_import( _environment, "YGR", VT_POSITION );
    variable_global( _environment, "YGR" );
    variable_import( _environment, "LINE", VT_WORD );
    variable_global( _environment, "LINE" );

    variable_import( _environment, "CLIPX1", VT_POSITION );
    variable_global( _environment, "CLIPX1" );
    variable_import( _environment, "CLIPX2", VT_POSITION );
    variable_global( _environment, "CLIPX2" );
    variable_import( _environment, "CLIPY1", VT_POSITION );
    variable_global( _environment, "CLIPY1" );
    variable_import( _environment, "CLIPY2", VT_POSITION );
    variable_global( _environment, "CLIPY2" );

    ef936x_cls( _environment );

    _environment->fontWidth = 8;
    _environment->fontHeight = 8;
    _environment->screenWidth = 320;
    _environment->screenHeight = 200;
    _environment->screenTilesWidth = 40;
    _environment->screenTilesHeight = 25;
    _environment->screenColors = 16;

    cpu_store_16bit( _environment, "CLIPX1", 0 );
    cpu_store_16bit( _environment, "CLIPX2", _environment->screenWidth-1 );
    cpu_store_16bit( _environment, "CLIPY1", 0 );
    cpu_store_16bit( _environment, "CLIPY2", _environment->screenHeight-1 );
    cpu_store_16bit( _environment, "CURRENTFRAMESIZE", 40*200 );

    cpu_store_16bit( _environment, "CURRENTWIDTH", _environment->screenWidth );
    cpu_store_16bit( _environment, "CURRENTHEIGHT", _environment->screenHeight );
    cpu_store_8bit( _environment, "CURRENTTILESWIDTH", _environment->screenTilesWidth );
    cpu_store_8bit( _environment, "CURRENTTILESHEIGHT", _environment->screenTilesHeight );

    _environment->currentRgbConverterFunction = rgbConverterFunction;
    _environment->screenShades = 4096;

}

extern RGBi * commonPalette;

/* converts a PC color to a thomson color for ef936 considering its very high gamma value */
static int pc_to_ef936x(int _pc_color) {
	// if(1) return (_pc_color>>4)&15;
	double pc_color = _pc_color/255.0;
	double ef936_color = 15*pow(pc_color, 1.67); /* gamma of 3 is possibly better */
	return 0x0F & (int)(ef936_color + 0.5);
}

void ef936x_finalization( Environment * _environment ) {
    int i;

    outhead0("COMMONPALETTE");
    out0("      fdb ");

    RGBi * palette;

    if ( commonPalette ) {
        palette = commonPalette;
    } else {
        palette = SYSTEM_PALETTE;
    }

    for( i=0; i<16; ++i ) {
        out4("$%x%x%x%s", 
			 pc_to_ef936x(palette[i].blue),
			 pc_to_ef936x(palette[i].green),
			 pc_to_ef936x(palette[i].red),
			 i == 15 ? "\n" : ",");
    }
}

void ef936x_hscroll_line( Environment * _environment, int _direction ) {

    deploy( textHScroll, src_hw_ef936x_hscroll_text_asm );

    Variable * y = variable_retrieve( _environment, "YCURSYS" );
    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA <DIRECTION" );
    outline1("LDA %s", y->realName );
    outline0("STA <CLINEY");

    outline0("JSR HSCROLLLT");    

}

void ef936x_hscroll_screen( Environment * _environment, int _direction ) {

    deploy( textHScroll, src_hw_ef936x_hscroll_text_asm );

    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA <DIRECTION" );

    outline0("JSR HSCROLLST");    

}

void ef936x_back( Environment * _environment ) {

}

void ef936x_cline( Environment * _environment, char * _characters ) {

    deploy( textCline, src_hw_ef936x_cline_asm );
    Variable * x = variable_retrieve( _environment, "XCURSYS" );
    Variable * y = variable_retrieve( _environment, "YCURSYS" );

    if ( _characters ) {
        outline1("LDA %s", _characters);
    } else {
        outline0("LDA #0");
    }
    outline0("STA <CHARACTERS");
    outline1("LDA %s", x->realName );
    outline0("STA <CLINEX" );
    outline1("LDA %s", y->realName );
    outline0("STA <CLINEY");
    outline0("JSR CLINE");

}

/**
 * @brief Calculate the luminance of a color
 * 
 * This function calculates the luminance of a color. 
 * By luminance we mean the modulus of the three-dimensional 
 * vector, drawn in the space composed of the three components 
 * (red, green and blue). The returned value is normalized to
 * the nearest 8-bit value.
 * 
 * @param _a 
 * @return int 
 */
// 

static int calculate_luminance(RGBi _a) {

    // Extract the vector's components 
    // (each partecipate up to 1/3 of the luminance).
    double red = (double) _a.red / 3;
    double green = (double)_a.green / 3;
    double blue = (double)_a.blue / 3;

    // Calculate luminance using Pitagora's Theorem
    return (int)sqrt(pow(red, 2) + pow(green, 2) + pow(blue, 2));

}

static int calculate_image_size( Environment * _environment, int _width, int _height, int _mode ) {

    switch( _mode ) {
        case BITMAP_MODE_40_COLUMN:
            return 2 + 2 * ( ( _width >> 3 ) * _height );
        case BITMAP_MODE_BITMAP_4:
            return 2 + 2 * ( ( _width >> 3 ) * _height ) /*+ 8*/;
        case BITMAP_MODE_80_COLUMN:
        case BITMAP_MODE_BITMAP_16:
            return 2 + 2 * ( ( _width >> 2 ) * _height ) /* + 16 * 2 */;
        case BITMAP_MODE_PAGE:
            // CRITICAL_IMAGE_CONVERTER_UNSUPPORTED_MODE( _mode );
            break;
    }

    return 0;

}


static Variable * ef936x_image_converter_bitmap_mode_standard( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

    // ignored on bitmap mode
    (void)!_transparent_color;

    image_converter_asserts( _environment, _width, _height, _offset_x, _offset_y, &_frame_width, &_frame_height );

    RGBi palette[MAX_PALETTE];

    int colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

    if (colorUsed > 2) {
        CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
    }

    int i, j, k;

    for( i=0; i<colorUsed; ++i ) {
        int minDistance = 0xffff;
        int colorIndex = 0;
        for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
            int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
            // printf("%d <-> %d [%d] = %d [min = %d]\n", i, j, SYSTEM_PALETTE[j].index, distance, minDistance );
            if (distance < minDistance) {
                // printf(" candidated...\n" );
                for( k=0; k<i; ++k ) {
                    if ( palette[k].index == SYSTEM_PALETTE[j].index ) {
                        // printf(" ...used!\n" );
                        break;
                    }
                }
                if ( k>=i ) {
                    // printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
                    minDistance = distance;
                    colorIndex = j;
                }
            }
        }
        palette[i].index = SYSTEM_PALETTE[colorIndex].index;
        strcpy( palette[i].description, SYSTEM_PALETTE[colorIndex].description );
        // printf("%d) %d %2.2x%2.2x%2.2x\n", i, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, 0 );
 
    int bufferSize = 2 + ( ( _frame_width >> 3 ) * _frame_height );
    // printf("bufferSize = %d\n", bufferSize );

    char * buffer = malloc ( bufferSize );
    memset( buffer, 0, bufferSize );

    // Position of the pixel in the original image
    int image_x, image_y;
    
    // Position of the pixel, in terms of tiles
    int tile_x, tile_y;
    
    // Position of the pixel, in terms of offset and bitmask
    int offset, bitmask;

    // Color of the pixel to convert
    RGBi rgb;

    *(buffer) = _frame_width;
    *(buffer+1) = _frame_height;

    _source += ( ( _offset_y * _width ) + _offset_x ) * 3;

    // Loop for all the source surface.
    for (image_y = 0; image_y < _frame_height; ++image_y) {
        for (image_x = 0; image_x < _frame_width; ++image_x) {

            // Take the color of the pixel
            rgb.red = *_source;
            rgb.green = *(_source + 1);
            rgb.blue = *(_source + 2);

            for( i=0; i<colorUsed; ++i ) {
                if ( rgbi_equals_rgb( &palette[i], &rgb ) ) {
                    break;
                }
            }

            // printf("%d", i );

            // Calculate the offset starting from the tile surface area
            // and the bit to set.
            offset = ( image_y * ( _frame_width >> 3 ) ) + ( image_x >> 3 );
            bitmask = 1 << ( 7 - (image_x & 0x7) );

            // If the pixes has enough luminance value, it must be 
            // considered as "on"; otherwise, it is "off".
            // int luminance = calculate_luminance(rgb);

            if ( i == 1 ) {
                *( buffer + offset + 2) |= bitmask;
                // printf("*");
            } else {
                *( buffer + offset + 2) &= ~bitmask;
                // printf(" ");
            }

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;

        // printf("\n" );

    }

    // printf("----\n");

    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    // printf("----\n");

    return result;

}

static Variable * ef936x_image_converter_multicolor_mode_standard( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

    // ignored on bitmap mode
    (void)!_transparent_color;

    image_converter_asserts( _environment, _width, _height, _offset_x, _offset_y, &_frame_width, &_frame_height );

    if ( ! commonPalette ) {

        int colorUsed;

        RGBi * palette = malloc( MAX_PALETTE * sizeof(RGBi) );

        colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

        if (colorUsed > 16) {
            CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
        }

        int i, j, k;

        for( i=0; i<colorUsed; ++i ) {
            int minDistance = 0xffff;
            int colorIndex = 0;
            for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
                int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
                // printf("%d (%2.2x%2.2x%2.2x) <-> %d (%2.2x%2.2x%2.2x) [%d] = %d [min = %d]\n", i, SYSTEM_PALETTE[j].red, SYSTEM_PALETTE[j].green, SYSTEM_PALETTE[j].blue, j, palette[i].red, palette[i].green, palette[i].blue, SYSTEM_PALETTE[j].index, distance, minDistance );
                if (distance < minDistance) {
                    // printf(" candidated...\n" );
                    for( k=0; k<i; ++k ) {
                        if ( palette[k].index == SYSTEM_PALETTE[j].index ) {
                            // printf(" ...used!\n" );
                            break;
                        }
                    }
                    if ( k>=i ) {
                        // printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
                        minDistance = distance;
                        colorIndex = j;
                    }
                }
            }
            palette[i].index = SYSTEM_PALETTE[colorIndex].index;
            strcpy( palette[i].description, SYSTEM_PALETTE[colorIndex].description );
            // printf("%d) %d * %d %2.2x%2.2x%2.2x\n", i, colorIndex, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
        }

        commonPalette = palette;

    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, 0 );
 
    int bufferSize = calculate_image_size( _environment, _frame_width, _frame_height, BITMAP_MODE_40_COLUMN );
    
    char * buffer = malloc ( bufferSize );
    memset( buffer, 0, bufferSize );

    // Position of the pixel in the original image
    int image_x, image_y;
    
    // Position of the pixel, in terms of tiles
    int tile_x, tile_y;
    
    // Position of the pixel, in terms of offset and bitmask
    int offset, offsetc, bitmask;

    // Color of the pixel to convert
    RGBi rgb;

    *(buffer) = _frame_width;
    *(buffer+1) = _frame_height;

    _source += ( ( _offset_y * _width ) + _offset_x ) * 3;

    // Loop for all the source surface.
    for (image_y = 0; image_y < _frame_height; ++image_y) {
        for (image_x = 0; image_x < _frame_width; ++image_x) {

            // Take the color of the pixel
            rgb.red = *_source;
            rgb.green = *(_source + 1);
            rgb.blue = *(_source + 2);

            int colorIndex = 0;

            int minDistance = 9999;
            for( int i=0; i<sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++i ) {
                int distance = rgbi_distance(&commonPalette[i], &rgb );
                if ( distance < minDistance ) {
                    minDistance = distance;
                    colorIndex = commonPalette[i].index;
                }
            }

            offset = ( image_y * ( _frame_width >> 3 ) ) + ( image_x >> 3 );
            bitmask = 1 << ( 7 - (image_x & 0x7) );

            // If the pixes has enough luminance value, it must be 
            // considered as "on"; otherwise, it is "off".
            // int luminance = calculate_luminance(rgb);

            if ( colorIndex ) {
                *( buffer + offset + 2) |= bitmask;
                // printf("*");
            } else {
                *( buffer + offset + 2) &= ~bitmask;
                // printf(" ");
            }

            offset = ( image_y * ( _frame_width >> 3 ) ) + ( image_x >> 3 );

            // printf( "%1.1x", colorIndex );

            bitmask = colorIndex << 4;

            *(buffer + 2 + ( ( _frame_width >> 3 ) * _frame_height ) + offset) |= bitmask;

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;

        // printf("\n" );
    }

    // for(i=0; i<4; ++i ) {
    //     printf( "%1.1x = %2.2x\n", i, palette[i].index );
    // }

    // printf("\n" );
    // printf("\n" );

    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    return result;

}

static Variable * ef936x_image_converter_multicolor_mode4( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

    // ignored on bitmap mode
    (void)!_transparent_color;

    image_converter_asserts( _environment, _width, _height, _offset_x, _offset_y, &_frame_width, &_frame_height );

    int i, j, k;

    if ( ! commonPalette ) {

        RGBi * palette = malloc( MAX_PALETTE * sizeof(RGBi) );

        int colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

        if (colorUsed > 4) {
            CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
        }

        for( i=0; i<colorUsed; ++i ) {
            int minDistance = 0xffff;
            int colorIndex = 0;
            for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
                int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
                // printf("%d <-> %d [%d] = %d [min = %d]\n", i, j, SYSTEM_PALETTE[j].index, distance, minDistance );
                if (distance < minDistance) {
                    // printf(" candidated...\n" );
                    for( k=0; k<i; ++k ) {
                        if ( palette[k].index == SYSTEM_PALETTE[j].index ) {
                            // printf(" ...used!\n" );
                            break;
                        }
                    }
                    if ( k>=i ) {
                        // printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
                        minDistance = distance;
                        colorIndex = j;
                    }
                }
            }
            palette[i].index = SYSTEM_PALETTE[colorIndex].index;
            strcpy( palette[i].description, SYSTEM_PALETTE[colorIndex].description );
            // printf("%d) %d %2.2x%2.2x%2.2x\n", i, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
        }

        commonPalette = palette;

    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, 0 );
 
    int bufferSize = calculate_image_size( _environment, _frame_width, _frame_height, BITMAP_MODE_BITMAP_4 );
    
    char * buffer = malloc ( bufferSize );
    memset( buffer, 0, bufferSize );

    // Position of the pixel in the original image
    int image_x, image_y;
    
    // Position of the pixel, in terms of tiles
    int tile_x, tile_y;
    
    // Position of the pixel, in terms of offset and bitmask
    int offset, offsetc, bitmask;

    // Color of the pixel to convert
    RGBi rgb;

    *(buffer) = _frame_width;
    *(buffer+1) = _frame_height;

    _source += ( ( _offset_y * _width ) + _offset_x ) * 3;

    // Loop for all the source surface.
    for (image_y = 0; image_y < _frame_height; ++image_y) {
        for (image_x = 0; image_x < _frame_width; ++image_x) {

            // Take the color of the pixel
            rgb.red = *_source;
            rgb.green = *(_source + 1);
            rgb.blue = *(_source + 2);

            int minDistance = 0xffff;
            int colorIndex = 0;

            colorIndex = 0;
            for( i=0; i<4; ++i ) {
                int distance = rgbi_distance(&commonPalette[i], &rgb);
                if ( minDistance > distance ) {
                    minDistance = distance;
                    colorIndex = i;
                }
            }
            // printf( "%1.1x", colorIndex );

            bitmask = 1 << ( 7 - (image_x & 0x7) );

            *(buffer + 2 + ( image_x >> 3 ) + ( ( _frame_width >> 3 ) * image_y ) ) |= ( ( colorIndex & 0x02 ) == 0x02 ) ? bitmask : 0;
            *(buffer + 2 + ( ( _frame_width >> 3 ) * _frame_height ) + ( ( image_x >> 3 ) + ( _frame_width >> 3 ) * image_y ) ) |= ( ( colorIndex & 0x01 ) == 0x01 ) ? bitmask : 0;

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;

        // printf("\n" );
    }

    // RGBi * color = &SYSTEM_PALETTE[commonPalette[0].index];
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 1 ) = ( color->green & 0xf0 ) | ( ( color->red & 0xf0 ) >> 4 );
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) ) = ( ( color->blue & 0xf0 ) >> 4 );
    
    // color = &SYSTEM_PALETTE[commonPalette[1].index];
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 3 ) = ( color->green & 0xf0 ) | ( ( color->red & 0xf0 ) >> 4 );
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 2 ) = ( ( color->blue & 0xf0 ) >> 4 );

    // color = &SYSTEM_PALETTE[commonPalette[2].index];
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 5 ) = ( color->green & 0xf0 ) | ( ( color->red & 0xf0 ) >> 4 );
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 4 ) = ( ( color->blue & 0xf0 ) >> 4 );

    // color = &SYSTEM_PALETTE[commonPalette[3].index];
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 7 ) = ( color->green & 0xf0 ) | ( ( color->red & 0xf0 ) >> 4 );
    // *(buffer + 2 + 2 * ( ( _width >> 3 ) * _height ) + 6 ) = ( ( color->blue & 0xf0 ) >> 4 );

    // for(i=0; i<4; ++i ) {
    //     printf( "%1.1x = %2.2x\n", i, palette[i].index );
    // }

    // printf("\n" );
    // printf("\n" );

    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    return result;

}

static Variable * ef936x_image_converter_multicolor_mode16( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

    // ignored on bitmap mode
    (void)!_transparent_color;

    image_converter_asserts( _environment, _width, _height, _offset_x, _offset_y, &_frame_width, &_frame_height );

    int i, j, k;

    if ( ! commonPalette ) {

        RGBi * palette = malloc( MAX_PALETTE * sizeof(RGBi) );
        memset( palette, 0, MAX_PALETTE * sizeof(RGBi) );

        int colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

        if (colorUsed > 16) {
            CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
        }

        for( i=0; i<colorUsed; ++i ) {
            int minDistance = 0xffff;
            int colorIndex = 0;
            for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
                int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
                // printf("%d <-> %d [%d] = %d [min = %d]\n", i, j, SYSTEM_PALETTE[j].index, distance, minDistance );
                if (distance < minDistance) {
                    // printf(" candidated...\n" );
                    for( k=0; k<i; ++k ) {
                        if ( palette[k].index == SYSTEM_PALETTE[j].index ) {
                            // printf(" ...used!\n" );
                            break;
                        }
                    }
                    if ( k>=i ) {
                        // printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
                        minDistance = distance;
                        colorIndex = j;
                    }
                }
            }
            rgbi_move(&SYSTEM_PALETTE[colorIndex], &palette[i] );
            palette[i].used = 1;
            // printf("[*] %d) %d %2.2x%2.2x%2.2x\n", i, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
        }

        commonPalette = palette;
        lastUsedSlotInCommonPalette = colorUsed;

    } else {

        RGBi * palette = malloc( MAX_PALETTE * sizeof(RGBi) );

        int colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

        if (colorUsed > 16) {
            CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
        }

        // for (j = 0; j < lastUsedSlotInCommonPalette; ++j) {
        //     printf("[§] common %d) %d %2.2x%2.2x%2.2x\n", j, commonPalette[j].index, commonPalette[j].red, commonPalette[j].green, commonPalette[j].blue);
        // }

        for( i=0; i<colorUsed; ++i ) {
            // printf("[-] palette %d) %2.2x%2.2x%2.2x\n", i, palette[i].red, palette[i].green, palette[i].blue);
            for (j = 0; j < lastUsedSlotInCommonPalette; ++j) {
                // printf("[+] common %d) %d %2.2x%2.2x%2.2x\n", j, commonPalette[j].index, commonPalette[j].red, commonPalette[j].green, commonPalette[j].blue);
                if ( commonPalette[j].used ) {
                    int distance = rgbi_distance(&commonPalette[j], &palette[i]);
                    // printf("    (%d<->%d) >> %2.2x%2.2x%2.2x <-> %2.2x%2.2x%2.2x (%d)\n", j, i, commonPalette[j].red, commonPalette[j].green, commonPalette[j].blue, palette[i].red, palette[i].green, palette[i].blue, distance);
                    if (distance < 5 ) {
                        palette[i].used = 1;
                        // printf("    (-------) >> %d = %d) %d %2.2x%2.2x%2.2x\n", j, i, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
                        break;
                    }
                }
            }
            // printf("\n");
        }

        for( i=0; i<colorUsed; ++i ) {
            // printf("[*] %d) %d %2.2x%2.2x%2.2x\n", i, palette[i].index, palette[i].red, palette[i].green, palette[i].blue);
            if ( palette[i].used ) continue;
            int minDistance = 0xffff;
            int colorIndex = 0;
            for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
                int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
                // printf("%d <-> %d [%d] = %d [min = %d]\n", i, j, SYSTEM_PALETTE[j].index, distance, minDistance );
                if (distance < minDistance) {
                    // printf(" candidated...\n" );
                    for( k=0; k<lastUsedSlotInCommonPalette; ++k ) {
                        if ( commonPalette[k].index == SYSTEM_PALETTE[j].index ) {
                            // printf(" ...used!\n" );
                            break;
                        }
                    }
                    if ( k>=lastUsedSlotInCommonPalette ) {
                        // printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
                        minDistance = distance;
                        colorIndex = j;
                    }
                }
            }
            rgbi_move(&SYSTEM_PALETTE[colorIndex], &commonPalette[lastUsedSlotInCommonPalette]);
            commonPalette[lastUsedSlotInCommonPalette].used = 1;
            ++lastUsedSlotInCommonPalette;
            // printf("#> %d) %d %2.2x%2.2x%2.2x\n", i, commonPalette[i].index, commonPalette[i].red, commonPalette[i].green, commonPalette[i].blue);
        }

        // for (j = 0; j < lastUsedSlotInCommonPalette; ++j) {
        //     printf("[@] common %d) %d %2.2x%2.2x%2.2x\n", j, commonPalette[j].index, commonPalette[j].red, commonPalette[j].green, commonPalette[j].blue);
        // }

    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, 0 );
 
    int bufferSize = calculate_image_size( _environment, _frame_width, _frame_height, BITMAP_MODE_BITMAP_16 );
    
    char * buffer = malloc ( bufferSize );
    memset( buffer, 0, bufferSize );

    // Position of the pixel in the original image
    int image_x, image_y;
    
    // Position of the pixel, in terms of tiles
    int tile_x, tile_y;
    
    // Position of the pixel, in terms of offset and bitmask
    int offset, offsetc, bitmask;

    // Color of the pixel to convert
    RGBi rgb;

    *(buffer) = _frame_width;
    *(buffer+1) = _frame_height;

    _source += ( ( _offset_y * _width ) + _offset_x ) * 3;

    // Loop for all the source surface.
    for (image_y = 0; image_y < _frame_height; ++image_y) {
        for (image_x = 0; image_x < _frame_width; ++image_x) {

            // Take the color of the pixel
            rgb.red = *_source;
            rgb.green = *(_source + 1);
            rgb.blue = *(_source + 2);

            int minDistance = 0xffff;
            int colorIndex = 0;

            colorIndex = 0;
            for( i=0; i<16; ++i ) {
                int distance = rgbi_distance(&commonPalette[i], &rgb);
                if ( minDistance > distance ) {
                    minDistance = distance;
                    colorIndex = i;
                }
            }
            // printf( "%1.1x", colorIndex );

            bitmask = colorIndex << ( 4 * ( 1 - (image_x & 0x1) ) );

            // printf( "%2.2x", bitmask );

            if ( ( ( image_x & 0x03 ) < 0x02 ) ) {
                *(buffer + 2 + ( image_x >> 2 ) + ( ( _frame_width >> 2 ) * image_y ) ) |= bitmask;
            } else {
                *(buffer + 2 + ( ( _frame_width >> 2 ) * _frame_height ) + ( ( image_x >> 2 ) + ( _frame_width >> 2 ) * image_y ) ) |= bitmask;
            }

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;

        // printf("\n" );
    }

    // for (i=0; i<16; ++i ) {
    //     RGBi * color = &SYSTEM_PALETTE[commonPalette[i].index];
    //     *(buffer + 2 + 2 * ( ( _width >> 2 ) * _height ) + 2*i + 1 ) = ( color->green & 0xf0 ) | ( ( color->red & 0xf0 ) >> 4 );
    //     *(buffer + 2 + 2 * ( ( _width >> 2 ) * _height ) + 2*i ) = ( ( color->blue & 0xf0 ) >> 4 );
    // }
    
    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    return result;

}

Variable * ef936x_image_converter( Environment * _environment, char * _data, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _mode, int _transparent_color, int _flags ) {

    switch( _mode ) {
        case BITMAP_MODE_40_COLUMN:
            return ef936x_image_converter_multicolor_mode_standard( _environment, _data, _width, _height, _offset_x, _offset_y, _frame_width, _frame_height, _transparent_color, _flags );
        case BITMAP_MODE_BITMAP_4:
            return ef936x_image_converter_multicolor_mode4( _environment, _data, _width, _height, _offset_x, _offset_y, _frame_width, _frame_height, _transparent_color, _flags );
        case BITMAP_MODE_80_COLUMN:
        case BITMAP_MODE_BITMAP_16:
            return ef936x_image_converter_multicolor_mode16( _environment, _data, _width, _height, _offset_x, _offset_y, _frame_width, _frame_height, _transparent_color, _flags );
        case BITMAP_MODE_PAGE:
            // CRITICAL_IMAGE_CONVERTER_UNSUPPORTED_MODE( _mode );
            break;
    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, 0 );
    
    return result;

}

void ef936x_put_image( Environment * _environment, char * _image, char * _x, char * _y, char * _frame, int _frame_size, int _flags ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm);
    deploy( putimage, src_hw_ef936x_put_image_asm );

    outline1("LDA #$%2.2x", _flags );
    outline0("STA <IMAGET" );
    outline1("LDY #%s", _image );
    if ( _frame ) {
        outline0("LEAY 2,y" );
        if ( strlen(_frame) == 0 ) {
        } else {
            outline1("LDX #OFFSETS%4.4x", _frame_size );
            outline1("LDB %s", _frame );
            outline0("LDA #0" );
            outline0("LEAX D, X" );
            outline0("LEAX D, X" );
            outline0("LDD ,X" );
            outline0("LEAY D, Y" );
        }
    }
    outline1("LDD %s", _x );
    outline0("STD <IMAGEX" );
    outline1("LDD %s", _y );
    outline0("STD <IMAGEY" );

    outline0("JSR PUTIMAGE");
    
}

Variable * ef936x_new_image( Environment * _environment, int _width, int _height, int _mode ) {

    int size = calculate_image_size( _environment, _width, _height, _mode );

    if ( ! size ) {
        CRITICAL_NEW_IMAGE_UNSUPPORTED_MODE( _mode );
    }

    Variable * result = variable_temporary( _environment, VT_IMAGE, "(new image)" );

    char * buffer = malloc ( size );
    memset( buffer, 0, size );

    *(buffer) = _width;
    *(buffer+1) = _height;

    result->valueBuffer = buffer;
    result->size = size;
    
    return result;
    
}

void ef936x_get_image( Environment * _environment, char * _image, char * _x, char * _y ) {

    deploy( ef936xvars, src_hw_ef936x_vars_asm);
    deploy( getimage, src_hw_ef936x_get_image_asm );

    outline1("LDY #%s", _image );
    outline1("LDD %s", _x );
    outline0("STD <IMAGEX" );
    outline1("LDD %s", _y );
    outline0("STD <IMAGEY" );

    outline0("JSR GETIMAGE");
    
}

#endif