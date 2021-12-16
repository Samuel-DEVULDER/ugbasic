#ifndef __UGBC_CPU6502__
#define __UGBC_CPU6502__

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

#include "../ugbc.h"

void cpu6502_beq( Environment * _environment, char * _label );
void cpu6502_bneq( Environment * _environment, char * _label );
void cpu6502_busy_wait( Environment * _environment, char * _timing );
void cpu6502_bveq( Environment * _environment, char * _value, char * _label );
void cpu6502_bvneq( Environment * _environment, char * _value, char * _label );
void cpu6502_combine_nibbles( Environment * _environment, char * _low_nibble, char * _hi_nibble, char * _byte );
void cpu6502_compare_16bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _positive );
void cpu6502_compare_32bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _positive );
void cpu6502_compare_8bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _positive );
void cpu6502_compare_and_branch_16bit_const( Environment * _environment, char *_source, int _destination,  char *_name, int _positive );
void cpu6502_compare_and_branch_32bit_const( Environment * _environment, char *_source, int _destination,  char *_name, int _positive );
void cpu6502_compare_and_branch_8bit_const( Environment * _environment, char *_source, int _destination,  char *_name, int _positive );
void cpu6502_di( Environment * _environment );
void cpu6502_ei( Environment * _environment );
void cpu6502_inc( Environment * _environment, char * _variable );
void cpu6502_inc_16bit( Environment * _environment, char * _variable );
void cpu6502_inc_32bit( Environment * _environment, char * _variable );
void cpu6502_dec( Environment * _environment, char * _variable );
void cpu6502_dec_16bit( Environment * _environment, char * _variable );
void cpu6502_less_than_16bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_less_than_32bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_less_than_8bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_greater_than_16bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_greater_than_32bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_greater_than_8bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _equal, int _signed );
void cpu6502_fill( Environment * _environment, char * _address, char * _blocks, char * _pattern );
void cpu6502_fill_size( Environment * _environment, char * _address, int _bytes, char * _pattern );
void cpu6502_fill_size_value( Environment * _environment, char * _address, int _bytes, int _pattern );
void cpu6502_fill_direct( Environment * _environment, char * _address, char * _blocks, char * _pattern );
void cpu6502_fill_direct_size( Environment * _environment, char * _address, int _bytes, char * _pattern );
void cpu6502_fill_direct_size_value( Environment * _environment, char * _address, int _bytes, int _pattern );
void cpu6502_fill_blocks( Environment * _environment, char * _address, char * _blocks, char * _pattern );
void cpu6502_halt( Environment * _environment );
void cpu6502_end( Environment * _environment );
void cpu6502_jump( Environment * _environment, char * _label );
void cpu6502_call( Environment * _environment, char * _label );
void cpu6502_pop( Environment * _environment );
void cpu6502_return( Environment * _environment );
void cpu6502_label( Environment * _environment, char * _label );
void cpu6502_limit_16bit( Environment * _environment, char * _variable, int _value );
void cpu6502_logical_and_8bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_logical_or_8bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_logical_not_8bit( Environment * _environment, char * _value, char * _result );
void cpu6502_and_8bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_is_negative( Environment * _environment, char * _value, char * _result );
void cpu6502_or_8bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_not_8bit( Environment * _environment, char * _value, char * _result );
void cpu6502_and_16bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_or_16bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_not_16bit( Environment * _environment, char * _value, char * _result );
void cpu6502_and_32bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_or_32bit( Environment * _environment, char * _left, char * _right, char * _result );
void cpu6502_not_32bit( Environment * _environment, char * _value, char * _result );
void cpu6502_math_add_16bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_add_16bit_with_16bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_add_16bit_with_8bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_add_32bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_add_8bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_and_const_16bit( Environment * _environment, char *_source, int _mask );
void cpu6502_math_and_const_32bit( Environment * _environment, char *_source, int _mask );
void cpu6502_math_and_const_8bit( Environment * _environment, char *_source, int _mask );
void cpu6502_math_complement_const_16bit( Environment * _environment, char *_source, int _value );
void cpu6502_math_complement_const_32bit( Environment * _environment, char *_source, int _value );
void cpu6502_math_complement_const_8bit( Environment * _environment, char *_source, int _value );
void cpu6502_math_div2_8bit( Environment * _environment, char *_source, int _steps, int _signed );
void cpu6502_math_div2_const_16bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_div2_const_32bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_div2_const_8bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_double_16bit( Environment * _environment, char *_source, char *_name, int _signed );
void cpu6502_math_double_32bit( Environment * _environment, char *_source, char *_name, int _signed );
void cpu6502_math_double_8bit( Environment * _environment, char *_source, char *_name, int _signed );
void cpu6502_math_mul_16bit_to_32bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _signed );
void cpu6502_math_mul_8bit_to_16bit( Environment * _environment, char *_source, char *_destination,  char *_name, int _signed );
void cpu6502_math_div_32bit_to_16bit( Environment * _environment, char *_source, char *_destination,  char *_other, char * _other_remainder, int _signed );
void cpu6502_math_div_16bit_to_16bit( Environment * _environment, char *_source, char *_destination,  char *_other, char * _other_remainder, int _signed );
void cpu6502_math_div_8bit_to_8bit( Environment * _environment, char *_source, char *_destination,  char *_other, char * _other_remainder, int _signed );
void cpu6502_math_mul2_const_16bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_mul2_const_32bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_mul2_const_8bit( Environment * _environment, char *_source, int _value, int _signed );
void cpu6502_math_sub_16bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_sub_32bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_sub_8bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_math_sub_16bit_with_8bit( Environment * _environment, char *_source, char *_destination,  char *_name );
void cpu6502_move_16bit( Environment * _environment, char *_source, char *_destination );
void cpu6502_addressof_16bit( Environment * _environment, char *_source, char *_destination );
void cpu6502_move_32bit( Environment * _environment, char *_source, char *_destination );
void cpu6502_move_8bit( Environment * _environment, char *_source, char *_destination );
void cpu6502_peek( Environment * _environment, char * _address, char * _target );
void cpu6502_poke( Environment * _environment, char * _address, char * _value );
void cpu6502_random( Environment * _environment, char * _entropy );
void cpu6502_random_16bit( Environment * _environment, char * _entropy, char * _result );
void cpu6502_random_32bit( Environment * _environment, char * _entropy, char * _result );
void cpu6502_random_8bit( Environment * _environment, char * _entropy, char * _result );
void cpu6502_store_16bit( Environment * _environment, char *_source, int _value );
void cpu6502_store_32bit( Environment * _environment, char *_source, int _value );
void cpu6502_store_8bit( Environment * _environment, char *_source, int _value );
void cpu6502_mem_move( Environment * _environment, char *_source, char *_destination,  char *_size );
void cpu6502_mem_move_direct( Environment * _environment, char *_source, char *_destination,  char *_size );
void cpu6502_mem_move_size( Environment * _environment, char *_source, char *_destination, int _size );
void cpu6502_mem_move_direct_size( Environment * _environment, char *_source, char *_destination, int _size );
void cpu6502_mem_move_direct_indirect_size( Environment * _environment, char *_source, char *_destination, int _size );
void cpu6502_compare_memory( Environment * _environment, char *_source, char *_destination, char *_size, char *_result, int _equal );
void cpu6502_compare_memory_size( Environment * _environment, char *_source, char *_destination, int _size, char *_result, int _equal );
void cpu6502_less_than_memory( Environment * _environment, char *_source, char *_destination, char *_size, char *_result, int _equal );
void cpu6502_less_than_memory_size( Environment * _environment, char *_source, char *_destination, int _size, char *_result, int _equal );
void cpu6502_greater_than_memory( Environment * _environment, char *_source, char *_destination, char *_size, char *_result, int _equal );
void cpu6502_greater_than_memory_size( Environment * _environment, char *_source, char *_destination, int _size, char *_result, int _equal );
void cpu6502_uppercase( Environment * _environment, char *_source, char *_size, char *_result );
void cpu6502_lowercase( Environment * _environment, char *_source, char *_size, char *_result );
void cpu6502_convert_string_into_16bit( Environment * _environment, char * _string, char * _len, char * _value );
void cpu6502_fill_indirect( Environment * _environment, char * _address, char * _size, char * _pattern );
void cpu6502_flip( Environment * _environment, char * _source, char * _size, char * _destination );
void cpu6502_move_8bit_indirect( Environment * _environment, char *_source, char * _value );
void cpu6502_move_8bit_indirect2( Environment * _environment, char * _value, char *_source );
void cpu6502_move_16bit_indirect( Environment * _environment, char *_source, char * _value );
void cpu6502_move_16bit_indirect2( Environment * _environment, char * _value, char *_source );
void cpu6502_move_32bit_indirect( Environment * _environment, char *_source, char * _value );
void cpu6502_move_32bit_indirect2( Environment * _environment, char * _value, char *_source );
void cpu6502_bit_check( Environment * _environment, char * _value, int _position, char *_result, int _bitwidth );
void cpu6502_bit_check_extended( Environment * _environment, char * _value, char * _position, char *_result, int _bitwidth );
void cpu6502_number_to_string( Environment * _environment, char * _number, char * _string, char * _string_size, int _bits, int _Signed );
void cpu6502_bits_to_string( Environment * _environment, char * _number, char * _string, char * _string_size, int _bits );
void cpu6502_hex_to_string( Environment * _environment, char * _number, char * _string, char * _string_size, int _bits );
void cpu6502_move_8bit_indirect_with_offset2( Environment * _environment, char *_source, char * _value, char * _offset );
void cpu6502_dsdefine( Environment * _environment, char * _string, char * _index );
void cpu6502_dsalloc( Environment * _environment, char * _size, char * _index );
void cpu6502_dsfree( Environment * _environment, char * _index );
void cpu6502_dswrite( Environment * _environment, char * _index );
void cpu6502_dsresize( Environment * _environment, char * _index, char * _size );
void cpu6502_dsresize_size( Environment * _environment, char * _index, int _size );
void cpu6502_dsgc( Environment * _environment );
void cpu6502_dsdescriptor( Environment * _environment, char * _index, char * _address, char * _size );
void cpu6502_move_8bit_indirect_with_offset( Environment * _environment, char *_source, char * _value, int _offset );
void cpu6502_move_8bit_with_offset2( Environment * _environment, char *_source, char * _value, char * _offset );
void cpu6502_store_8bit_with_offset( Environment * _environment, char *_destination, int _value, int _offset );
void cpu6502_dsalloc_size( Environment * _environment, int _size, char * _index );
void cpu6502_complement2_8bit( Environment * _environment, char * _source, char * _destination );
void cpu6502_complement2_16bit( Environment * _environment, char * _source, char * _destination );
void cpu6502_complement2_32bit( Environment * _environment, char * _source, char * _destination );
void cpu6502_mobinit( Environment * _environment, char * _index, char *_x, char *_y, char *_draw);
void cpu6502_mobshow( Environment * _environment, char * _index );
void cpu6502_mobhide( Environment * _environment, char * _index );
void cpu6502_mobat( Environment * _environment, char * _index, char *_x, char *_y );
void cpu6502_mobrender( Environment * _environment, int _on_vbl );
void cpu6502_mobcount( Environment * _environment, char * _index );
void cpu6502_sqroot( Environment * _environment, char * _number, char * _result );
void cpu6502_dstring_vars( Environment * _environment );

