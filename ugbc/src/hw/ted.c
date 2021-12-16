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

#ifdef __plus4__

#include "../ugbc.h"
#include <math.h>

static RGBi SYSTEM_PALETTE[] = {
    { 0x00, 0x00, 0x00, 0, "BLACK" },
    { 0xff, 0xff, 0xff, 113, "WHITE" },
    { 0xbc, 0x68, 0x59, 82, "RED"  },
    { 0x43, 0x97, 0xa6, 83, "CYAN"   }, 
    { 0xbc, 0x52, 0xcc, 84, "PURPLE"  }, 
    { 0x43, 0xad, 0x33, 85, "GREEN"  }, 
    { 0x80, 0x71, 0xcc, 86, "BLUE"  }, 
    { 0x80, 0x8e, 0x33, 87, "YELLOW"  }, 
    { 0xbc, 0x6f, 0x33, 88, "ORANGE" }, 
    { 0x9e, 0x7f, 0x33, 89, "BROWN" }, 
    { 0x61, 0x9e, 0x33, 90, "YELLOW GREEN"  }, 
    { 0xbc, 0x61, 0x80, 91, "PINK" }, 
    { 0x43, 0x9e, 0x80, 92, "BLUE GREEN" }, 
    { 0x43, 0x90, 0xcc, 109, "LIGHT BLUE"  }, 
    { 0x9e, 0x61, 0xcc, 62, "DARK BLUE" },
    { 0x43, 0xa6, 0x59, 95, "LIGHT GREEN"  } 
};

/****************************************************************************
 * CODE SECTION
 ****************************************************************************/

void ted_collision( Environment * _environment, char * _sprite_mask, char * _result ) {

}

void ted_hit( Environment * _environment, char * _sprite_mask, char * _result ) {

}

/**
 * @brief <i>TED</i>: emit code to change border color
 * 
 * This function can be used to issue code aimed at changing the
 * border color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _border_color Border color to use
 */
void ted_border_color( Environment * _environment, char * _border_color ) {

    outline1("LDA %s", _border_color );
    outline0("AND #$0f" );
    outline0("STA $FF19");

}

/**
 * @brief <i>TED</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ted_background_color( Environment * _environment, int _index, int _background_color ) {
 
    outline1("LDA %2.2x", _background_color);
    outline0("AND #$0f");
    outline1("STA $FF15+%d", ( _index & 0x03 ) );
}

/**
 * @brief <i>TED</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ted_background_color_vars( Environment * _environment, char * _index, char * _background_color ) {
 
    outline1("LDA %s", _index);
    outline0("AND #$03");
    outline0("TAX");
    outline1("LDA %s", _background_color );
    outline0("AND #$0f" );
    outline0("STA $FF15,X");
}

/**
 * @brief <i>TED</i>: emit code to change background color
 * 
 * This function can be used to issue code aimed at changing the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ted_background_color_semivars( Environment * _environment, int _index, char * _background_color ) {
 
    outline1("LDA #$%2.2x", _index);
    outline0("AND #$03");
    outline0("TAX");
    outline1("LDA %s", _background_color );
    outline0("AND #$0f" );
    outline0("STA $FF15,X");
}

/**
 * @brief <i>TED</i>: emit code to retrieve background color
 * 
 * This function can be used to issue code aimed at retrieving the
 * background color of the screen.
 * 
 * @param _environment Current calling environment
 * @param _index Index of the background color
 * @param _background_color Background color to use
 */
void ted_background_color_get_vars( Environment * _environment, char * _index, char * _background_color ) {
 
    outline1("LDA %s", _index);
    outline0("AND #$03");
    outline0("TAX");
    outline0("LDA $FF15,X");
    outline0("AND #$0f" );
    outline1("STA %s", _background_color );
    
}

void ted_sprite_common_color( Environment * _environment, char * _index, char * _common_color ) {

}