void cpu6502_protothread_vars( Environment * _environment );
void cpu6502_protothread_loop( Environment * _environment );
void cpu6502_protothread_register_at( Environment * _environment, char * _index, char * _label );
void cpu6502_protothread_register( Environment * _environment, char * _label, char * _index );
void cpu6502_protothread_unregister( Environment * _environment, char * _index );
void cpu6502_protothread_save( Environment * _environment, char * _index, int _step );
void cpu6502_protothread_restore( Environment * _environment, char * _index, char * _step );
void cpu6502_protothread_set_state( Environment * _environment, char * _index, int _state );
void cpu6502_protothread_get_state( Environment * _environment, char * _index, char * _state );
void cpu6502_protothread_current( Environment * _environment, char * _current );

#define cpu_beq( _environment,  _label  ) cpu6502_beq( _environment,  _label  )
#define cpu_bneq( _environment,  _label  ) cpu6502_beq( _environment,  _label  )
#define cpu_busy_wait( _environment,  _timing  ) cpu6502_busy_wait( _environment,  _timing  )
#define cpu_bveq( _environment,  _value,  _label  ) cpu6502_bveq( _environment,  _value,  _label  )
#define cpu_bvneq( _environment,  _value,  _label  ) cpu6502_bvneq( _environment,  _value,  _label  )
#define cpu_combine_nibbles( _environment,  _low_nibble,  _hi_nibble,  _byte  ) cpu6502_combine_nibbles( _environment,  _low_nibble,  _hi_nibble,  _byte  )
#define cpu_compare_16bit( _environment, _source, _destination, _name, _positive ) cpu6502_compare_16bit( _environment, _source, _destination, _name, _positive )
#define cpu_compare_32bit( _environment, _source, _destination, _name, _positive ) cpu6502_compare_32bit( _environment, _source, _destination, _name, _positive )
#define cpu_compare_8bit( _environment, _source, _destination, _name, _positive ) cpu6502_compare_8bit( _environment, _source, _destination, _name, _positive )
#define cpu_compare_and_branch_16bit_const( _environment, _source, _destination, _name, _positive ) cpu6502_compare_and_branch_16bit_const( _environment, _source, _destination, _name, _positive )
#define cpu_compare_and_branch_32bit_const( _environment, _source, _destination, _name, _positive ) cpu6502_compare_and_branch_32bit_const( _environment, _source, _destination, _name, _positive )
#define cpu_compare_and_branch_8bit_const( _environment, _source, _destination, _name, _positive ) cpu6502_compare_and_branch_8bit_const( _environment, _source, _destination, _name, _positive )
#define cpu_di( _environment ) cpu6502_di( _environment )
#define cpu_ei( _environment ) cpu6502_ei( _environment )
#define cpu_inc( _environment, _variable ) cpu6502_inc( _environment, _variable );
#define cpu_inc_16bit( _environment, _variable ) cpu6502_inc_16bit( _environment, _variable )
#define cpu_inc_32bit( _environment, _variable ) cpu6502_inc_32bit( _environment, _variable )
#define cpu_dec( _environment, _variable ) cpu6502_dec( _environment, _variable );
#define cpu_dec_16bit( _environment, _variable ) cpu6502_dec_16bit( _environment, _variable );
#define cpu_less_than_16bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_less_than_16bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_less_than_32bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_less_than_32bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_less_than_8bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_less_than_8bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_greater_than_16bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_greater_than_16bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_greater_than_32bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_greater_than_32bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_greater_than_8bit( _environment, _source, _destination, _name, _equal, _signed ) cpu6502_greater_than_8bit( _environment, _source, _destination, _name, _equal, _signed )
#define cpu_fill( _environment,  _address,  _blocks,  _pattern  ) cpu6502_fill( _environment,  _address,  _blocks,  _pattern  )
#define cpu_fill_size( _environment,  _address,  _bytes,  _pattern  ) cpu6502_fill_size( _environment,  _address,  _bytes,  _pattern  )
#define cpu_fill_size_value( _environment,  _address,  _bytes,  _pattern  ) cpu6502_fill_size_value( _environment,  _address,  _bytes,  _pattern  )
#define cpu_fill_direct( _environment,  _address,  _blocks,  _pattern  ) cpu6502_fill_direct( _environment,  _address,  _blocks,  _pattern  )
#define cpu_fill_direct_size( _environment,  _address,  _bytes,  _pattern  ) cpu6502_fill_direct_size( _environment,  _address,  _bytes,  _pattern  )
#define cpu_fill_direct_size_value( _environment,  _address,  _bytes,  _pattern  ) cpu6502_fill_direct_size_value( _environment,  _address,  _bytes,  _pattern  )
#define cpu_fill_blocks( _environment,  _address,  _blocks,  _pattern  ) cpu6502_fill_blocks( _environment,  _address,  _blocks,  _pattern  )
#define cpu_halt( _environment  ) cpu6502_halt( _environment  )
#define cpu_end( _environment  ) cpu6502_end( _environment  )
#define cpu_jump( _environment,  _label  ) cpu6502_jump( _environment,  _label  )
#define cpu_call( _environment,  _label  ) cpu6502_call( _environment,  _label  )
#define cpu_return( _environment  ) cpu6502_return( _environment )
#define cpu_pop( _environment  ) cpu6502_pop( _environment )
#define cpu_label( _environment,  _label  ) cpu6502_label( _environment,  _label  )
#define cpu_limit_16bit( _environment,  _variable, _value  ) cpu6502_limit_16bit( _environment,  _variable, _value  )
#define cpu_logical_not_8bit( _environment, _value, _result ) cpu6502_logical_not_8bit( _environment, _value, _result )
#define cpu_logical_and_8bit( _environment, _left, _right,  _result ) cpu6502_logical_and_8bit( _environment, _left, _right,  _result )
#define cpu_logical_or_8bit( _environment, _left, _right,  _result ) cpu6502_logical_or_8bit( _environment, _left, _right,  _result )
#define cpu_not_8bit( _environment, _value, _result ) cpu6502_not_8bit( _environment, _value, _result )
#define cpu_is_negative( _environment, _value, _result ) cpu6502_is_negative( _environment, _value, _result )
#define cpu_and_8bit( _environment, _left, _right,  _result ) cpu6502_and_8bit( _environment, _left, _right,  _result )
#define cpu_or_8bit( _environment, _left, _right,  _result ) cpu6502_or_8bit( _environment, _left, _right,  _result )
#define cpu_not_16bit( _environment, _value, _result ) cpu6502_not_16bit( _environment, _value, _result )
#define cpu_and_16bit( _environment, _left, _right,  _result ) cpu6502_and_16bit( _environment, _left, _right,  _result )
#define cpu_or_16bit( _environment, _left, _right,  _result ) cpu6502_or_16bit( _environment, _left, _right,  _result )
#define cpu_not_32bit( _environment, _value, _result ) cpu6502_not_32bit( _environment, _value, _result )
#define cpu_and_32bit( _environment, _left, _right,  _result ) cpu6502_and_32bit( _environment, _left, _right,  _result )
#define cpu_or_32bit( _environment, _left, _right,  _result ) cpu6502_or_32bit( _environment, _left, _right,  _result )
#define cpu_math_add_16bit( _environment, _source, _destination,  _name  ) cpu6502_math_add_16bit( _environment, _source, _destination,  _name  )
#define cpu_math_add_16bit_with_16bit( _environment, _source, _destination,  _name  ) cpu6502_math_add_16bit_with_16bit( _environment, _source, _destination,  _name  )
#define cpu_math_add_16bit_with_8bit( _environment, _source, _destination,  _name  ) cpu6502_math_add_16bit_with_8bit( _environment, _source, _destination,  _name  )
#define cpu_math_add_32bit( _environment, _source, _destination,  _name  ) cpu6502_math_add_32bit( _environment, _source, _destination,  _name  )
#define cpu_math_add_8bit( _environment, _source, _destination,  _name  ) cpu6502_math_add_8bit( _environment, _source, _destination,  _name  )
#define cpu_math_add_16bit_with_8bit( _environment, _source, _destination, _name ) cpu6502_math_add_16bit_with_8bit( _environment, _source, _destination, _name )
#define cpu_math_and_const_16bit( _environment, _source, _mask  ) cpu6502_math_and_const_16bit( _environment, _source, _mask  )
#define cpu_math_and_const_32bit( _environment, _source, _mask  ) cpu6502_math_and_const_32bit( _environment, _source, _mask  )
#define cpu_math_and_const_8bit( _environment, _source, _mask  ) cpu6502_math_and_const_8bit( _environment, _source, _mask  )
#define cpu_math_complement_const_16bit( _environment, _source, _value  ) cpu6502_math_complement_const_16bit( _environment, _source, _value  )
#define cpu_math_complement_const_32bit( _environment, _source, _value  ) cpu6502_math_complement_const_32bit( _environment, _source, _value  )
#define cpu_math_complement_const_8bit( _environment, _source, _value  ) cpu6502_math_complement_const_8bit( _environment, _source, _value  )
#define cpu_math_div2_8bit( _environment, _source, _steps, _signed  ) cpu6502_math_div2_8bit( _environment, _source, _steps, _signed  )
#define cpu_math_div2_const_16bit( _environment, _source, _value, _signed  ) cpu6502_math_div2_const_16bit( _environment, _source, _value, _signed  )
#define cpu_math_div2_const_32bit( _environment, _source, _value, _signed  ) cpu6502_math_div2_const_32bit( _environment, _source, _value, _signed  )
#define cpu_math_div2_const_8bit( _environment, _source, _value, _signed  ) cpu6502_math_div2_const_8bit( _environment, _source, _value, _signed  )
#define cpu_math_double_16bit( _environment, _source, _name, _signed  ) cpu6502_math_double_16bit( _environment, _source, _name, _signed  )
#define cpu_math_double_32bit( _environment, _source, _name, _signed  ) cpu6502_math_double_32bit( _environment, _source, _name, _signed  )
#define cpu_math_double_8bit( _environment, _source, _name, _signed  ) cpu6502_math_double_8bit( _environment, _source, _name, _signed  )
#define cpu_math_mul_16bit_to_32bit( _environment, _source, _destination,  _name, _signed  ) cpu6502_math_mul_16bit_to_32bit( _environment, _source, _destination,  _name, _signed  )
#define cpu_math_mul_8bit_to_16bit( _environment, _source, _destination,  _name, _signed  ) cpu6502_math_mul_8bit_to_16bit( _environment, _source, _destination,  _name, _signed  )
#define cpu_math_div_32bit_to_16bit( _environment, _source, _destination,  _other, _other_remainder, _signed  ) cpu6502_math_div_32bit_to_16bit( _environment, _source, _destination, _other, _other_remainder, _signed )
#define cpu_math_div_16bit_to_16bit( _environment, _source, _destination,  _other, _other_remainder, _signed  ) cpu6502_math_div_16bit_to_16bit( _environment, _source, _destination, _other, _other_remainder, _signed )
#define cpu_math_div_8bit_to_8bit( _environment, _source, _destination,   _other, _other_remainder, _signed  ) cpu6502_math_div_8bit_to_8bit( _environment, _source, _destination,  _other, _other_remainder, _signed )
#define cpu_math_mul2_const_16bit( _environment, _source, _value, _signed  ) cpu6502_math_mul2_const_16bit( _environment, _source, _value, _signed  )
#define cpu_math_mul2_const_32bit( _environment, _source, _value, _signed  ) cpu6502_math_mul2_const_32bit( _environment, _source, _value, _signed  )
#define cpu_math_mul2_const_8bit( _environment, _source, _value, _signed  ) cpu6502_math_mul2_const_8bit( _environment, _source, _value, _signed  )
#define cpu_math_sub_16bit( _environment, _source, _destination,  _name  ) cpu6502_math_sub_16bit( _environment, _source, _destination,  _name  )
#define cpu_math_sub_32bit( _environment, _source, _destination,  _name  ) cpu6502_math_sub_32bit( _environment, _source, _destination,  _name  )
#define cpu_math_sub_8bit( _environment, _source, _destination,  _name  ) cpu6502_math_sub_8bit( _environment, _source, _destination,  _name  )
#define cpu_math_sub_16bit_with_8bit( _environment, _source, _destination,  _name  ) cpu6502_math_sub_16bit_with_8bit( _environment, _source, _destination,  _name  )
#define cpu_move_16bit( _environment, _source, _destination  ) cpu6502_move_16bit( _environment, _source, _destination  )
#define cpu_addressof_16bit( _environment, _source, _destination  ) cpu6502_addressof_16bit( _environment, _source, _destination  )
#define cpu_move_32bit( _environment, _source, _destination  ) cpu6502_move_32bit( _environment, _source, _destination  )
#define cpu_move_8bit( _environment, _source, _destination  ) cpu6502_move_8bit( _environment, _source, _destination  )
#define cpu_peek( _environment,  _address,  _target  ) cpu6502_peek( _environment,  _address,  _target  )
#define cpu_poke( _environment,  _address,  _value  ) cpu6502_poke( _environment,  _address,  _value  )
#define cpu_random( _environment,  _entropy  ) cpu6502_random( _environment,  _entropy  )
#define cpu_random_16bit( _environment,  _entropy,  _result  ) cpu6502_random_16bit( _environment,  _entropy,  _result  )
#define cpu_random_32bit( _environment,  _entropy,  _result  ) cpu6502_random_32bit( _environment,  _entropy,  _result  )
#define cpu_random_8bit( _environment,  _entropy,  _result  ) cpu6502_random_8bit( _environment,  _entropy,  _result  )
#define cpu_store_16bit( _environment, _source, _value  ) cpu6502_store_16bit( _environment, _source, _value  )
#define cpu_store_32bit( _environment, _source, _value  ) cpu6502_store_32bit( _environment, _source, _value  )
#define cpu_store_8bit( _environment, _source, _value  ) cpu6502_store_8bit( _environment, _source, _value  )
#define cpu_mem_move( _environment, _source, _destination, _size ) cpu6502_mem_move( _environment, _source, _destination, _size )
#define cpu_mem_move_direct( _environment, _source, _destination, _size ) cpu6502_mem_move_direct( _environment, _source, _destination, _size )
#define cpu_mem_move_size( _environment, _source, _destination, _size ) cpu6502_mem_move_size( _environment, _source, _destination, _size )
#define cpu_mem_move_direct_size( _environment, _source, _destination, _size ) cpu6502_mem_move_direct_size( _environment, _source, _destination, _size )
#define cpu_mem_move_direct_indirect_size( _environment, _source, _destination, _size ) cpu6502_mem_move_direct_indirect_size( _environment, _source, _destination, _size )
#define cpu_compare_memory( _environment, _source, _destination, _size, _result, _equal ) cpu6502_compare_memory( _environment, _source, _destination, _size, _result, _equal )
#define cpu_compare_memory_size( _environment, _source, _destination, _size, _result, _equal ) cpu6502_compare_memory_size( _environment, _source, _destination, _size, _result, _equal )
#define cpu_less_than_memory( _environment, _source, _destination, _size, _result, _equal ) cpu6502_less_than_memory( _environment, _source, _destination, _size, _result, _equal )
#define cpu_less_than_memory_size( _environment, _source, _destination, _size, _result, _equal ) cpu6502_less_than_memory_size( _environment, _source, _destination, _size, _result, _equal )
#define cpu_greater_than_memory( _environment, _source, _destination, _size, _result, _equal ) cpu6502_greater_than_memory( _environment, _source, _destination, _size, _result, _equal )
#define cpu_greater_than_memory_size( _environment, _source, _destination, _size, _result, _equal ) cpu6502_greater_than_memory_size( _environment, _source, _destination, _size, _result, _equal )
#define cpu_uppercase( _environment, _source, _size, _result ) cpu6502_uppercase( _environment, _source, _size, _result )
#define cpu_lowercase( _environment, _source, _size, _result ) cpu6502_lowercase( _environment, _source, _size, _result )
#define cpu_convert_string_into_16bit( _environment, _string, _len, _value ) cpu6502_convert_string_into_16bit( _environment, _string, _len, _value )
#define cpu_fill_indirect( _environment, _address, _size, _pattern ) cpu6502_fill_indirect( _environment, _address, _size,  _pattern )
#define cpu_flip( _environment, _source, _size, _destination ) cpu6502_flip( _environment, _source, _size, _destination )
#define cpu_move_8bit_indirect( _environment, _source, _value ) cpu6502_move_8bit_indirect( _environment, _source, _value )
#define cpu_move_8bit_indirect2( _environment, _value, _source ) cpu6502_move_8bit_indirect2( _environment, _value, _source )
#define cpu_move_16bit_indirect( _environment, _source, _value ) cpu6502_move_16bit_indirect( _environment, _source, _value )
#define cpu_move_16bit_indirect2( _environment, _value, _source ) cpu6502_move_16bit_indirect2( _environment, _value, _source )
#define cpu_move_32bit_indirect( _environment, _source, _value ) cpu6502_move_32bit_indirect( _environment, _source, _value )
#define cpu_move_32bit_indirect2( _environment, _value, _source ) cpu6502_move_32bit_indirect2( _environment, _value, _source )
#define cpu_bit_check( _environment, _value, _position, _result, _bitwidth ) cpu6502_bit_check( _environment, _value, _position, _result, _bitwidth )
#define cpu_number_to_string( _environment, _number, _string, _string_size, _bits, _signed ) cpu6502_number_to_string( _environment, _number, _string, _string_size, _bits, _signed )
#define cpu_bits_to_string( _environment, _number, _string, _string_size, _bits ) cpu6502_bits_to_string( _environment, _number, _string, _string_size, _bits )
#define cpu_hex_to_string( _environment, _number, _string, _string_size, _bits ) cpu6502_hex_to_string( _environment, _number, _string, _string_size, _bits )
#define cpu_bit_check_extended( _environment, _value, _position, _result, _bitwidth ) cpu6502_bit_check_extended( _environment, _value, _position, _result, _bitwidth )
#define cpu_move_8bit_indirect_with_offset2( _environment, _source, _value, _offset ) cpu6502_move_8bit_indirect_with_offset2( _environment, _source, _value, _offset )
#define cpu_dsdefine( _environment, _string, _index ) cpu6502_dsdefine( _environment, _string, _index )
#define cpu_dsalloc( _environment, _size, _index ) cpu6502_dsalloc( _environment, _size, _index )
#define cpu_dsfree( _environment, _index ) cpu6502_dsfree( _environment, _index )
#define cpu_dswrite( _environment, _index ) cpu6502_dswrite( _environment, _index )
#define cpu_dsresize( _environment, _index, _size ) cpu6502_dsresize( _environment, _index, _size )
#define cpu_dsresize_size( _environment, _index, _size ) cpu6502_dsresize_size( _environment, _index, _size )
#define cpu_dsgc( _environment ) cpu6502_dsgc( _environment )
#define cpu_dsdescriptor( _environment, _index, _address, _size ) cpu6502_dsdescriptor( _environment, _index, _address, _size )
#define cpu_move_8bit_indirect_with_offset( _environment, _source, _value, _offset ) cpu6502_move_8bit_indirect_with_offset( _environment, _source, _value, _offset )
#define cpu_move_8bit_with_offset2( _environment, _source, _value, _offset ) cpu6502_move_8bit_with_offset2( _environment, _source, _value, _offset )
#define cpu_store_8bit_with_offset( _environment, _destination, _value, _offset ) cpu6502_store_8bit_with_offset( _environment, _destination, _value, _offset )
#define cpu_dsalloc_size( _environment, _size, _index ) cpu6502_dsalloc_size( _environment, _size, _index )
#define cpu_complement2_8bit( _environment, _source, _destination ) cpu6502_complement2_8bit( _environment, _source, _destination )
#define cpu_complement2_16bit( _environment, _source, _destination ) cpu6502_complement2_16bit( _environment, _source, _destination )
#define cpu_complement2_32bit( _environment, _source, _destination ) cpu6502_complement2_32bit( _environment, _source, _destination )

extern char * src_hw_chipset_mob_asm;
extern unsigned int src_hw_chipset_mob_asm_len;

#define cpu_mobinit( _environment, _index, _x, _y, _draw ) cpu6502_mobinit( _environment, _index, _x, _y, _draw )
#define cpu_mobshow( _environment, _index ) cpu6502_mobshow( _environment, _index )
#define cpu_mobhide( _environment, _index ) cpu6502_mobhide( _environment, _index )
#define cpu_mobat( _environment, _index, _x, _y ) cpu6502_mobat( _environment, _index, _x, _y )
#define cpu_mobrender( _environment, _on_vbl ) cpu6502_mobrender( _environment, _on_vbl )
#define cpu_sqroot( _environment, _number, _result ) cpu6502_sqroot( _environment, _number, _result )
#define cpu_mobcount( _environment, _index ) cpu6502_mobcount( _environment, _index )

#define cpu_dstring_vars( _environment ) cpu6502_dstring_vars( _environment )
#define cpu_protothread_vars( _environment ) cpu6502_protothread_vars( _environment )

#define cpu_protothread_loop( _environment ) cpu6502_protothread_loop( _environment )
#define cpu_protothread_register( _environment, _label, _index ) cpu6502_protothread_register( _environment, _label, _index )
#define cpu_protothread_register_at( _environment, _index, _label ) cpu6502_protothread_register_at( _environment, _index, _label )
#define cpu_protothread_unregister(_environment, _index ) cpu6502_protothread_unregister(_environment, _index )
#define cpu_protothread_save( _environment, _index, _step ) cpu6502_protothread_save( _environment, _index, _step )
#define cpu_protothread_restore( _environment, _index, _step ) cpu6502_protothread_restore( _environment, _index, _step )
#define cpu_protothread_set_state( _environment, _index, _state ) cpu6502_protothread_set_state( _environment, _index, _state )
#define cpu_protothread_get_state( _environment, _index, _state ) cpu6502_protothread_get_state( _environment, _index, _state )
#define cpu_protothread_current( _environment, _current ) cpu6502_protothread_current( _environment, _current )

#define     CPU_LITTLE_ENDIAN      1

#endif