/**
 * @brief <i>TED</i>: emit code to set raster irq
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
void ted_raster_at( Environment * _environment, char * _label, char * _positionlo, char * _positionhi ) {

    MAKE_LABEL

    outline0("SEI");
    outline1("LDA #<%s", _label);
    outline0("STA $0314");
    outline1("LDA #>%s", _label);
    outline0("STA $0315");
    outline0("LDA #%00000010");
    outline0("STA $FF0A");
    outline1("LDA %s", _positionlo );
    outline0("STA $FF0B");
    outline1("LDA %s", _positionhi );
    outline0("AND #%00000001" );
    cpu6502_beq(_environment, label);
    outline0("LDA $FF0A" );
    outline0("AND #%01111111" );
    outline0("ORA #%10000000" );
    outline0("STA $FF0A");
    outhead1("%s:", label );
    outline0("CLI");

}

/**
 * @brief <i>TED</i>: emit code to wait for next raster irq
 * 
 * This function outputs assembly code needed to wait for the
 * next raster. Meanwhile, the execution of the main code will resume 
 * where it left off.
 * 
 * @param _environment Current calling environment
 *
 */
void ted_next_raster( Environment * _environment ) {

    outline0("ASL $FF09"); // acknowledge
    outline0("JMP $FCB3"); // KERNAL's standard interrupt service routine

}

/**
 * @brief <i>TED</i>: emit code to wait for next raster irq at different position
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
void ted_next_raster_at( Environment * _environment, char * _label, char * _positionlo, char * _positionhi ) {

    MAKE_LABEL

    outline1("LDA %s", _positionlo );
    outline0("STA $FF0B");
    outline1("LDA %s", _positionhi );
    outline0("AND #%00000001" );
    cpu6502_beq(_environment, label);
    outline0("LDA $FF0A" );
    outline0("AND #%01111111" );
    outline0("ORA #%10000000" );
    outline0("STA $FF0A");
    outhead1("%s:", label );
    outline1("LDA #<%s", _label);
    outline0("STA $0314");
    outline1("LDA #>%s", _label);
    outline0("STA $0315");

    ted_next_raster( _environment );

}

void ted_enable_ecm( Environment * _environment ) {

}

void ted_disable_ecm( Environment * _environment ) {

}

void ted_enable_mcm( Environment * _environment ) {

}

void ted_disable_mcm( Environment * _environment ) {

}

void ted_bank_select( Environment * _environment, int _bank ) {

}

static int rgbConverterFunction( int _red, int _green, int _blue ) {
    
    int colorIndex = 0;
    int minDistance = 0xffffffff;
    int j;

    RGBi rgb;
    rgb.red = _red;
    rgb.green = _green;
    rgb.blue = _blue;

    for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
        int distance = rgbi_distance(&SYSTEM_PALETTE[j], &rgb);
        if (distance < minDistance) {
            minDistance = distance;
            colorIndex = j;
        }
    }

    return colorIndex;

}

int ted_screen_mode_enable( Environment * _environment, ScreenMode * _screen_mode ) {

    Variable * colormapAddress = variable_retrieve( _environment, "COLORMAPADDRESS" );

    _environment->screenTiles = 255;
    switch( _screen_mode->id ) {
        case BITMAP_MODE_STANDARD:
            _environment->fontWidth = 8;
            _environment->fontHeight = 8;
            _environment->screenWidth = 320;
            _environment->screenHeight = 200;
            _environment->screenColors = 2;
            // Enable graphics.
            outline0("LDA $FF06" );
            outline0("ORA #%00100000");
            outline0("STA $FF06" );

            // Let's enable monocolor graphics!
            outline0("LDA $FF07" );
            outline0("AND #%11101111");
            outline0("STA $FF07" );

            cpu_store_16bit( _environment, colormapAddress->realName, 0xA000-0x0400 );

            cpu_store_8bit( _environment, "_PEN", 0x01 );
            cpu_store_8bit( _environment, "_PAPER", 0x00 );
            cpu_store_16bit( _environment, "CLIPX1", 0 );
            cpu_store_16bit( _environment, "CLIPX2", 319 );
            cpu_store_16bit( _environment, "CLIPY1", 0 );
            cpu_store_16bit( _environment, "CLIPY2", 199 );
            
            break;
        case BITMAP_MODE_MULTICOLOR:
            _environment->fontWidth = 4;
            _environment->fontHeight = 8;
            _environment->screenWidth = 160;
            _environment->screenHeight = 200;
            _environment->screenColors = 4;
            // Enable graphics.
            outline0("LDA $FF06" );
            outline0("ORA #%00100000");
            outline0("STA $FF06" );

            // Let's enable multicolor graphics!
            outline0("LDA $FF07" );
            outline0("ORA #%00010000");
            outline0("STA $FF07" );

            cpu_store_16bit( _environment, colormapAddress->realName, 0xA000-0x0400 );
            
            cpu_store_8bit( _environment, "_PEN", 0x01 );
            cpu_store_8bit( _environment, "_PAPER", 0x00 );
            cpu_store_16bit( _environment, "CLIPX1", 0 );
            cpu_store_16bit( _environment, "CLIPX2", 159 );
            cpu_store_16bit( _environment, "CLIPY1", 0 );
            cpu_store_16bit( _environment, "CLIPY2", 199 );

            break;
        case TILEMAP_MODE_STANDARD:
            _environment->screenWidth = 40;
            _environment->screenHeight = 25;
            _environment->screenColors = 16;
            // Let's disable graphics (and extended color)!
            outline0("LDA $FF06" );
            outline0("AND #%10011111");
            outline0("STA $FF06" );

            cpu_store_16bit( _environment, colormapAddress->realName, 0xA000 );

            cpu_store_8bit( _environment, "_PEN", 0x01 );
            cpu_store_8bit( _environment, "_PAPER", 0x00 );
            cpu_store_16bit( _environment, "CLIPX1", 0 );
            cpu_store_16bit( _environment, "CLIPX2", 39 );
            cpu_store_16bit( _environment, "CLIPY1", 0 );
            cpu_store_16bit( _environment, "CLIPY2", 24 );

            break;
        case TILEMAP_MODE_MULTICOLOR:
        case TILEMAP_MODE_EXTENDED:
            _environment->screenWidth = 40;
            _environment->screenHeight = 25;
            _environment->screenColors = 16;
            // Let's disable graphics and enable extended color!
            outline0("LDA $FF06" );
            outline0("AND #%11011111");
            outline0("ORA #%01000000");
            outline0("STA $FF06" );

            cpu_store_16bit( _environment, colormapAddress->realName, 0xA000 );

            cpu_store_8bit( _environment, "_PEN", 0x01 );
            cpu_store_8bit( _environment, "_PAPER", 0x00 );
            cpu_store_16bit( _environment, "CLIPX1", 0 );
            cpu_store_16bit( _environment, "CLIPX2", 39 );
            cpu_store_16bit( _environment, "CLIPY1", 0 );
            cpu_store_16bit( _environment, "CLIPY2", 24 );

            break;
        default:
            CRITICAL_SCREEN_UNSUPPORTED( _screen_mode->id );
    }

    cpu_store_16bit( _environment, "CURRENTWIDTH", _environment->screenWidth );
    cpu_store_16bit( _environment, "CURRENTHEIGHT", _environment->screenHeight );
    cpu_store_8bit( _environment, "CURRENTTILES", _environment->screenTiles );
    _environment->screenTilesWidth = _environment->screenWidth / 8;
    cpu_store_8bit( _environment, "CURRENTTILESWIDTH", _environment->screenTilesWidth );
    _environment->screenTilesHeight = _environment->screenHeight / 8;
    cpu_store_8bit( _environment, "CURRENTTILESHEIGHT", _environment->screenTilesHeight );
    cpu_store_8bit( _environment, "FONTWIDTH", _environment->fontWidth );
    cpu_store_8bit( _environment, "FONTHEIGHT", _environment->fontHeight );

}

void ted_bitmap_enable( Environment * _environment, int _width, int _height, int _colors ) {

    ScreenMode * mode = find_screen_mode_by_suggestion( _environment, 1, _width, _height, _colors );

    if ( mode ) {
        ted_screen_mode_enable( _environment, mode );

        cpu_store_8bit( _environment, "CURRENTMODE", mode->id );

        _environment->currentMode = mode->id;
    } else {
        WARNING_SCREEN_MODE( -1 );
    }

}

void ted_bitmap_disable( Environment * _environment ) {

    Variable * colormapAddress = variable_retrieve( _environment, "COLORMAPADDRESS" );

    // Let's disable graphics!
    outline0("LDA $FF06" );
    outline0("AND #%11011111");
    outline0("STA $FF06" );

    cpu_store_16bit( _environment, colormapAddress->realName, 0xd800 );

}

void ted_tilemap_enable( Environment * _environment, int _width, int _height, int _colors ) {

    ScreenMode * mode = find_screen_mode_by_suggestion( _environment, 0, _width, _height, _colors );

    if ( mode ) {
        ted_screen_mode_enable( _environment, mode );

        cpu_store_8bit( _environment, "CURRENTMODE", mode->id );

        _environment->currentMode = mode->id;
    } else {
        WARNING_SCREEN_MODE( -1 );
    }

}

void ted_bitmap_at( Environment * _environment, char * _address ) {

}

void ted_colormap_at( Environment * _environment, char * _address ) {

}

void ted_textmap_at( Environment * _environment, char * _address ) {

}

void ted_point_at_int( Environment * _environment, int _x, int _y ) {

    deploy( tedvars, src_hw_ted_vars_asm );
    deploy( plot, src_hw_ted_plot_asm );
    
    outline1("LDA %2.2x", (_x & 0xff ) );
    outline0("STA PLOTX");
    outline1("LDA %2.2x", ( ( _x >> 8 ) & 0xff ) );
    outline0("STA PLOTX+1");
    outline1("LDA %2.2x", ( _y & 0xff ) );
    outline0("STA PLOTY");
    outline0("LDA #1");
    outline0("STA PLOTM");
    outline0("JSR PLOT");

}

void ted_point_at_vars( Environment * _environment, char *_x, char *_y ) {

    Variable * x = variable_retrieve( _environment, _x );
    Variable * y = variable_retrieve( _environment, _y );

    deploy( tedvars, src_hw_ted_vars_asm );
    deploy( plot, src_hw_ted_plot_asm );
    
    outline1("LDA %s", x->realName );
    outline0("STA PLOTX");
    outline1("LDA %s+1", x->realName );
    outline0("STA PLOTX+1");
    outline1("LDA %s", y->realName );
    outline0("STA PLOTY");
    outline0("LDA #1");
    outline0("STA PLOTM");
    outline0("JSR PLOT");

}

void ted_point( Environment * _environment, char *_x, char *_y, char * _result ) {

    Variable * x = variable_retrieve( _environment, _x );
    Variable * y = variable_retrieve( _environment, _y );
    Variable * result = variable_retrieve( _environment, _result );

    deploy( tedvars, src_hw_ted_vars_asm );
    deploy( plot, src_hw_ted_plot_asm );
    
    outline1("LDA %s", x->realName );
    outline0("STA PLOTX");
    outline1("LDA %s+1", x->realName );
    outline0("STA PLOTX+1");
    outline1("LDA %s", y->realName );
    outline0("STA PLOTY");
    outline0("LDA #3");
    outline0("STA PLOTM");
    outline0("JSR PLOT");
    outline0("LDA PLOTM");
    outline1("STA %s", result->realName);

}

void ted_screen_on( Environment * _environment ) {

}

void ted_screen_off( Environment * _environment ) {
    
}

void ted_screen_rows( Environment * _environment, char * _rows ) {

    MAKE_LABEL

    outline1("LDA %s", _rows);
    outline0("CMP #24");
    outline1("BEQ %s", label);
    outline0("LDA $FF06" );
    outline0("ORA #%00001000");
    outline0("STA $FF06" );
    outline1("JMP %s_2", label);
    outhead1("%s:", label );
    outline0("LDA $FF06" );
    outline0("AND #%11110111");
    outline0("STA $FF06" );
    outline1("JMP %s_2", label);
    outhead1("%s_2:", label );

}

void ted_sprite_data_from( Environment * _environment, char * _sprite, char * _address ) {

}

void ted_sprite_enable( Environment * _environment, char * _sprite ) {

}

void ted_sprite_disable( Environment * _environment, char * _sprite ) {

}

void ted_sprite_at( Environment * _environment, char * _sprite, char * _x, char * _y ) {

}

void ted_sprite_expand_vertical( Environment * _environment, char * _sprite ) {

}

void ted_sprite_expand_horizontal( Environment * _environment, char * _sprite ) {

}

void ted_sprite_compress_vertical( Environment * _environment, char * _sprite ) {

}

void ted_sprite_compress_horizontal( Environment * _environment, char * _sprite ) {

}

void ted_sprite_multicolor( Environment * _environment, char * _sprite ) {

}

void ted_sprite_monocolor( Environment * _environment, char * _sprite ) {

}

void ted_sprite_color( Environment * _environment, char * _sprite, char * _color ) {

}

void ted_tiles_at( Environment * _environment, char * _address ) {

}

void ted_vertical_scroll( Environment * _environment, char * _displacement ) {

    outline0("LDA $FF06" );
    outline0("AND #%11111000");
    outline1("ORA %s", _displacement );
    outline0("STA $FF06" );

}

void ted_horizontal_scroll( Environment * _environment, char * _displacement ) {

    outline0("LDA $FF07" );
    outline0("AND #%11111000");
    outline1("ORA %s", _displacement );
    outline0("STA $FF07" );

}

void ted_busy_wait( Environment * _environment, char * _timing ) {

    MAKE_LABEL

    outline0("LDA #$00");
    outline0("STA TMPPTR");
    outhead1("%sfirst:", label );
    outline0("LDA #$01");
    outhead1("%ssecond:", label );
    outline0("CMP $FF1D");
    outline1("BNE %ssecond", label);
    outhead1("%sthird:", label );
    outline0("CMP $FF1D");
    outline1("BEQ %sthird", label);
    outline0("INC TMPPTR");
    outline0("LDA TMPPTR");
    outline1("CMP %s", _timing );
    outline1("BNE %sfirst", label );

}

void ted_get_width( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTWIDTH" );
    outline1("STA %s", _result );
    outline0("LDA CURRENTWIDTH+1" );
    outline1("STA %s+1", _result );

}

void ted_tiles_get( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILES" );
    outline1("STA %s", _result );

}

void ted_tiles_get_width( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILESWIDTH" );
    outline1("STA %s", _result );

}

void ted_get_height( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTHEIGHT" );
    outline1("STA %s", _result );
    outline0("LDA CURRENTHEIGHT+1" );
    outline1("STA %s+1", _result );

}

void ted_tiles_get_height( Environment * _environment, char *_result ) {

    outline0("LDA CURRENTTILESHEIGHT" );
    outline1("STA %s", _result );

}

void ted_cls( Environment * _environment ) {
    
    deploy( cls, src_hw_ted_cls_asm );

    outline0("JSR CLS");

}

void ted_scroll_text( Environment * _environment, int _direction ) {

    deploy( vScrollText, src_hw_ted_vscroll_text_asm );

    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA DIRECTION" );

    outline0("JSR VSCROLLT");

}

void ted_text( Environment * _environment, char * _text, char * _text_size ) {

    deploy( tedvars, src_hw_ted_vars_asm );
    deploy( vScrollText, src_hw_ted_vscroll_text_asm );
    deploy( cls, src_hw_ted_cls_asm );
    deploy( textEncodedAt, src_hw_ted_text_at_asm );

    outline1("LDA %s", _text);
    outline0("STA TEXTPTR" );
    outline1("LDA %s+1", _text);
    outline0("STA TEXTPTR+1" );
    outline1("LDA %s", _text_size);
    outline0("STA TEXTSIZE" );

    if ( _environment->currentMode == 2 || _environment->currentMode == 3 ) {
        deploy( textEncodedAtGraphic, src_hw_ted_text_at_graphic_asm );
        outline0("JSR TEXTATBITMAPMODE");
    } else {
        deploy( textEncodedAtText, src_hw_ted_text_at_text_asm );
        outline0("JSR TEXTATTILEMODE");
    }

}

void ted_initialization( Environment * _environment ) {

    deploy( tedvars, src_hw_ted_vars_asm );
    deploy( tedstartup, src_hw_ted_startup_asm );
    src_hw_chipset_mob_asm = src_hw_ted_mob_asm;
    src_hw_chipset_mob_asm_len = src_hw_ted_mob_asm_len;

    variable_import( _environment, "CURRENTWIDTH", VT_POSITION );
    variable_global( _environment, "CURRENTWIDTH" );
    variable_import( _environment, "CURRENTHEIGHT", VT_POSITION  );
    variable_global( _environment, "CURRENTHEIGHT" );
    variable_import( _environment, "CURRENTTILESWIDTH", VT_BYTE );
    variable_global( _environment, "CURRENTTILESWIDTH" );
    variable_import( _environment, "CURRENTTILESHEIGHT", VT_BYTE );
    variable_global( _environment, "CURRENTTILESHEIGHT" );
    variable_import( _environment, "FONTWIDTH", VT_BYTE );
    variable_global( _environment, "FONTWIDTH" );
    variable_import( _environment, "FONTHEIGHT", VT_BYTE );
    variable_global( _environment, "FONTHEIGHT" );

    SCREEN_MODE_DEFINE( BITMAP_MODE_STANDARD, 1, 320, 200, 2, "Standard Bitmap Mode" );
    SCREEN_MODE_DEFINE( BITMAP_MODE_MULTICOLOR, 1, 160, 200, 4, "Multicolor Bitmap Mode"  );
    SCREEN_MODE_DEFINE( TILEMAP_MODE_STANDARD, 0, 40, 25, 2, "Standard Character Mode" );
    SCREEN_MODE_DEFINE( TILEMAP_MODE_EXTENDED, 0, 40, 25, 20, "Extended Multicolor Character Mode" );

    outline0("JSR TEDSTARTUP");

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

    ted_cls( _environment );

    _environment->currentRgbConverterFunction = rgbConverterFunction;
    _environment->screenShades = 16;

}

void ted_finalization( Environment * _environment ) {

}

void ted_hscroll_line( Environment * _environment, int _direction ) {

    deploy( textHScroll, src_hw_ted_hscroll_text_asm );

    Variable * y = variable_retrieve( _environment, "YCURSYS" );
    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA DIRECTION" );
    outline1("LDA %s", y->realName );
    outline0("STA CLINEY");

    outline0("JSR HSCROLLLT");

}

void ted_hscroll_screen( Environment * _environment, int _direction ) {

    deploy( textHScroll, src_hw_ted_hscroll_text_asm );

    outline1("LDA #$%2.2x", ( _direction & 0xff ) );
    outline0("STA DIRECTION" );

    outline0("JSR HSCROLLST");
}

void ted_back( Environment * _environment ) {

    deploy( back, src_hw_ted_back_asm );

    outline0("JSR BACK");

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
        case BITMAP_MODE_STANDARD:

            return 2 + ( ( _width >> 3 ) * _height ) + ( ( _width >> 3 ) * ( _height >> 3 ) );

        case BITMAP_MODE_MULTICOLOR:

            return 2 + ( ( _width >> 2 ) * _height ) + 2 * ( ( _width >> 2 ) * ( _height >> 3 ) ) + 2;

        case TILEMAP_MODE_STANDARD:
        case TILEMAP_MODE_MULTICOLOR:
        case TILEMAP_MODE_EXTENDED:
            break;
    }

    CRITICAL_IMAGE_CONVERTER_UNSUPPORTED_MODE( _mode );

}

static Variable * ted_image_converter_bitmap_mode_standard( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

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
 
    int bufferSize = calculate_image_size( _environment, _frame_width, _frame_height, BITMAP_MODE_STANDARD );
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

            // Calculate the relative tile
            tile_y = (image_y >> 3);
            tile_x = (image_x >> 3);
            
            // Calculate the offset starting from the tile surface area
            // and the bit to set.
            offset = (tile_y * 8 *( _frame_width >> 3 ) ) + (tile_x * 8) + (image_y & 0x07);
            bitmask = 1 << ( 7 - (image_x & 0x7) );

            // If the pixes has enough luminance value, it must be 
            // considered as "on"; otherwise, it is "off".
            // int luminance = calculate_luminance(rgb);

            if ( i == 1 ) {
                *( buffer + offset + 2) |= bitmask;
            } else {
                *( buffer + offset + 2) &= ~bitmask;
            }

            offset = tile_y * ( _frame_width >> 3 ) + tile_x;
            *( buffer + 2 + ( ( _frame_width >> 3 ) * _frame_height ) + offset ) = ( palette[1].index << 4 ) | palette[0].index; 

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;

    }

    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    return result;

}


static Variable * ted_image_converter_multicolor_mode_standard( Environment * _environment, char * _source, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _transparent_color, int _flags ) {

    image_converter_asserts( _environment, _width, _height, _offset_x, _offset_y, &_frame_width, &_frame_height );

    RGBi palette[MAX_PALETTE];

    int colorUsed = rgbi_extract_palette(_source, _width, _height, palette, MAX_PALETTE);

    if (colorUsed > 4) {
        CRITICAL_IMAGE_CONVERTER_TOO_COLORS( colorUsed );
    }

    int i, j, k;

    for( i=0; i<colorUsed; ++i ) {
        int minDistance = 0xffff;
        int colorIndex = 0;
        for (j = 0; j < sizeof(SYSTEM_PALETTE)/sizeof(RGBi); ++j) {
            int distance = rgbi_distance(&SYSTEM_PALETTE[j], &palette[i]);
            //printf("%d <-> %d [%d] = %d [min = %d]\n", i, j, SYSTEM_PALETTE[j].index, distance, minDistance );
            if (distance < minDistance) {
                //printf(" candidated...\n" );
                for( k=0; k<i; ++k ) {
                    if ( palette[k].index == SYSTEM_PALETTE[j].index ) {
                        //printf(" ...used!\n" );
                        break;
                    }
                }
                if ( k>=i ) {
                    //printf(" ...ok! (%d)\n", SYSTEM_PALETTE[j].index );
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
 
    int bufferSize = calculate_image_size( _environment, _frame_width, _frame_height, BITMAP_MODE_MULTICOLOR );
    
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

    _source += ( ( _offset_y * _frame_width ) + _offset_x ) * 3;

    // Loop for all the source surface.
    for (image_y = 0; image_y < _frame_height; ++image_y) {
        for (image_x = 0; image_x < _frame_width; ++image_x) {

            // Take the color of the pixel
            rgb.red = *_source;
            rgb.green = *(_source + 1);
            rgb.blue = *(_source + 2);

            // Calculate the relative tile
            tile_y = (image_y >> 3);
            tile_x = (image_x >> 2);

            // Calculate the offset starting from the tile surface area
            // and the bit to set.
            offset = (tile_y * 8 *( _frame_width >> 2 ) ) + (tile_x * 8) + (image_y & 0x07);
            offsetc = (tile_y * ( _frame_width >> 2 ) ) + (tile_x);

            int minDistance = 0xffff;
            int colorIndex = 0;

            for( i=0; i<colorUsed; ++i ) {
                if ( rgbi_equals_rgb( &palette[i], &rgb ) ) {
                    break;
                }
            }

            colorIndex = i;

            bitmask = colorIndex << (6 - ((image_x & 0x3) * 2));

            switch( colorIndex ) {
                case 0:
                    *(buffer + 2 + ( ( _frame_width >> 2 ) * _frame_height ) + 2 * ( _frame_width >> 2 ) * ( _frame_height >> 3 ) ) = palette[colorIndex].index;
                    break;
                case 1:
                case 2:
                    *(buffer + 2 + ( ( _frame_width >> 2 ) * _frame_height ) + offsetc ) |= ( ( palette[1].index & 0xf0 ) << 4 ) | ( ( palette[2].index & 0xf0 ) );
                    *(buffer + 2 + ( ( _frame_width >> 2 ) * _frame_height ) + ( _frame_width >> 2 ) * ( _frame_height >> 3 ) + offsetc ) |= ( ( palette[1].index & 0x0f ) ) | ( ( palette[2].index & 0x0f ) >> 4 );
                    break;
                case 3:
                    *(buffer + 2 + ( ( _frame_width >> 2 ) * _frame_height ) + 2 * ( _frame_width >> 2 ) * ( _frame_height >> 3 ) + 1 ) = palette[colorIndex].index;
                    break;
            }

            *(buffer + 2 + offset) |= bitmask;

            _source += 3;

        }

        _source += ( _width - _frame_width ) * 3;
        // printf("\n" );

    }

    variable_store_buffer( _environment, result->name, buffer, bufferSize, 0 );

    return result;

}

Variable * ted_image_converter( Environment * _environment, char * _data, int _width, int _height, int _offset_x, int _offset_y, int _frame_width, int _frame_height, int _mode, int _transparent_color, int _flags ) {

    switch( _mode ) {
        case BITMAP_MODE_STANDARD:

            return ted_image_converter_bitmap_mode_standard( _environment, _data, _width, _height, _offset_x, _offset_y, _frame_width, _frame_height, _transparent_color, _flags );

        case BITMAP_MODE_MULTICOLOR:

            return ted_image_converter_multicolor_mode_standard( _environment, _data, _width, _height, _offset_x, _offset_y, _frame_width, _frame_height, _transparent_color, _flags );

        case TILEMAP_MODE_STANDARD:
        case TILEMAP_MODE_MULTICOLOR:
        case TILEMAP_MODE_EXTENDED:
            break;
    }

    CRITICAL_IMAGE_CONVERTER_UNSUPPORTED_MODE( _mode );

}

void ted_put_image( Environment * _environment, char * _image, char * _x, char * _y, char * _frame, int _frame_size, int _flags ) {

    deploy( tedvars, src_hw_ted_vars_asm);
    deploy( putimage, src_hw_ted_put_image_asm );

    outline1("LDA #$%2.2x", _flags );
    outline0("STA IMAGET" );
    outline1("LDA #<%s", _image );
    outline0("STA TMPPTR" );
    outline1("LDA #>%s", _image );
    outline0("STA TMPPTR+1" );
    if ( _frame ) {
        outline0("CLC" );
        outline0("LDA TMPPTR" );
        outline0("ADC #2" );
        outline0("STA TMPPTR" );
        outline0("LDA TMPPTR+1" );
        outline0("ADC #0" );
        outline0("STA TMPPTR+1" );
        if ( strlen(_frame) == 0 ) {

        } else {
            outline1("LDA #<OFFSETS%4.4x", _frame_size );
            outline0("STA TMPPTR2" );
            outline1("LDA #>OFFSETS%4.4x", _frame_size );
            outline0("STA TMPPTR2+1" );
            outline0("CLC" );
            outline1("LDA %s", _frame );
            outline0("ASL" );
            outline0("TAY" );
            outline0("LDA TMPPTR" );
            outline0("ADC (TMPPTR2), Y" );
            outline0("STA TMPPTR" );
            outline0("INY" );
            outline0("LDA TMPPTR+1" );
            outline0("ADC (TMPPTR2), Y" );
            outline0("STA TMPPTR+1" );
        }
    }
    outline1("LDA %s", _x );
    outline0("STA IMAGEX" );
    outline1("LDA %s+1", _x );
    outline0("STA IMAGEX+1" );
    outline1("LDA %s", _y );
    outline0("STA IMAGEY" );
    outline1("LDA %s+1", _y );
    outline0("STA IMAGEY+1" );

    outline0("JSR PUTIMAGE");

}

void ted_wait_vbl( Environment * _environment ) {

    deploy( vbl, src_hw_ted_vbl_asm);

    outline0("JSR VBL");

}

Variable * ted_new_image( Environment * _environment, int _width, int _height, int _mode ) {

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

void ted_get_image( Environment * _environment, char * _image, char * _x, char * _y ) {

    deploy( tedvars, src_hw_ted_vars_asm);
    deploy( getimage, src_hw_ted_get_image_asm );

    outline1("LDA #<%s", _image );
    outline0("STA TMPPTR" );
    outline1("LDA #>%s", _image );
    outline0("STA TMPPTR+1" );
    outline1("LDA %s", _x );
    outline0("STA IMAGEX" );
    outline1("LDA %s+1", _x );
    outline0("STA IMAGEX+1" );
    outline1("LDA %s", _y );
    outline0("STA IMAGEY" );
    outline1("LDA %s+1", _y );
    outline0("STA IMAGEY+1" );

    outline0("JSR GETIMAGE");

}

#endif