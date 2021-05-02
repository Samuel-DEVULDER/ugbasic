/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/ugbc.y"


#include "../src/ugbc.h"

int yylex();
int yyerror(Environment *, const char *);
int yydebug=0;
int errors=0;
extern int yylineno;

int yywrap() { return 1; }
 

#line 85 "src-generated/ugbc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ugbc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Remark = 3,                     /* Remark  */
  YYSYMBOL_NewLine = 4,                    /* NewLine  */
  YYSYMBOL_SEMICOLON = 5,                  /* SEMICOLON  */
  YYSYMBOL_COLON = 6,                      /* COLON  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_PLUS = 8,                       /* PLUS  */
  YYSYMBOL_MINUS = 9,                      /* MINUS  */
  YYSYMBOL_INCREMENT = 10,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 11,                 /* DECREMENT  */
  YYSYMBOL_EQUAL = 12,                     /* EQUAL  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LTE = 15,                       /* LTE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_GTE = 17,                       /* GTE  */
  YYSYMBOL_DISEQUAL = 18,                  /* DISEQUAL  */
  YYSYMBOL_MULTIPLICATION = 19,            /* MULTIPLICATION  */
  YYSYMBOL_DOLLAR = 20,                    /* DOLLAR  */
  YYSYMBOL_RASTER = 21,                    /* RASTER  */
  YYSYMBOL_DONE = 22,                      /* DONE  */
  YYSYMBOL_AT = 23,                        /* AT  */
  YYSYMBOL_COLOR = 24,                     /* COLOR  */
  YYSYMBOL_BORDER = 25,                    /* BORDER  */
  YYSYMBOL_WAIT = 26,                      /* WAIT  */
  YYSYMBOL_NEXT = 27,                      /* NEXT  */
  YYSYMBOL_WITH = 28,                      /* WITH  */
  YYSYMBOL_BANK = 29,                      /* BANK  */
  YYSYMBOL_SPRITE = 30,                    /* SPRITE  */
  YYSYMBOL_DATA = 31,                      /* DATA  */
  YYSYMBOL_FROM = 32,                      /* FROM  */
  YYSYMBOL_OP = 33,                        /* OP  */
  YYSYMBOL_CP = 34,                        /* CP  */
  YYSYMBOL_ENABLE = 35,                    /* ENABLE  */
  YYSYMBOL_DISABLE = 36,                   /* DISABLE  */
  YYSYMBOL_HALT = 37,                      /* HALT  */
  YYSYMBOL_ECM = 38,                       /* ECM  */
  YYSYMBOL_BITMAP = 39,                    /* BITMAP  */
  YYSYMBOL_SCREEN = 40,                    /* SCREEN  */
  YYSYMBOL_ON = 41,                        /* ON  */
  YYSYMBOL_OFF = 42,                       /* OFF  */
  YYSYMBOL_ROWS = 43,                      /* ROWS  */
  YYSYMBOL_VERTICAL = 44,                  /* VERTICAL  */
  YYSYMBOL_SCROLL = 45,                    /* SCROLL  */
  YYSYMBOL_VAR = 46,                       /* VAR  */
  YYSYMBOL_AS = 47,                        /* AS  */
  YYSYMBOL_TEMPORARY = 48,                 /* TEMPORARY  */
  YYSYMBOL_XPEN = 49,                      /* XPEN  */
  YYSYMBOL_YPEN = 50,                      /* YPEN  */
  YYSYMBOL_PEEK = 51,                      /* PEEK  */
  YYSYMBOL_GOTO = 52,                      /* GOTO  */
  YYSYMBOL_HORIZONTAL = 53,                /* HORIZONTAL  */
  YYSYMBOL_MCM = 54,                       /* MCM  */
  YYSYMBOL_COMPRESS = 55,                  /* COMPRESS  */
  YYSYMBOL_EXPAND = 56,                    /* EXPAND  */
  YYSYMBOL_LOOP = 57,                      /* LOOP  */
  YYSYMBOL_REPEAT = 58,                    /* REPEAT  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_TEXT = 60,                      /* TEXT  */
  YYSYMBOL_TILES = 61,                     /* TILES  */
  YYSYMBOL_COLORMAP = 62,                  /* COLORMAP  */
  YYSYMBOL_SELECT = 63,                    /* SELECT  */
  YYSYMBOL_MONOCOLOR = 64,                 /* MONOCOLOR  */
  YYSYMBOL_MULTICOLOR = 65,                /* MULTICOLOR  */
  YYSYMBOL_COLLISION = 66,                 /* COLLISION  */
  YYSYMBOL_IF = 67,                        /* IF  */
  YYSYMBOL_THEN = 68,                      /* THEN  */
  YYSYMBOL_HIT = 69,                       /* HIT  */
  YYSYMBOL_BACKGROUND = 70,                /* BACKGROUND  */
  YYSYMBOL_TO = 71,                        /* TO  */
  YYSYMBOL_RANDOM = 72,                    /* RANDOM  */
  YYSYMBOL_BYTE = 73,                      /* BYTE  */
  YYSYMBOL_WORD = 74,                      /* WORD  */
  YYSYMBOL_POSITION = 75,                  /* POSITION  */
  YYSYMBOL_CODE = 76,                      /* CODE  */
  YYSYMBOL_VARIABLES = 77,                 /* VARIABLES  */
  YYSYMBOL_MS = 78,                        /* MS  */
  YYSYMBOL_CYCLES = 79,                    /* CYCLES  */
  YYSYMBOL_S = 80,                         /* S  */
  YYSYMBOL_HASH = 81,                      /* HASH  */
  YYSYMBOL_WIDTH = 82,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 83,                    /* HEIGHT  */
  YYSYMBOL_DWORD = 84,                     /* DWORD  */
  YYSYMBOL_PEN = 85,                       /* PEN  */
  YYSYMBOL_CLEAR = 86,                     /* CLEAR  */
  YYSYMBOL_BEG = 87,                       /* BEG  */
  YYSYMBOL_END = 88,                       /* END  */
  YYSYMBOL_GAMELOOP = 89,                  /* GAMELOOP  */
  YYSYMBOL_ENDIF = 90,                     /* ENDIF  */
  YYSYMBOL_UP = 91,                        /* UP  */
  YYSYMBOL_DOWN = 92,                      /* DOWN  */
  YYSYMBOL_LEFT = 93,                      /* LEFT  */
  YYSYMBOL_RIGHT = 94,                     /* RIGHT  */
  YYSYMBOL_DEBUG = 95,                     /* DEBUG  */
  YYSYMBOL_AND = 96,                       /* AND  */
  YYSYMBOL_RANDOMIZE = 97,                 /* RANDOMIZE  */
  YYSYMBOL_GRAPHIC = 98,                   /* GRAPHIC  */
  YYSYMBOL_TEXTMAP = 99,                   /* TEXTMAP  */
  YYSYMBOL_POINT = 100,                    /* POINT  */
  YYSYMBOL_GOSUB = 101,                    /* GOSUB  */
  YYSYMBOL_RETURN = 102,                   /* RETURN  */
  YYSYMBOL_POP = 103,                      /* POP  */
  YYSYMBOL_OR = 104,                       /* OR  */
  YYSYMBOL_ELSE = 105,                     /* ELSE  */
  YYSYMBOL_NOT = 106,                      /* NOT  */
  YYSYMBOL_TRUE = 107,                     /* TRUE  */
  YYSYMBOL_FALSE = 108,                    /* FALSE  */
  YYSYMBOL_DO = 109,                       /* DO  */
  YYSYMBOL_EXIT = 110,                     /* EXIT  */
  YYSYMBOL_WEND = 111,                     /* WEND  */
  YYSYMBOL_UNTIL = 112,                    /* UNTIL  */
  YYSYMBOL_FOR = 113,                      /* FOR  */
  YYSYMBOL_STEP = 114,                     /* STEP  */
  YYSYMBOL_EVERY = 115,                    /* EVERY  */
  YYSYMBOL_MID = 116,                      /* MID  */
  YYSYMBOL_INSTR = 117,                    /* INSTR  */
  YYSYMBOL_UPPER = 118,                    /* UPPER  */
  YYSYMBOL_LOWER = 119,                    /* LOWER  */
  YYSYMBOL_STR = 120,                      /* STR  */
  YYSYMBOL_VAL = 121,                      /* VAL  */
  YYSYMBOL_STRING = 122,                   /* STRING  */
  YYSYMBOL_SPACE = 123,                    /* SPACE  */
  YYSYMBOL_MILLISECOND = 124,              /* MILLISECOND  */
  YYSYMBOL_MILLISECONDS = 125,             /* MILLISECONDS  */
  YYSYMBOL_TICKS = 126,                    /* TICKS  */
  YYSYMBOL_BLACK = 127,                    /* BLACK  */
  YYSYMBOL_WHITE = 128,                    /* WHITE  */
  YYSYMBOL_RED = 129,                      /* RED  */
  YYSYMBOL_CYAN = 130,                     /* CYAN  */
  YYSYMBOL_VIOLET = 131,                   /* VIOLET  */
  YYSYMBOL_GREEN = 132,                    /* GREEN  */
  YYSYMBOL_BLUE = 133,                     /* BLUE  */
  YYSYMBOL_YELLOW = 134,                   /* YELLOW  */
  YYSYMBOL_ORANGE = 135,                   /* ORANGE  */
  YYSYMBOL_BROWN = 136,                    /* BROWN  */
  YYSYMBOL_LIGHT = 137,                    /* LIGHT  */
  YYSYMBOL_DARK = 138,                     /* DARK  */
  YYSYMBOL_GREY = 139,                     /* GREY  */
  YYSYMBOL_GRAY = 140,                     /* GRAY  */
  YYSYMBOL_MAGENTA = 141,                  /* MAGENTA  */
  YYSYMBOL_PURPLE = 142,                   /* PURPLE  */
  YYSYMBOL_LAVENDER = 143,                 /* LAVENDER  */
  YYSYMBOL_GOLD = 144,                     /* GOLD  */
  YYSYMBOL_TURQUOISE = 145,                /* TURQUOISE  */
  YYSYMBOL_TAN = 146,                      /* TAN  */
  YYSYMBOL_PINK = 147,                     /* PINK  */
  YYSYMBOL_PEACH = 148,                    /* PEACH  */
  YYSYMBOL_OLIVE = 149,                    /* OLIVE  */
  YYSYMBOL_Identifier = 150,               /* Identifier  */
  YYSYMBOL_String = 151,                   /* String  */
  YYSYMBOL_Integer = 152,                  /* Integer  */
  YYSYMBOL_YYACCEPT = 153,                 /* $accept  */
  YYSYMBOL_direct_integer = 154,           /* direct_integer  */
  YYSYMBOL_random_definition_simple = 155, /* random_definition_simple  */
  YYSYMBOL_random_definition = 156,        /* random_definition  */
  YYSYMBOL_color_enumeration = 157,        /* color_enumeration  */
  YYSYMBOL_expression = 158,               /* expression  */
  YYSYMBOL_expressions_raw = 159,          /* expressions_raw  */
  YYSYMBOL_expressions = 160,              /* expressions  */
  YYSYMBOL_position = 161,                 /* position  */
  YYSYMBOL_bank_definition_simple = 162,   /* bank_definition_simple  */
  YYSYMBOL_bank_definition_with_payload = 163, /* bank_definition_with_payload  */
  YYSYMBOL_bank_definition = 164,          /* bank_definition  */
  YYSYMBOL_raster_definition_simple = 165, /* raster_definition_simple  */
  YYSYMBOL_raster_definition_expression = 166, /* raster_definition_expression  */
  YYSYMBOL_raster_definition = 167,        /* raster_definition  */
  YYSYMBOL_next_raster_definition_simple = 168, /* next_raster_definition_simple  */
  YYSYMBOL_next_raster_definition_expression = 169, /* next_raster_definition_expression  */
  YYSYMBOL_next_raster_definition = 170,   /* next_raster_definition  */
  YYSYMBOL_color_definition_simple = 171,  /* color_definition_simple  */
  YYSYMBOL_color_definition_expression = 172, /* color_definition_expression  */
  YYSYMBOL_color_definition = 173,         /* color_definition  */
  YYSYMBOL_milliseconds = 174,             /* milliseconds  */
  YYSYMBOL_wait_definition_simple = 175,   /* wait_definition_simple  */
  YYSYMBOL_wait_definition_expression = 176, /* wait_definition_expression  */
  YYSYMBOL_wait_definition = 177,          /* wait_definition  */
  YYSYMBOL_sprite_definition_simple = 178, /* sprite_definition_simple  */
  YYSYMBOL_sprite_definition_expression = 179, /* sprite_definition_expression  */
  YYSYMBOL_sprite_definition = 180,        /* sprite_definition  */
  YYSYMBOL_bitmap_definition_simple = 181, /* bitmap_definition_simple  */
  YYSYMBOL_bitmap_definition_expression = 182, /* bitmap_definition_expression  */
  YYSYMBOL_bitmap_definition = 183,        /* bitmap_definition  */
  YYSYMBOL_textmap_definition_simple = 184, /* textmap_definition_simple  */
  YYSYMBOL_textmap_definition_expression = 185, /* textmap_definition_expression  */
  YYSYMBOL_textmap_definition = 186,       /* textmap_definition  */
  YYSYMBOL_text_definition_simple = 187,   /* text_definition_simple  */
  YYSYMBOL_text_definition = 188,          /* text_definition  */
  YYSYMBOL_tiles_definition_simple = 189,  /* tiles_definition_simple  */
  YYSYMBOL_tiles_definition_expression = 190, /* tiles_definition_expression  */
  YYSYMBOL_tiles_definition = 191,         /* tiles_definition  */
  YYSYMBOL_colormap_definition_simple = 192, /* colormap_definition_simple  */
  YYSYMBOL_colormap_definition_expression = 193, /* colormap_definition_expression  */
  YYSYMBOL_colormap_definition = 194,      /* colormap_definition  */
  YYSYMBOL_screen_definition_simple = 195, /* screen_definition_simple  */
  YYSYMBOL_screen_definition_expression = 196, /* screen_definition_expression  */
  YYSYMBOL_screen_definition = 197,        /* screen_definition  */
  YYSYMBOL_var_definition_simple = 198,    /* var_definition_simple  */
  YYSYMBOL_goto_definition = 199,          /* goto_definition  */
  YYSYMBOL_gosub_definition = 200,         /* gosub_definition  */
  YYSYMBOL_var_definition = 201,           /* var_definition  */
  YYSYMBOL_point_definition_simple = 202,  /* point_definition_simple  */
  YYSYMBOL_point_definition_expression = 203, /* point_definition_expression  */
  YYSYMBOL_point_definition = 204,         /* point_definition  */
  YYSYMBOL_on_goto_definition = 205,       /* on_goto_definition  */
  YYSYMBOL_206_1 = 206,                    /* $@1  */
  YYSYMBOL_on_gosub_definition = 207,      /* on_gosub_definition  */
  YYSYMBOL_208_2 = 208,                    /* $@2  */
  YYSYMBOL_on_definition = 209,            /* on_definition  */
  YYSYMBOL_210_3 = 210,                    /* $@3  */
  YYSYMBOL_211_4 = 211,                    /* $@4  */
  YYSYMBOL_every_definition = 212,         /* every_definition  */
  YYSYMBOL_statement = 213,                /* statement  */
  YYSYMBOL_214_5 = 214,                    /* $@5  */
  YYSYMBOL_statements_no_linenumbers = 215, /* statements_no_linenumbers  */
  YYSYMBOL_216_6 = 216,                    /* $@6  */
  YYSYMBOL_statements_with_linenumbers = 217, /* statements_with_linenumbers  */
  YYSYMBOL_218_7 = 218,                    /* $@7  */
  YYSYMBOL_statements_complex = 219,       /* statements_complex  */
  YYSYMBOL_program = 220,                  /* program  */
  YYSYMBOL_221_8 = 221                     /* $@8  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  153
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  576

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   407


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    68,    71,    74,    77,    80,    83,    86,
      91,    96,   100,   104,   108,   112,   116,   120,   124,   128,
     132,   136,   140,   144,   148,   152,   156,   160,   164,   168,
     172,   176,   180,   184,   188,   192,   196,   200,   206,   209,
     212,   216,   223,   227,   231,   235,   239,   243,   246,   249,
     252,   255,   258,   261,   264,   267,   270,   273,   276,   279,
     282,   285,   288,   291,   294,   297,   300,   303,   306,   309,
     312,   316,   320,   326,   327,   330,   334,   338,   342,   346,
     349,   352,   355,   358,   361,   367,   371,   371,   374,   377,
     380,   383,   386,   389,   393,   396,   399,   402,   406,   409,
     412,   415,   419,   422,   425,   428,   434,   437,   440,   443,
     446,   451,   452,   455,   458,   463,   466,   471,   472,   475,
     478,   483,   486,   491,   492,   495,   498,   501,   506,   509,
     512,   517,   518,   521,   522,   523,   526,   529,   532,   537,
     540,   543,   549,   550,   553,   556,   559,   562,   565,   568,
     571,   574,   577,   580,   583,   586,   589,   592,   595,   600,
     603,   606,   609,   612,   615,   618,   621,   624,   627,   630,
     633,   636,   639,   642,   647,   648,   651,   654,   657,   660,
     663,   669,   672,   678,   679,   682,   687,   692,   693,   696,
     699,   704,   707,   712,   717,   718,   721,   724,   727,   732,
     735,   741,   742,   745,   748,   751,   754,   757,   762,   765,
     768,   773,   774,   776,   777,   780,   783,   786,   791,   798,
     801,   807,   810,   816,   819,   825,   830,   831,   834,   838,
     838,   843,   847,   847,   852,   852,   855,   855,   860,   863,
     866,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   888,   891,   894,   897,
     900,   903,   906,   906,   911,   914,   917,   920,   923,   926,
     929,   932,   935,   938,   941,   944,   947,   950,   953,   956,
     959,   960,   961,   962,   963,   966,   969,   972,   975,   978,
     981,   984,   987,   996,  1005,  1008,  1009,  1013,  1014,  1014,
    1018,  1018,  1025,  1026,  1027,  1028,  1032,  1032
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Remark", "NewLine",
  "SEMICOLON", "COLON", "COMMA", "PLUS", "MINUS", "INCREMENT", "DECREMENT",
  "EQUAL", "ASSIGN", "LT", "LTE", "GT", "GTE", "DISEQUAL",
  "MULTIPLICATION", "DOLLAR", "RASTER", "DONE", "AT", "COLOR", "BORDER",
  "WAIT", "NEXT", "WITH", "BANK", "SPRITE", "DATA", "FROM", "OP", "CP",
  "ENABLE", "DISABLE", "HALT", "ECM", "BITMAP", "SCREEN", "ON", "OFF",
  "ROWS", "VERTICAL", "SCROLL", "VAR", "AS", "TEMPORARY", "XPEN", "YPEN",
  "PEEK", "GOTO", "HORIZONTAL", "MCM", "COMPRESS", "EXPAND", "LOOP",
  "REPEAT", "WHILE", "TEXT", "TILES", "COLORMAP", "SELECT", "MONOCOLOR",
  "MULTICOLOR", "COLLISION", "IF", "THEN", "HIT", "BACKGROUND", "TO",
  "RANDOM", "BYTE", "WORD", "POSITION", "CODE", "VARIABLES", "MS",
  "CYCLES", "S", "HASH", "WIDTH", "HEIGHT", "DWORD", "PEN", "CLEAR", "BEG",
  "END", "GAMELOOP", "ENDIF", "UP", "DOWN", "LEFT", "RIGHT", "DEBUG",
  "AND", "RANDOMIZE", "GRAPHIC", "TEXTMAP", "POINT", "GOSUB", "RETURN",
  "POP", "OR", "ELSE", "NOT", "TRUE", "FALSE", "DO", "EXIT", "WEND",
  "UNTIL", "FOR", "STEP", "EVERY", "MID", "INSTR", "UPPER", "LOWER", "STR",
  "VAL", "STRING", "SPACE", "MILLISECOND", "MILLISECONDS", "TICKS",
  "BLACK", "WHITE", "RED", "CYAN", "VIOLET", "GREEN", "BLUE", "YELLOW",
  "ORANGE", "BROWN", "LIGHT", "DARK", "GREY", "GRAY", "MAGENTA", "PURPLE",
  "LAVENDER", "GOLD", "TURQUOISE", "TAN", "PINK", "PEACH", "OLIVE",
  "Identifier", "String", "Integer", "$accept", "direct_integer",
  "random_definition_simple", "random_definition", "color_enumeration",
  "expression", "expressions_raw", "expressions", "position",
  "bank_definition_simple", "bank_definition_with_payload",
  "bank_definition", "raster_definition_simple",
  "raster_definition_expression", "raster_definition",
  "next_raster_definition_simple", "next_raster_definition_expression",
  "next_raster_definition", "color_definition_simple",
  "color_definition_expression", "color_definition", "milliseconds",
  "wait_definition_simple", "wait_definition_expression",
  "wait_definition", "sprite_definition_simple",
  "sprite_definition_expression", "sprite_definition",
  "bitmap_definition_simple", "bitmap_definition_expression",
  "bitmap_definition", "textmap_definition_simple",
  "textmap_definition_expression", "textmap_definition",
  "text_definition_simple", "text_definition", "tiles_definition_simple",
  "tiles_definition_expression", "tiles_definition",
  "colormap_definition_simple", "colormap_definition_expression",
  "colormap_definition", "screen_definition_simple",
  "screen_definition_expression", "screen_definition",
  "var_definition_simple", "goto_definition", "gosub_definition",
  "var_definition", "point_definition_simple",
  "point_definition_expression", "point_definition", "on_goto_definition",
  "$@1", "on_gosub_definition", "$@2", "on_definition", "$@3", "$@4",
  "every_definition", "statement", "$@5", "statements_no_linenumbers",
  "$@6", "statements_with_linenumbers", "$@7", "statements_complex",
  "program", "$@8", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407
};
#endif

#define YYPACT_NINF (-200)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-233)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -200,    91,   494,  -200,  -200,   -15,  -200,    54,   912,     2,
     -21,   912,  -200,     9,    66,  1019,   -90,  -124,  -200,  -200,
    -200,    62,    97,   -16,  1019,    37,    48,  -200,   113,   115,
    1019,  -200,  -200,   127,   129,   -87,  -200,  -200,    89,  -200,
     -64,  -200,  1019,    11,   805,   130,    72,  -200,   154,   158,
     161,  -200,   912,   143,  -200,  -200,  -200,   912,   912,   912,
    -200,  -200,  -200,   685,  -200,  -200,   134,   135,   136,    -2,
      19,   139,   140,  1019,  -200,  -200,   144,   145,   146,   147,
     148,   149,   150,   151,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,    56,  -200,  -200,   -43,   -46,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,    57,   166,  -200,  -200,   -25,
    -200,    21,  -200,   -20,  -200,  -200,  -200,   -14,   109,   -12,
      -9,    -5,    -3,   168,  -200,  -200,  -200,   182,   188,  -200,
    -200,  -200,   912,  -200,  -200,   164,  -200,  -200,  -200,  -200,
    -200,   912,   159,   162,  -200,  -200,  -200,   -40,  -200,    23,
    -200,  -200,  -200,  -200,  -200,  1019,  -200,  -200,  -200,  -200,
     912,  -200,  -200,  -200,   912,   186,  -200,  -200,  -200,   152,
    -200,  -200,  1019,  1019,  -200,   912,  -200,  -200,  -200,   189,
    -200,  -200,  -200,  -200,  -200,  -200,  1019,  1019,  -200,  -200,
    -200,   202,  -200,  -200,    95,  -200,  1019,  -200,  1019,   212,
     595,  -200,   494,   494,   199,   200,   912,  -200,  -200,   163,
     165,   169,   171,   205,   211,   214,   215,   216,   217,   912,
     912,   912,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  1019,  1019,  -200,  1019,  1019,  1019,  1019,  1019,
    1019,  1019,  1019,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  1019,  1019,
    1019,  1019,  1019,  1019,  1019,  1019,  1019,  1019,  1019,  -200,
    -200,  -200,   912,   210,  -200,  -200,  -200,   207,   109,   232,
     109,   233,   109,   235,   109,   236,   109,  -200,   109,   228,
    -200,  -200,    60,    76,   -28,    69,  -200,  -200,  -200,   229,
    1019,   243,  -200,  -200,    84,    99,    70,    74,  -200,  -200,
     244,  -200,  -200,   912,  -200,  -200,   912,   912,  -200,  -200,
     237,   126,  -200,  -200,  -200,  -200,  -200,   912,  -200,   272,
     273,  -200,  -200,   912,   213,   276,  1019,   183,   278,  -200,
    1019,  -200,   595,  -200,  -200,   137,   141,  -200,  -200,   109,
    1019,   109,  1019,   155,   156,   157,   160,   167,  -200,   252,
     259,   261,   263,   265,   266,   294,   296,   297,   303,   277,
     279,   280,   281,   310,   284,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,   292,   293,   912,    26,
    -200,   109,  -200,   109,  -200,   109,  -200,   109,    47,  -200,
     109,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,   109,
    -200,  1019,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    1019,  -200,  -200,  -200,  -200,  -200,  -200,   174,   178,   180,
     318,   291,   295,  1019,  1019,   326,   327,  -200,   -75,   264,
     190,  1019,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  1019,  1019,  1019,  1019,  -200,  -200,  -200,  -200,  1019,
    -200,   192,   194,  -200,  -200,  -200,  -200,  -200,  -200,   317,
    -200,   319,  -200,   187,    35,  -200,   339,  -200,   341,   342,
    -200,   343,  -200,   338,   912,   109,  1019,   320,   321,   109,
    1019,  -200,  -200,  1019,  -200,     8,   322,   323,    17,    42,
     324,  -200,  -200,   201,   209,  -200,   325,  -200,   334,  -200,
     109,  1019,   356,   357,  1019,  -200,  -200,  -200,  -200,   352,
     353,   333,   335,   254,  1019,   358,  -200,  -200,  1019,  -200,
    1019,  -200,  -200,  -200,  -200,   219,   221,   340,   344,   174,
     178,  -200,  1019,  1019,  -200,  -200,  1019,   345,  1019,   346,
     347,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
     360,  -200,  -200,  -200,  1019,  -200
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     306,     0,   296,     1,   295,     0,   286,     0,     0,   274,
       0,     0,   279,     0,     0,     0,   213,     0,   261,   265,
     262,     0,     0,     0,     0,     0,     0,   259,     0,     0,
       0,   255,   278,     0,     0,     0,   284,   285,   257,   260,
     267,   264,     0,     0,     0,     0,     0,   300,   297,   302,
     304,   307,     0,     0,   117,   118,   242,     0,     0,     0,
     131,   132,   244,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    23,    28,    29,    30,
      31,    32,    33,    36,    37,     0,    38,    41,    40,     0,
      47,    73,    85,     0,   142,   143,   245,     0,     0,     0,
       0,     0,     0,     0,   111,   112,   241,     0,     0,   174,
     175,   246,     0,   177,   178,   179,   183,   184,   247,   203,
     204,     0,     0,     0,   211,   212,   252,     0,   280,     0,
     223,   254,   219,   220,   281,     0,   189,   190,   191,   249,
       0,   194,   195,   250,     0,   197,   201,   202,   251,     0,
     276,   277,     0,     0,   294,     0,   187,   188,   248,     0,
     226,   227,   253,   221,   222,   282,     0,     0,   269,   270,
     266,     0,   239,   240,     0,   283,     0,   291,     0,     0,
     296,   298,   296,   296,     0,     0,     0,   125,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     3,     4,     6,     8,     9,     5,    10,
      68,     2,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    21,    24,    25,    26,    27,    22,
      35,    39,   133,   136,   134,   135,   137,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
     140,   141,     0,     0,   123,   124,   243,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
     149,   150,     0,     0,     0,     0,   146,   145,    86,     0,
       0,     0,   164,   165,     0,     0,     0,     0,   161,   160,
       0,   176,   181,     0,   205,   208,     0,     0,   234,   236,
       0,     0,   263,   192,   193,   196,   199,     0,   256,     0,
       0,   185,   186,     0,     0,   268,     0,     0,     0,   292,
       0,   301,   296,   303,   305,     0,     0,   113,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    79,    81,    82,
      83,    84,    80,    76,    77,    78,     0,     0,     0,     0,
      93,     0,   105,     0,    97,     0,   101,     0,    89,   147,
       0,   154,   153,   158,   157,   152,   156,   151,   155,     0,
     162,     0,   169,   168,   173,   172,   167,   171,   166,   170,
       0,   180,   182,   206,   209,   207,   210,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,   258,     0,     0,
       0,     0,   293,   299,   114,   116,   127,   130,   126,   129,
      46,    42,    43,    45,    44,    48,    49,    52,    53,    54,
      55,     0,     0,     0,     0,    62,    63,    64,    67,     0,
      65,     0,     0,   119,   121,    90,   103,    95,    98,    92,
     104,    96,   100,     0,     0,   144,     0,   159,     0,   228,
     235,   231,   237,   215,     0,     0,     0,     0,     0,     0,
       0,   271,   272,     0,   238,     0,     0,     0,     0,     0,
       0,   120,   122,     0,     0,   106,    91,   102,    94,    99,
       0,     0,     0,     0,     0,   216,   217,   198,   200,     0,
       0,     0,     0,   273,     0,     0,    56,    57,     0,    58,
       0,    60,    66,   108,   110,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   224,   225,     0,     0,     0,     0,
       0,   107,   109,   148,   163,   230,   233,   287,   288,   275,
       0,   289,    59,    61,     0,   290
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,    10,  -200,  -200,  -200,   -39,     6,   -11,   247,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,   269,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -173,  -200,  -167,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -199,  -200,  -200,  -200,   -44,  -200,  -200
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   229,   230,   110,   111,   112,   113,   299,   124,
     125,   126,    54,    55,    56,   274,   275,   276,    60,    61,
      62,   257,   114,   115,   116,   129,   130,   131,   136,   137,
     138,   176,   177,   178,   158,   159,   161,   162,   163,   166,
     167,   168,   144,   145,   146,   150,   154,   185,   151,   180,
     181,   182,   490,   522,   492,   523,   148,   427,   428,   195,
      48,   155,    49,   342,    50,   200,    51,     1,     2
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   341,   118,   187,   147,   194,    70,   164,    52,   272,
     119,   278,   318,   169,   280,   534,   405,    70,   282,   174,
     284,   127,   222,   117,   538,   406,   152,   120,   153,   258,
     259,   190,   132,   260,   234,   261,   262,   263,   264,   265,
     266,   205,   535,   320,   133,   134,   208,   210,   212,   540,
     189,   539,   218,   252,   253,   121,   122,   475,   252,   269,
     149,   319,   204,   183,   321,   184,   516,   207,   209,   211,
     165,   223,   224,   225,   476,   483,   541,   501,   197,    57,
     226,   227,   228,   517,    58,   198,   244,   248,   188,   245,
     246,     3,   199,   249,   484,   135,   247,   156,   157,   254,
     255,   256,   477,   478,   254,   255,   270,   139,   140,   141,
     142,   518,   519,   407,   416,   401,   402,   267,   418,   143,
     160,   312,   408,   417,    59,   268,   170,   419,   277,   123,
     315,   403,   404,   329,   330,    53,   273,   171,   279,   412,
     413,   281,   311,   443,   322,   283,   172,   285,   173,   324,
     175,   314,   179,   326,   414,   415,   186,   338,   343,   344,
     201,   191,   202,   196,   332,   203,   206,   219,   220,   221,
     323,   231,   232,   233,   325,   334,   335,   235,   236,   237,
     238,   239,   240,   241,   242,   331,   251,   339,   243,   250,
      70,   286,   313,   365,   366,   348,   367,   368,   369,   370,
     371,   372,   373,   374,   316,   287,   288,   317,   360,   362,
     364,   287,   300,   289,   327,   336,   347,   290,   291,   301,
     328,   337,   333,   302,   303,   340,   292,   345,   346,   359,
     361,   363,   304,   388,   349,   293,   350,   294,   295,   353,
     351,   305,   352,   306,   307,   354,   296,   297,   355,   356,
     357,   358,   308,   309,   389,   391,   393,   298,   395,   397,
     400,   387,   409,   298,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   411,   430,   420,   429,   433,
     434,   437,   386,   438,   440,   441,   455,   444,   390,   410,
     392,   445,   394,   456,   396,   457,   398,   458,   399,   459,
     460,   461,   422,   462,   463,   424,   426,   450,   451,   452,
     464,   465,   453,   466,   467,   468,   432,   469,   470,   454,
     471,   472,   436,   421,   489,   439,   423,   425,   491,   442,
     493,   494,   495,   499,   500,   503,   496,   431,   515,   447,
     504,   449,   511,   435,   512,   513,   520,   514,   521,  -229,
    -232,   524,   543,   545,   529,   530,   536,   537,   542,   446,
     544,   448,   546,   549,   550,   552,   553,   554,   556,   555,
     561,   558,   562,   574,   563,   310,   565,   474,   564,   570,
     572,   573,   271,   566,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   497,   498,     0,     0,   473,     0,
     487,   479,   505,   480,     0,   481,     0,   482,     0,   488,
     485,     0,     0,     0,     0,     0,     0,     0,     0,   486,
       0,     0,   506,   507,   508,   509,     0,     0,     0,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   526,     0,   528,     0,     0,     0,   532,
       0,     0,   533,     0,     0,   557,     0,     4,     0,   559,
       0,   560,     0,     0,   525,   527,     0,     0,     0,   531,
     548,     0,     0,   551,     0,     5,     6,     0,     7,     0,
       8,     9,     0,    10,    11,     0,     0,     0,     0,     0,
     547,    12,     0,    13,    14,    15,     0,     0,     0,     0,
      16,   567,   568,     0,     0,   569,    17,   571,     0,     0,
       0,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,     0,   575,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,    27,     0,     0,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,    37,     4,    38,
       0,     0,     0,    39,    40,    41,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     5,     6,     0,     7,
       0,     8,     9,     0,    10,    11,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,    15,     0,     0,     0,
       0,    16,     0,     0,    46,     0,    47,    17,     0,     0,
       0,     0,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,    27,     0,     0,    28,    29,
      30,     0,    31,    32,    33,    34,    35,    36,    37,     0,
      38,     0,     0,     0,    39,    40,    41,    42,    43,   213,
      44,    45,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,    67,     0,     0,    68,     0,     0,    69,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    63,     0,
       0,     0,     0,     0,     0,     0,   192,   193,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,    68,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    63,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,     0,
       0,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,    68,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,     0,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    63,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,     0,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    68,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108
};

static const yytype_int16 yycheck[] =
{
      11,   200,    23,    67,    15,    44,    81,    23,    23,    23,
      31,    23,    52,    24,    23,     7,    44,    81,    23,    30,
      23,    11,    24,    21,     7,    53,   150,    48,   152,     8,
       9,    42,    23,    12,    73,    14,    15,    16,    17,    18,
      19,    52,    34,    20,    35,    36,    57,    58,    59,     7,
      40,    34,    63,    78,    79,    76,    77,    31,    78,    79,
     150,   101,    52,   150,    41,   152,    31,    57,    58,    59,
      86,    73,    74,    75,    48,    28,    34,   152,     6,    25,
      82,    83,    84,    48,    30,    13,   129,   133,   152,   132,
     133,     0,    20,   139,    47,    86,   139,    35,    36,   124,
     125,   126,    76,    77,   124,   125,   126,    41,    42,    43,
      44,    76,    77,    44,    44,    55,    56,    96,    44,    53,
      23,   132,    53,    53,    70,   104,    89,    53,   118,   150,
     141,    55,    56,   172,   173,   150,   150,    89,   150,    55,
      56,   150,   132,   342,   155,   150,    33,   150,    33,   160,
      23,   141,    23,   164,    55,    56,    67,   196,   202,   203,
       6,   150,     4,    33,   175,     4,    23,    33,    33,    33,
     160,   152,    33,    33,   164,   186,   187,    33,    33,    33,
      33,    33,    33,    33,    33,   175,    20,   198,   132,   132,
      81,    23,    28,   232,   233,   206,   235,   236,   237,   238,
     239,   240,   241,   242,    45,    23,    24,    45,   219,   220,
     221,    23,    24,    31,    28,    13,   206,    35,    36,    31,
      68,   126,    33,    35,    36,    13,    44,    28,    28,   219,
     220,   221,    44,    23,    71,    53,    71,    55,    56,    34,
      71,    53,    71,    55,    56,    34,    64,    65,    34,    34,
      34,    34,    64,    65,    47,    23,    23,    75,    23,    23,
      32,   272,    33,    75,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    32,   150,    33,    41,     7,
       7,    68,   272,     7,   101,     7,    34,   150,   278,   300,
     280,   150,   282,    34,   284,    34,   286,    34,   288,    34,
      34,     7,   313,     7,     7,   316,   317,   152,   152,   152,
       7,    34,   152,    34,    34,    34,   327,     7,    34,   152,
      28,    28,   333,   313,   150,   336,   316,   317,   150,   340,
     150,    13,    41,     7,     7,    71,    41,   327,   151,   350,
     150,   352,   150,   333,   150,    28,     7,    28,     7,     7,
       7,    13,   151,    28,    34,    34,    34,    34,    34,   349,
     151,   351,    28,     7,     7,    13,    13,    34,   114,    34,
     151,    13,   151,    13,    34,   128,   549,   388,    34,    34,
      34,    34,   113,   550,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,   388,    -1,
     411,   391,   441,   393,    -1,   395,    -1,   397,    -1,   420,
     400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   409,
      -1,    -1,   461,   462,   463,   464,    -1,    -1,    -1,    -1,
     469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,   496,    -1,    -1,    -1,   500,
      -1,    -1,   503,    -1,    -1,   534,    -1,     3,    -1,   538,
      -1,   540,    -1,    -1,   494,   495,    -1,    -1,    -1,   499,
     521,    -1,    -1,   524,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
     520,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,   552,   553,    -1,    -1,   556,    52,   558,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    67,    -1,   574,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,     3,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,   150,    -1,   152,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,    24,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    33,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,    33,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   220,   221,     0,     3,    21,    22,    24,    26,    27,
      29,    30,    37,    39,    40,    41,    46,    52,    57,    58,
      59,    60,    61,    62,    67,    87,    88,    90,    93,    94,
      95,    97,    98,    99,   100,   101,   102,   103,   105,   109,
     110,   111,   112,   113,   115,   116,   150,   152,   213,   215,
     217,   219,    23,   150,   165,   166,   167,    25,    30,    70,
     171,   172,   173,    33,    49,    50,    51,    66,    69,    72,
      81,    93,    94,   106,   107,   108,   116,   117,   118,   119,
     120,   121,   122,   123,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   154,
     157,   158,   159,   160,   175,   176,   177,    21,    23,    31,
      48,    76,    77,   150,   162,   163,   164,   154,   160,   178,
     179,   180,    23,    35,    36,    86,   181,   182,   183,    41,
      42,    43,    44,    53,   195,   196,   197,   160,   209,   150,
     198,   201,   150,   152,   199,   214,    35,    36,   187,   188,
      23,   189,   190,   191,    23,    86,   192,   193,   194,   160,
      89,    89,    33,    33,   160,    23,   184,   185,   186,    23,
     202,   203,   204,   150,   152,   200,    67,    67,   152,   154,
     160,   150,    41,    42,   158,   212,    33,     6,    13,    20,
     218,     6,     4,     4,   154,   160,    23,   154,   160,   154,
     160,   154,   160,    24,    73,    74,    75,    84,   160,    33,
      33,    33,    24,    73,    74,    75,    82,    83,    84,   155,
     156,   152,    33,    33,   158,    33,    33,    33,    33,    33,
      33,    33,    33,   132,   129,   132,   133,   139,   133,   139,
     132,    20,    78,    79,   124,   125,   126,   174,     8,     9,
      12,    14,    15,    16,    17,    18,    19,    96,   104,    79,
     126,   174,    23,   150,   168,   169,   170,   154,    23,   150,
      23,   150,    23,   150,    23,   150,    23,    23,    24,    31,
      35,    36,    44,    53,    55,    56,    64,    65,    75,   161,
      24,    31,    35,    36,    44,    53,    55,    56,    64,    65,
     161,   154,   160,    28,   154,   160,    45,    45,    52,   101,
      20,    41,   160,   154,   160,   154,   160,    28,    68,   158,
     158,   154,   160,    33,   160,   160,    13,   126,   158,   160,
      13,   215,   216,   219,   219,    28,    28,   154,   160,    71,
      71,    71,    71,    34,    34,    34,    34,    34,    34,   154,
     160,   154,   160,   154,   160,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   154,   160,    23,    47,
     154,    23,   154,    23,   154,    23,   154,    23,   154,   154,
      32,    55,    56,    55,    56,    44,    53,    44,    53,    33,
     160,    32,    55,    56,    55,    56,    44,    53,    44,    53,
      33,   154,   160,   154,   160,   154,   160,   210,   211,    41,
     150,   154,   160,     7,     7,   154,   160,    68,     7,   160,
     101,     7,   160,   215,   150,   150,   154,   160,   154,   160,
     152,   152,   152,   152,   152,    34,    34,    34,    34,    34,
      34,     7,     7,     7,     7,    34,    34,    34,    34,     7,
      34,    28,    28,   154,   160,    31,    48,    76,    77,   154,
     154,   154,   154,    28,    47,   154,   154,   160,   160,   150,
     205,   150,   207,   150,    13,    41,    41,   158,   158,     7,
       7,   152,   154,    71,   150,   158,   158,   158,   158,   158,
     158,   150,   150,    28,    28,   151,    31,    48,    76,    77,
       7,     7,   206,   208,    13,   154,   160,   154,   160,    34,
      34,   154,   160,   160,     7,    34,    34,    34,     7,    34,
       7,    34,    34,   151,   151,    28,    28,   154,   160,     7,
       7,   160,    13,    13,    34,    34,   114,   158,    13,   158,
     158,   151,   151,    34,    34,   205,   207,   160,   160,   160,
      34,   160,    34,    34,    13,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   153,   154,   155,   155,   155,   155,   155,   155,   155,
     156,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   161,   161,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   172,   172,
     172,   173,   173,   174,   174,   174,   175,   175,   175,   176,
     176,   176,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   180,   180,   181,   181,   181,   181,
     181,   182,   182,   183,   183,   184,   185,   186,   186,   187,
     187,   188,   189,   190,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   195,   195,   195,   195,   195,   196,   196,
     196,   197,   197,   198,   198,   198,   198,   198,   198,   199,
     199,   200,   200,   201,   202,   203,   204,   204,   205,   206,
     205,   207,   208,   207,   210,   209,   211,   209,   212,   212,
     212,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   214,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   215,   216,   215,
     218,   217,   219,   219,   219,   219,   221,   220
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     4,     4,     4,     4,     4,     1,     4,     4,
       1,     1,     4,     4,     4,     4,     6,     6,     6,     8,
       6,     8,     4,     4,     4,     4,     6,     4,     2,     3,
       1,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     2,     3,
       4,     5,     4,     3,     5,     4,     4,     3,     4,     5,
       4,     3,     5,     4,     4,     3,     5,     7,     6,     7,
       6,     1,     1,     3,     4,     3,     4,     1,     1,     3,
       4,     3,     4,     1,     1,     2,     4,     4,     2,     4,
       4,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     4,     2,     2,     3,     7,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       2,     2,     3,     7,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     1,     1,     1,
       3,     2,     3,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     1,     5,     2,
       5,     1,     1,     1,     1,     2,     3,     3,     2,     3,
       3,     1,     1,     0,     3,     4,     5,     5,     6,     1,
       1,     1,     1,     1,     6,     6,     1,     1,     1,     0,
       4,     1,     0,     4,     0,     4,     0,     4,     4,     1,
       1,     2,     2,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     4,     1,
       1,     1,     0,     3,     1,     1,     2,     1,     3,     2,
       2,     5,     5,     6,     1,     8,     2,     2,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     8,     8,     8,
      10,     2,     3,     4,     2,     1,     0,     1,     0,     4,
       0,     3,     1,     3,     1,     3,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (_environment, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, _environment); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void * _environment)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (_environment);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void * _environment)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, _environment);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, void * _environment)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), _environment);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, _environment); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void * _environment)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_environment);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void * _environment)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* direct_integer: HASH Integer  */
#line 63 "src/ugbc.y"
                 {
        (yyval.integer) = (yyvsp[0].integer);
    }
#line 2229 "src-generated/ugbc.tab.c"
    break;

  case 3: /* random_definition_simple: BYTE  */
#line 68 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_BYTE )->name;
    }
#line 2237 "src-generated/ugbc.tab.c"
    break;

  case 4: /* random_definition_simple: WORD  */
#line 71 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_WORD )->name;
    }
#line 2245 "src-generated/ugbc.tab.c"
    break;

  case 5: /* random_definition_simple: DWORD  */
#line 74 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_DWORD )->name;
    }
#line 2253 "src-generated/ugbc.tab.c"
    break;

  case 6: /* random_definition_simple: POSITION  */
#line 77 "src/ugbc.y"
               {
        (yyval.string) = random_value( _environment, VT_POSITION )->name;
    }
#line 2261 "src-generated/ugbc.tab.c"
    break;

  case 7: /* random_definition_simple: COLOR  */
#line 80 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_COLOR )->name;
    }
#line 2269 "src-generated/ugbc.tab.c"
    break;

  case 8: /* random_definition_simple: WIDTH  */
#line 83 "src/ugbc.y"
            {
        (yyval.string) = random_width( _environment )->name;
    }
#line 2277 "src-generated/ugbc.tab.c"
    break;

  case 9: /* random_definition_simple: HEIGHT  */
#line 86 "src/ugbc.y"
             {
        (yyval.string) = random_height( _environment )->name;
    }
#line 2285 "src-generated/ugbc.tab.c"
    break;

  case 10: /* random_definition: random_definition_simple  */
#line 91 "src/ugbc.y"
                               {
          (yyval.string) = (yyvsp[0].string);
      }
#line 2293 "src-generated/ugbc.tab.c"
    break;

  case 11: /* color_enumeration: BLACK  */
#line 96 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLACK );
      }
#line 2302 "src-generated/ugbc.tab.c"
    break;

  case 12: /* color_enumeration: WHITE  */
#line 100 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color WHITE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_WHITE );
      }
#line 2311 "src-generated/ugbc.tab.c"
    break;

  case 13: /* color_enumeration: RED  */
#line 104 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_RED );
      }
#line 2320 "src-generated/ugbc.tab.c"
    break;

  case 14: /* color_enumeration: CYAN  */
#line 108 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color CYAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_CYAN );
      }
#line 2329 "src-generated/ugbc.tab.c"
    break;

  case 15: /* color_enumeration: VIOLET  */
#line 112 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color VIOLET)" )->name;
          variable_store( _environment, (yyval.string), COLOR_VIOLET );
      }
#line 2338 "src-generated/ugbc.tab.c"
    break;

  case 16: /* color_enumeration: GREEN  */
#line 116 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREEN );
      }
#line 2347 "src-generated/ugbc.tab.c"
    break;

  case 17: /* color_enumeration: BLUE  */
#line 120 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLUE );
      }
#line 2356 "src-generated/ugbc.tab.c"
    break;

  case 18: /* color_enumeration: YELLOW  */
#line 124 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW );
      }
#line 2365 "src-generated/ugbc.tab.c"
    break;

  case 19: /* color_enumeration: ORANGE  */
#line 128 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color ORANGE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_ORANGE );
      }
#line 2374 "src-generated/ugbc.tab.c"
    break;

  case 20: /* color_enumeration: BROWN  */
#line 132 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BROWN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BROWN );
      }
#line 2383 "src-generated/ugbc.tab.c"
    break;

  case 21: /* color_enumeration: LIGHT RED  */
#line 136 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT RED)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_RED );
      }
#line 2392 "src-generated/ugbc.tab.c"
    break;

  case 22: /* color_enumeration: DARK GREY  */
#line 140 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_GREY );
      }
#line 2401 "src-generated/ugbc.tab.c"
    break;

  case 23: /* color_enumeration: GREY  */
#line 144 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREY );
      }
#line 2410 "src-generated/ugbc.tab.c"
    break;

  case 24: /* color_enumeration: LIGHT GREEN  */
#line 148 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREEN );
      }
#line 2419 "src-generated/ugbc.tab.c"
    break;

  case 25: /* color_enumeration: LIGHT BLUE  */
#line 152 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_BLUE );
      }
#line 2428 "src-generated/ugbc.tab.c"
    break;

  case 26: /* color_enumeration: LIGHT GREY  */
#line 156 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREY );
      }
#line 2437 "src-generated/ugbc.tab.c"
    break;

  case 27: /* color_enumeration: DARK BLUE  */
#line 160 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_BLUE );
      }
#line 2446 "src-generated/ugbc.tab.c"
    break;

  case 28: /* color_enumeration: MAGENTA  */
#line 164 "src/ugbc.y"
                {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color MAGENTA)" )->name;
          variable_store( _environment, (yyval.string), COLOR_MAGENTA );
      }
#line 2455 "src-generated/ugbc.tab.c"
    break;

  case 29: /* color_enumeration: PURPLE  */
#line 168 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PURPLE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PURPLE );
      }
#line 2464 "src-generated/ugbc.tab.c"
    break;

  case 30: /* color_enumeration: LAVENDER  */
#line 172 "src/ugbc.y"
                 {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LAVENDER)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LAVENDER );
      }
#line 2473 "src-generated/ugbc.tab.c"
    break;

  case 31: /* color_enumeration: GOLD  */
#line 176 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GOLD)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GOLD );
      }
#line 2482 "src-generated/ugbc.tab.c"
    break;

  case 32: /* color_enumeration: TURQUOISE  */
#line 180 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TURQUOISE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TURQUOISE );
      }
#line 2491 "src-generated/ugbc.tab.c"
    break;

  case 33: /* color_enumeration: TAN  */
#line 184 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TAN );
      }
#line 2500 "src-generated/ugbc.tab.c"
    break;

  case 34: /* color_enumeration: YELLOW GREEN  */
#line 188 "src/ugbc.y"
                     {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW_GREEN );
      }
#line 2509 "src-generated/ugbc.tab.c"
    break;

  case 35: /* color_enumeration: OLIVE GREEN  */
#line 192 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color OLIVE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_OLIVE_GREEN );
      }
#line 2518 "src-generated/ugbc.tab.c"
    break;

  case 36: /* color_enumeration: PINK  */
#line 196 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PINK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PINK );
      }
#line 2527 "src-generated/ugbc.tab.c"
    break;

  case 37: /* color_enumeration: PEACH  */
#line 200 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PEACH)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PEACH );
      }
#line 2536 "src-generated/ugbc.tab.c"
    break;

  case 38: /* expression: Identifier  */
#line 206 "src/ugbc.y"
                 { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2544 "src-generated/ugbc.tab.c"
    break;

  case 39: /* expression: Identifier DOLLAR  */
#line 209 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[-1].string);
      }
#line 2552 "src-generated/ugbc.tab.c"
    break;

  case 40: /* expression: Integer  */
#line 212 "src/ugbc.y"
              { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(integer value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2561 "src-generated/ugbc.tab.c"
    break;

  case 41: /* expression: String  */
#line 216 "src/ugbc.y"
             { 
        outline1("; (expression string: \"%s\")", (yyvsp[0].string) );
        (yyval.string) = variable_temporary( _environment, VT_STRING, "(string value)" )->name;
        outline1("; %s", (yyval.string) );
        variable_store_string( _environment, (yyval.string), (yyvsp[0].string) );
        outline2("; variable stored: %s = %s", (yyval.string), (yyvsp[0].string) );
      }
#line 2573 "src-generated/ugbc.tab.c"
    break;

  case 42: /* expression: OP BYTE CP Integer  */
#line 223 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(BYTE value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2582 "src-generated/ugbc.tab.c"
    break;

  case 43: /* expression: OP WORD CP Integer  */
#line 227 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(WORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2591 "src-generated/ugbc.tab.c"
    break;

  case 44: /* expression: OP DWORD CP Integer  */
#line 231 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_DWORD, "(DWORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2600 "src-generated/ugbc.tab.c"
    break;

  case 45: /* expression: OP POSITION CP Integer  */
#line 235 "src/ugbc.y"
                             { 
        (yyval.string) = variable_temporary( _environment, VT_POSITION, "(POSITION value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2609 "src-generated/ugbc.tab.c"
    break;

  case 46: /* expression: OP COLOR CP Integer  */
#line 239 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_COLOR, "(COLOR value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2618 "src-generated/ugbc.tab.c"
    break;

  case 47: /* expression: color_enumeration  */
#line 243 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2626 "src-generated/ugbc.tab.c"
    break;

  case 48: /* expression: PEEK OP direct_integer CP  */
#line 246 "src/ugbc.y"
                                {
        (yyval.string) = peek( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2634 "src-generated/ugbc.tab.c"
    break;

  case 49: /* expression: PEEK OP expressions CP  */
#line 249 "src/ugbc.y"
                             {
        (yyval.string) = peek_var( _environment, (yyvsp[-1].string) )->name;
      }
#line 2642 "src-generated/ugbc.tab.c"
    break;

  case 50: /* expression: XPEN  */
#line 252 "src/ugbc.y"
           {
        (yyval.string) = xpen( _environment )->name;
      }
#line 2650 "src-generated/ugbc.tab.c"
    break;

  case 51: /* expression: YPEN  */
#line 255 "src/ugbc.y"
           {
        (yyval.string) = ypen( _environment )->name;
      }
#line 2658 "src-generated/ugbc.tab.c"
    break;

  case 52: /* expression: COLLISION OP direct_integer CP  */
#line 258 "src/ugbc.y"
                                     {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2666 "src-generated/ugbc.tab.c"
    break;

  case 53: /* expression: COLLISION OP expressions CP  */
#line 261 "src/ugbc.y"
                                  {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2674 "src-generated/ugbc.tab.c"
    break;

  case 54: /* expression: HIT OP direct_integer CP  */
#line 264 "src/ugbc.y"
                               {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2682 "src-generated/ugbc.tab.c"
    break;

  case 55: /* expression: HIT OP expressions CP  */
#line 267 "src/ugbc.y"
                            {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2690 "src-generated/ugbc.tab.c"
    break;

  case 56: /* expression: LEFT OP expression COMMA expression CP  */
#line 270 "src/ugbc.y"
                                             {
        (yyval.string) = variable_string_left( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2698 "src-generated/ugbc.tab.c"
    break;

  case 57: /* expression: RIGHT OP expression COMMA expression CP  */
#line 273 "src/ugbc.y"
                                              {
        (yyval.string) = variable_string_right( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2706 "src-generated/ugbc.tab.c"
    break;

  case 58: /* expression: MID OP expression COMMA expression CP  */
#line 276 "src/ugbc.y"
                                            {
        (yyval.string) = variable_string_mid( _environment, (yyvsp[-3].string), (yyvsp[-1].string), NULL )->name;
    }
#line 2714 "src-generated/ugbc.tab.c"
    break;

  case 59: /* expression: MID OP expression COMMA expression COMMA expression CP  */
#line 279 "src/ugbc.y"
                                                             {
        (yyval.string) = variable_string_mid( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2722 "src-generated/ugbc.tab.c"
    break;

  case 60: /* expression: INSTR OP expression COMMA expression CP  */
#line 282 "src/ugbc.y"
                                              {
        (yyval.string) = variable_string_instr( _environment, (yyvsp[-3].string), (yyvsp[-1].string), NULL )->name;
    }
#line 2730 "src-generated/ugbc.tab.c"
    break;

  case 61: /* expression: INSTR OP expression COMMA expression COMMA expression CP  */
#line 285 "src/ugbc.y"
                                                               {
        (yyval.string) = variable_string_instr( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2738 "src-generated/ugbc.tab.c"
    break;

  case 62: /* expression: UPPER OP expression CP  */
#line 288 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_upper( _environment, (yyvsp[-1].string) )->name;
    }
#line 2746 "src-generated/ugbc.tab.c"
    break;

  case 63: /* expression: LOWER OP expression CP  */
#line 291 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_lower( _environment, (yyvsp[-1].string) )->name;
    }
#line 2754 "src-generated/ugbc.tab.c"
    break;

  case 64: /* expression: STR OP expression CP  */
#line 294 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_str( _environment, (yyvsp[-1].string) )->name;
    }
#line 2762 "src-generated/ugbc.tab.c"
    break;

  case 65: /* expression: SPACE OP expression CP  */
#line 297 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_space( _environment, (yyvsp[-1].string) )->name;
    }
#line 2770 "src-generated/ugbc.tab.c"
    break;

  case 66: /* expression: STRING OP expression COMMA expression CP  */
#line 300 "src/ugbc.y"
                                               {
        (yyval.string) = variable_string_string( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2778 "src-generated/ugbc.tab.c"
    break;

  case 67: /* expression: VAL OP expression CP  */
#line 303 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_val( _environment, (yyvsp[-1].string) )->name;
    }
#line 2786 "src-generated/ugbc.tab.c"
    break;

  case 68: /* expression: RANDOM random_definition  */
#line 306 "src/ugbc.y"
                               {
        (yyval.string) = (yyvsp[0].string);
    }
#line 2794 "src-generated/ugbc.tab.c"
    break;

  case 69: /* expression: OP expressions CP  */
#line 309 "src/ugbc.y"
                        {
        (yyval.string) = (yyvsp[-1].string);
    }
#line 2802 "src-generated/ugbc.tab.c"
    break;

  case 70: /* expression: TRUE  */
#line 312 "src/ugbc.y"
           {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(true)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2811 "src-generated/ugbc.tab.c"
    break;

  case 71: /* expression: FALSE  */
#line 316 "src/ugbc.y"
            {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(false)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2820 "src-generated/ugbc.tab.c"
    break;

  case 72: /* expression: NOT expression  */
#line 320 "src/ugbc.y"
                     {
        (yyval.string) = variable_not( _environment, (yyvsp[0].string) )->name;
    }
#line 2828 "src-generated/ugbc.tab.c"
    break;

  case 73: /* expressions_raw: expression  */
#line 326 "src/ugbc.y"
                 { (yyval.string) = (yyvsp[0].string); }
#line 2834 "src-generated/ugbc.tab.c"
    break;

  case 74: /* expressions_raw: expression PLUS expressions_raw  */
#line 327 "src/ugbc.y"
                                      {
        (yyval.string) = variable_add( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2842 "src-generated/ugbc.tab.c"
    break;

  case 75: /* expressions_raw: expression MINUS expressions_raw  */
#line 330 "src/ugbc.y"
                                       {
        (yyval.string) = variable_sub( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s - %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2851 "src-generated/ugbc.tab.c"
    break;

  case 76: /* expressions_raw: expression MULTIPLICATION expressions_raw  */
#line 334 "src/ugbc.y"
                                                {
        (yyval.string) = variable_mul( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s * %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2860 "src-generated/ugbc.tab.c"
    break;

  case 77: /* expressions_raw: expression AND expressions_raw  */
#line 338 "src/ugbc.y"
                                     {
        (yyval.string) = variable_and( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s AND %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2869 "src-generated/ugbc.tab.c"
    break;

  case 78: /* expressions_raw: expression OR expressions_raw  */
#line 342 "src/ugbc.y"
                                    {
        (yyval.string) = variable_or( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s OR %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2878 "src-generated/ugbc.tab.c"
    break;

  case 79: /* expressions_raw: expression EQUAL expressions_raw  */
#line 346 "src/ugbc.y"
                                       {
        (yyval.string) = variable_compare( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2886 "src-generated/ugbc.tab.c"
    break;

  case 80: /* expressions_raw: expression DISEQUAL expressions_raw  */
#line 349 "src/ugbc.y"
                                          {
        (yyval.string) = variable_compare_not( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2894 "src-generated/ugbc.tab.c"
    break;

  case 81: /* expressions_raw: expression LT expressions_raw  */
#line 352 "src/ugbc.y"
                                    {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2902 "src-generated/ugbc.tab.c"
    break;

  case 82: /* expressions_raw: expression LTE expressions_raw  */
#line 355 "src/ugbc.y"
                                     {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 1 )->name;
    }
#line 2910 "src-generated/ugbc.tab.c"
    break;

  case 83: /* expressions_raw: expression GT expressions_raw  */
#line 358 "src/ugbc.y"
                                    {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2918 "src-generated/ugbc.tab.c"
    break;

  case 84: /* expressions_raw: expression GTE expressions_raw  */
#line 361 "src/ugbc.y"
                                     {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2926 "src-generated/ugbc.tab.c"
    break;

  case 85: /* expressions: expressions_raw  */
#line 367 "src/ugbc.y"
                    {
      (yyval.string) = (yyvsp[0].string);
    }
#line 2934 "src-generated/ugbc.tab.c"
    break;

  case 88: /* bank_definition_simple: AT direct_integer  */
#line 374 "src/ugbc.y"
                    {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2942 "src-generated/ugbc.tab.c"
    break;

  case 89: /* bank_definition_simple: Identifier AT direct_integer  */
#line 377 "src/ugbc.y"
                                 {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2950 "src-generated/ugbc.tab.c"
    break;

  case 90: /* bank_definition_simple: AT direct_integer AS DATA  */
#line 380 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 2958 "src-generated/ugbc.tab.c"
    break;

  case 91: /* bank_definition_simple: Identifier AT direct_integer AS DATA  */
#line 383 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 2966 "src-generated/ugbc.tab.c"
    break;

  case 92: /* bank_definition_simple: DATA Identifier AT direct_integer  */
#line 386 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2974 "src-generated/ugbc.tab.c"
    break;

  case 93: /* bank_definition_simple: DATA AT direct_integer  */
#line 389 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2982 "src-generated/ugbc.tab.c"
    break;

  case 94: /* bank_definition_simple: Identifier AT direct_integer AS CODE  */
#line 393 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 2990 "src-generated/ugbc.tab.c"
    break;

  case 95: /* bank_definition_simple: AT direct_integer AS CODE  */
#line 396 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 2998 "src-generated/ugbc.tab.c"
    break;

  case 96: /* bank_definition_simple: CODE Identifier AT direct_integer  */
#line 399 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 3006 "src-generated/ugbc.tab.c"
    break;

  case 97: /* bank_definition_simple: CODE AT direct_integer  */
#line 402 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 3014 "src-generated/ugbc.tab.c"
    break;

  case 98: /* bank_definition_simple: AT direct_integer AS VARIABLES  */
#line 406 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 3022 "src-generated/ugbc.tab.c"
    break;

  case 99: /* bank_definition_simple: Identifier AT direct_integer AS VARIABLES  */
#line 409 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 3030 "src-generated/ugbc.tab.c"
    break;

  case 100: /* bank_definition_simple: VARIABLES Identifier AT direct_integer  */
#line 412 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 3038 "src-generated/ugbc.tab.c"
    break;

  case 101: /* bank_definition_simple: VARIABLES AT direct_integer  */
#line 415 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 3046 "src-generated/ugbc.tab.c"
    break;

  case 102: /* bank_definition_simple: Identifier AT direct_integer AS TEMPORARY  */
#line 419 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 3054 "src-generated/ugbc.tab.c"
    break;

  case 103: /* bank_definition_simple: AT direct_integer AS TEMPORARY  */
#line 422 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 3062 "src-generated/ugbc.tab.c"
    break;

  case 104: /* bank_definition_simple: TEMPORARY Identifier AT direct_integer  */
#line 425 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 3070 "src-generated/ugbc.tab.c"
    break;

  case 105: /* bank_definition_simple: TEMPORARY AT direct_integer  */
#line 428 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 3078 "src-generated/ugbc.tab.c"
    break;

  case 106: /* bank_definition_with_payload: Identifier AT direct_integer WITH String  */
#line 434 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3086 "src-generated/ugbc.tab.c"
    break;

  case 107: /* bank_definition_with_payload: Identifier AT direct_integer AS DATA WITH String  */
#line 437 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_DATA, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 3094 "src-generated/ugbc.tab.c"
    break;

  case 108: /* bank_definition_with_payload: DATA Identifier AT direct_integer WITH String  */
#line 440 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3102 "src-generated/ugbc.tab.c"
    break;

  case 109: /* bank_definition_with_payload: Identifier AT direct_integer AS CODE WITH String  */
#line 443 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_CODE, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 3110 "src-generated/ugbc.tab.c"
    break;

  case 110: /* bank_definition_with_payload: CODE Identifier AT direct_integer WITH String  */
#line 446 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3118 "src-generated/ugbc.tab.c"
    break;

  case 113: /* raster_definition_simple: Identifier AT direct_integer  */
#line 455 "src/ugbc.y"
                                 {
      raster_at( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );
    }
#line 3126 "src-generated/ugbc.tab.c"
    break;

  case 114: /* raster_definition_simple: AT direct_integer WITH Identifier  */
#line 458 "src/ugbc.y"
                                      {
      raster_at( _environment, (yyvsp[0].string), (yyvsp[-2].integer) );
    }
#line 3134 "src-generated/ugbc.tab.c"
    break;

  case 115: /* raster_definition_expression: Identifier AT expressions  */
#line 463 "src/ugbc.y"
                              {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3142 "src-generated/ugbc.tab.c"
    break;

  case 116: /* raster_definition_expression: AT expressions WITH Identifier  */
#line 466 "src/ugbc.y"
                                   {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3150 "src-generated/ugbc.tab.c"
    break;

  case 119: /* next_raster_definition_simple: Identifier AT direct_integer  */
#line 475 "src/ugbc.y"
                                 {
      next_raster_at_with( _environment, (yyvsp[0].integer), (yyvsp[-2].string) );
    }
#line 3158 "src-generated/ugbc.tab.c"
    break;

  case 120: /* next_raster_definition_simple: AT direct_integer WITH Identifier  */
#line 478 "src/ugbc.y"
                                      {
      next_raster_at_with( _environment, (yyvsp[-2].integer), (yyvsp[0].string) );
    }
#line 3166 "src-generated/ugbc.tab.c"
    break;

  case 121: /* next_raster_definition_expression: Identifier AT expressions  */
#line 483 "src/ugbc.y"
                              {
      next_raster_at_with_var( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
    }
#line 3174 "src-generated/ugbc.tab.c"
    break;

  case 122: /* next_raster_definition_expression: AT expressions WITH Identifier  */
#line 486 "src/ugbc.y"
                                   {
      next_raster_at_with_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3182 "src-generated/ugbc.tab.c"
    break;

  case 125: /* color_definition_simple: BORDER direct_integer  */
#line 495 "src/ugbc.y"
                          {
      color_border( _environment, (yyvsp[0].integer) );
  }
#line 3190 "src-generated/ugbc.tab.c"
    break;

  case 126: /* color_definition_simple: BACKGROUND direct_integer TO direct_integer  */
#line 498 "src/ugbc.y"
                                                {
      color_background( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3198 "src-generated/ugbc.tab.c"
    break;

  case 127: /* color_definition_simple: SPRITE direct_integer TO direct_integer  */
#line 501 "src/ugbc.y"
                                            {
      color_sprite( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3206 "src-generated/ugbc.tab.c"
    break;

  case 128: /* color_definition_expression: BORDER expressions  */
#line 506 "src/ugbc.y"
                       {
      color_border_var( _environment, (yyvsp[0].string) );
  }
#line 3214 "src-generated/ugbc.tab.c"
    break;

  case 129: /* color_definition_expression: BACKGROUND expressions TO expressions  */
#line 509 "src/ugbc.y"
                                          {
      color_background_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3222 "src-generated/ugbc.tab.c"
    break;

  case 130: /* color_definition_expression: SPRITE expressions TO expressions  */
#line 512 "src/ugbc.y"
                                      {
      color_sprite_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3230 "src-generated/ugbc.tab.c"
    break;

  case 136: /* wait_definition_simple: direct_integer CYCLES  */
#line 526 "src/ugbc.y"
                            {
      wait_cycles( _environment, (yyvsp[-1].integer) );
    }
#line 3238 "src-generated/ugbc.tab.c"
    break;

  case 137: /* wait_definition_simple: direct_integer TICKS  */
#line 529 "src/ugbc.y"
                           {
      wait_ticks( _environment, (yyvsp[-1].integer) );
    }
#line 3246 "src-generated/ugbc.tab.c"
    break;

  case 138: /* wait_definition_simple: direct_integer milliseconds  */
#line 532 "src/ugbc.y"
                                  {
      wait_milliseconds( _environment, (yyvsp[-1].integer) );
    }
#line 3254 "src-generated/ugbc.tab.c"
    break;

  case 139: /* wait_definition_expression: expressions CYCLES  */
#line 537 "src/ugbc.y"
                         {
      wait_cycles_var( _environment, (yyvsp[-1].string) );
    }
#line 3262 "src-generated/ugbc.tab.c"
    break;

  case 140: /* wait_definition_expression: expressions TICKS  */
#line 540 "src/ugbc.y"
                        {
      wait_ticks_var( _environment, (yyvsp[-1].string) );
    }
#line 3270 "src-generated/ugbc.tab.c"
    break;

  case 141: /* wait_definition_expression: expressions milliseconds  */
#line 543 "src/ugbc.y"
                               {
      wait_milliseconds_var( _environment, (yyvsp[-1].string) );
    }
#line 3278 "src-generated/ugbc.tab.c"
    break;

  case 144: /* sprite_definition_simple: direct_integer DATA FROM direct_integer  */
#line 553 "src/ugbc.y"
                                            {
      sprite_data_from( _environment, (yyvsp[-3].integer), (yyvsp[0].integer) );
  }
#line 3286 "src-generated/ugbc.tab.c"
    break;

  case 145: /* sprite_definition_simple: direct_integer MULTICOLOR  */
#line 556 "src/ugbc.y"
                              {
      sprite_multicolor( _environment, (yyvsp[-1].integer) );
  }
#line 3294 "src-generated/ugbc.tab.c"
    break;

  case 146: /* sprite_definition_simple: direct_integer MONOCOLOR  */
#line 559 "src/ugbc.y"
                             {
      sprite_monocolor( _environment, (yyvsp[-1].integer) );
  }
#line 3302 "src-generated/ugbc.tab.c"
    break;

  case 147: /* sprite_definition_simple: direct_integer COLOR direct_integer  */
#line 562 "src/ugbc.y"
                                        {
      sprite_color( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3310 "src-generated/ugbc.tab.c"
    break;

  case 148: /* sprite_definition_simple: direct_integer position OP direct_integer COMMA direct_integer CP  */
#line 565 "src/ugbc.y"
                                                                      {
      sprite_position( _environment, (yyvsp[-6].integer), (yyvsp[-3].integer), (yyvsp[-1].integer) );
  }
#line 3318 "src-generated/ugbc.tab.c"
    break;

  case 149: /* sprite_definition_simple: direct_integer ENABLE  */
#line 568 "src/ugbc.y"
                          {
      sprite_enable( _environment, (yyvsp[-1].integer) );
  }
#line 3326 "src-generated/ugbc.tab.c"
    break;

  case 150: /* sprite_definition_simple: direct_integer DISABLE  */
#line 571 "src/ugbc.y"
                           {
      sprite_disable( _environment, (yyvsp[-1].integer) );
  }
#line 3334 "src-generated/ugbc.tab.c"
    break;

  case 151: /* sprite_definition_simple: direct_integer EXPAND VERTICAL  */
#line 574 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3342 "src-generated/ugbc.tab.c"
    break;

  case 152: /* sprite_definition_simple: direct_integer COMPRESS VERTICAL  */
#line 577 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3350 "src-generated/ugbc.tab.c"
    break;

  case 153: /* sprite_definition_simple: direct_integer VERTICAL EXPAND  */
#line 580 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3358 "src-generated/ugbc.tab.c"
    break;

  case 154: /* sprite_definition_simple: direct_integer VERTICAL COMPRESS  */
#line 583 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3366 "src-generated/ugbc.tab.c"
    break;

  case 155: /* sprite_definition_simple: direct_integer EXPAND HORIZONTAL  */
#line 586 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3374 "src-generated/ugbc.tab.c"
    break;

  case 156: /* sprite_definition_simple: direct_integer COMPRESS HORIZONTAL  */
#line 589 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3382 "src-generated/ugbc.tab.c"
    break;

  case 157: /* sprite_definition_simple: direct_integer HORIZONTAL EXPAND  */
#line 592 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3390 "src-generated/ugbc.tab.c"
    break;

  case 158: /* sprite_definition_simple: direct_integer HORIZONTAL COMPRESS  */
#line 595 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3398 "src-generated/ugbc.tab.c"
    break;

  case 159: /* sprite_definition_expression: expressions DATA FROM expressions  */
#line 600 "src/ugbc.y"
                                      {
      sprite_data_from_vars( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 3406 "src-generated/ugbc.tab.c"
    break;

  case 160: /* sprite_definition_expression: expressions MULTICOLOR  */
#line 603 "src/ugbc.y"
                           {
      sprite_multicolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3414 "src-generated/ugbc.tab.c"
    break;

  case 161: /* sprite_definition_expression: expressions MONOCOLOR  */
#line 606 "src/ugbc.y"
                          {
      sprite_monocolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3422 "src-generated/ugbc.tab.c"
    break;

  case 162: /* sprite_definition_expression: expressions COLOR expressions  */
#line 609 "src/ugbc.y"
                                  {
      sprite_color_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3430 "src-generated/ugbc.tab.c"
    break;

  case 163: /* sprite_definition_expression: expressions position OP expressions COMMA expressions CP  */
#line 612 "src/ugbc.y"
                                                             {
      sprite_position_vars( _environment, (yyvsp[-6].string), (yyvsp[-3].string), (yyvsp[-1].string) );
  }
#line 3438 "src-generated/ugbc.tab.c"
    break;

  case 164: /* sprite_definition_expression: expressions ENABLE  */
#line 615 "src/ugbc.y"
                       {
      sprite_enable_var( _environment, (yyvsp[-1].string) );
  }
#line 3446 "src-generated/ugbc.tab.c"
    break;

  case 165: /* sprite_definition_expression: expressions DISABLE  */
#line 618 "src/ugbc.y"
                        {
      sprite_disable_var( _environment, (yyvsp[-1].string) );
  }
#line 3454 "src-generated/ugbc.tab.c"
    break;

  case 166: /* sprite_definition_expression: expressions EXPAND VERTICAL  */
#line 621 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3462 "src-generated/ugbc.tab.c"
    break;

  case 167: /* sprite_definition_expression: expressions COMPRESS VERTICAL  */
#line 624 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3470 "src-generated/ugbc.tab.c"
    break;

  case 168: /* sprite_definition_expression: expressions VERTICAL EXPAND  */
#line 627 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3478 "src-generated/ugbc.tab.c"
    break;

  case 169: /* sprite_definition_expression: expressions VERTICAL COMPRESS  */
#line 630 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3486 "src-generated/ugbc.tab.c"
    break;

  case 170: /* sprite_definition_expression: expressions EXPAND HORIZONTAL  */
#line 633 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3494 "src-generated/ugbc.tab.c"
    break;

  case 171: /* sprite_definition_expression: expressions COMPRESS HORIZONTAL  */
#line 636 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3502 "src-generated/ugbc.tab.c"
    break;

  case 172: /* sprite_definition_expression: expressions HORIZONTAL EXPAND  */
#line 639 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3510 "src-generated/ugbc.tab.c"
    break;

  case 173: /* sprite_definition_expression: expressions HORIZONTAL COMPRESS  */
#line 642 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3518 "src-generated/ugbc.tab.c"
    break;

  case 176: /* bitmap_definition_simple: AT direct_integer  */
#line 651 "src/ugbc.y"
                      {
      bitmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3526 "src-generated/ugbc.tab.c"
    break;

  case 177: /* bitmap_definition_simple: ENABLE  */
#line 654 "src/ugbc.y"
           {
      bitmap_enable( _environment );
  }
#line 3534 "src-generated/ugbc.tab.c"
    break;

  case 178: /* bitmap_definition_simple: DISABLE  */
#line 657 "src/ugbc.y"
            {
      bitmap_disable( _environment );
  }
#line 3542 "src-generated/ugbc.tab.c"
    break;

  case 179: /* bitmap_definition_simple: CLEAR  */
#line 660 "src/ugbc.y"
          {
      bitmap_clear( _environment );
  }
#line 3550 "src-generated/ugbc.tab.c"
    break;

  case 180: /* bitmap_definition_simple: CLEAR WITH direct_integer  */
#line 663 "src/ugbc.y"
                              {
      bitmap_clear_with( _environment, (yyvsp[0].integer) );
  }
#line 3558 "src-generated/ugbc.tab.c"
    break;

  case 181: /* bitmap_definition_expression: AT expressions  */
#line 669 "src/ugbc.y"
                   {
      bitmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3566 "src-generated/ugbc.tab.c"
    break;

  case 182: /* bitmap_definition_expression: CLEAR WITH expressions  */
#line 672 "src/ugbc.y"
                           {
      bitmap_clear_with_vars( _environment, (yyvsp[0].string) );
  }
#line 3574 "src-generated/ugbc.tab.c"
    break;

  case 185: /* textmap_definition_simple: AT direct_integer  */
#line 682 "src/ugbc.y"
                      {
      textmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3582 "src-generated/ugbc.tab.c"
    break;

  case 186: /* textmap_definition_expression: AT expressions  */
#line 687 "src/ugbc.y"
                   {
      textmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3590 "src-generated/ugbc.tab.c"
    break;

  case 189: /* text_definition_simple: ENABLE  */
#line 696 "src/ugbc.y"
           {
      text_enable( _environment );
  }
#line 3598 "src-generated/ugbc.tab.c"
    break;

  case 190: /* text_definition_simple: DISABLE  */
#line 699 "src/ugbc.y"
            {
      text_disable( _environment );
  }
#line 3606 "src-generated/ugbc.tab.c"
    break;

  case 192: /* tiles_definition_simple: AT direct_integer  */
#line 707 "src/ugbc.y"
                      {
      tiles_at( _environment, (yyvsp[0].integer) );
  }
#line 3614 "src-generated/ugbc.tab.c"
    break;

  case 193: /* tiles_definition_expression: AT expressions  */
#line 712 "src/ugbc.y"
                   {
      tiles_at_var( _environment, (yyvsp[0].string) );
  }
#line 3622 "src-generated/ugbc.tab.c"
    break;

  case 196: /* colormap_definition_simple: AT direct_integer  */
#line 721 "src/ugbc.y"
                      {
      colormap_at( _environment, (yyvsp[0].integer) );
  }
#line 3630 "src-generated/ugbc.tab.c"
    break;

  case 197: /* colormap_definition_simple: CLEAR  */
#line 724 "src/ugbc.y"
          {
      colormap_clear( _environment );
  }
#line 3638 "src-generated/ugbc.tab.c"
    break;

  case 198: /* colormap_definition_simple: CLEAR WITH direct_integer ON direct_integer  */
#line 727 "src/ugbc.y"
                                                {
      colormap_clear_with( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3646 "src-generated/ugbc.tab.c"
    break;

  case 199: /* colormap_definition_expression: AT expressions  */
#line 732 "src/ugbc.y"
                   {
      colormap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3654 "src-generated/ugbc.tab.c"
    break;

  case 200: /* colormap_definition_expression: CLEAR WITH expressions ON expressions  */
#line 735 "src/ugbc.y"
                                          {
      colormap_clear_with_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3662 "src-generated/ugbc.tab.c"
    break;

  case 203: /* screen_definition_simple: ON  */
#line 745 "src/ugbc.y"
       {   
      screen_on( _environment );
  }
#line 3670 "src-generated/ugbc.tab.c"
    break;

  case 204: /* screen_definition_simple: OFF  */
#line 748 "src/ugbc.y"
        {
      screen_off( _environment );
  }
#line 3678 "src-generated/ugbc.tab.c"
    break;

  case 205: /* screen_definition_simple: ROWS direct_integer  */
#line 751 "src/ugbc.y"
                        {
      screen_rows( _environment, (yyvsp[0].integer) );
  }
#line 3686 "src-generated/ugbc.tab.c"
    break;

  case 206: /* screen_definition_simple: VERTICAL SCROLL direct_integer  */
#line 754 "src/ugbc.y"
                                   {
      screen_vertical_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3694 "src-generated/ugbc.tab.c"
    break;

  case 207: /* screen_definition_simple: HORIZONTAL SCROLL direct_integer  */
#line 757 "src/ugbc.y"
                                     {
      screen_horizontal_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3702 "src-generated/ugbc.tab.c"
    break;

  case 208: /* screen_definition_expression: ROWS expressions  */
#line 762 "src/ugbc.y"
                     {
      screen_rows_var( _environment, (yyvsp[0].string) );
  }
#line 3710 "src-generated/ugbc.tab.c"
    break;

  case 209: /* screen_definition_expression: VERTICAL SCROLL expressions  */
#line 765 "src/ugbc.y"
                                {
      screen_vertical_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3718 "src-generated/ugbc.tab.c"
    break;

  case 210: /* screen_definition_expression: HORIZONTAL SCROLL expressions  */
#line 768 "src/ugbc.y"
                                  {
      screen_horizontal_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3726 "src-generated/ugbc.tab.c"
    break;

  case 214: /* var_definition_simple: Identifier ON Identifier  */
#line 777 "src/ugbc.y"
                             {
      variable_define( _environment, (yyvsp[-2].string), VT_BYTE, 0 );
  }
#line 3734 "src-generated/ugbc.tab.c"
    break;

  case 215: /* var_definition_simple: Identifier DOLLAR ON Identifier  */
#line 780 "src/ugbc.y"
                                    {
      variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 );
  }
#line 3742 "src-generated/ugbc.tab.c"
    break;

  case 216: /* var_definition_simple: Identifier ON Identifier ASSIGN direct_integer  */
#line 783 "src/ugbc.y"
                                                   {
      variable_define( _environment, (yyvsp[-4].string), VT_BYTE, (yyvsp[0].integer) );
  }
#line 3750 "src-generated/ugbc.tab.c"
    break;

  case 217: /* var_definition_simple: Identifier ON Identifier ASSIGN expressions  */
#line 786 "src/ugbc.y"
                                                {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-4].string), v->type, v->value );
      variable_move_naked( _environment, v->name, d->name );
  }
#line 3760 "src-generated/ugbc.tab.c"
    break;

  case 218: /* var_definition_simple: Identifier DOLLAR ON Identifier ASSIGN expressions  */
#line 791 "src/ugbc.y"
                                                       {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-5].string), VT_STRING, 0 );
      variable_move( _environment, v->name, d->name );
  }
#line 3770 "src-generated/ugbc.tab.c"
    break;

  case 219: /* goto_definition: Identifier  */
#line 798 "src/ugbc.y"
               {
      goto_label( _environment, (yyvsp[0].string) );
  }
#line 3778 "src-generated/ugbc.tab.c"
    break;

  case 220: /* goto_definition: Integer  */
#line 801 "src/ugbc.y"
            {
      goto_number( _environment, (yyvsp[0].integer) );
  }
#line 3786 "src-generated/ugbc.tab.c"
    break;

  case 221: /* gosub_definition: Identifier  */
#line 807 "src/ugbc.y"
               {
      gosub_label( _environment, (yyvsp[0].string) );
  }
#line 3794 "src-generated/ugbc.tab.c"
    break;

  case 222: /* gosub_definition: Integer  */
#line 810 "src/ugbc.y"
            {
      gosub_number( _environment, (yyvsp[0].integer) );
  }
#line 3802 "src-generated/ugbc.tab.c"
    break;

  case 224: /* point_definition_simple: AT OP direct_integer COMMA direct_integer CP  */
#line 819 "src/ugbc.y"
                                                   {
        point_at( _environment, (yyvsp[-3].integer), (yyvsp[-1].integer) );
    }
#line 3810 "src-generated/ugbc.tab.c"
    break;

  case 225: /* point_definition_expression: AT OP expressions COMMA expressions CP  */
#line 825 "src/ugbc.y"
                                             {
        point_at_vars( _environment, (yyvsp[-3].string), (yyvsp[-1].string) );
    }
#line 3818 "src-generated/ugbc.tab.c"
    break;

  case 228: /* on_goto_definition: Identifier  */
#line 834 "src/ugbc.y"
                 {
          on_goto_index( _environment, (yyvsp[0].string) );
          on_goto_end( _environment );
      }
#line 3827 "src-generated/ugbc.tab.c"
    break;

  case 229: /* $@1: %empty  */
#line 838 "src/ugbc.y"
                 {
        on_goto_index( _environment, (yyvsp[0].string) );
    }
#line 3835 "src-generated/ugbc.tab.c"
    break;

  case 231: /* on_gosub_definition: Identifier  */
#line 843 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
          on_gosub_end( _environment );
      }
#line 3844 "src-generated/ugbc.tab.c"
    break;

  case 232: /* $@2: %empty  */
#line 847 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
    }
#line 3852 "src-generated/ugbc.tab.c"
    break;

  case 234: /* $@3: %empty  */
#line 852 "src/ugbc.y"
                       {
          on_goto( _environment, (yyvsp[-1].string) );
      }
#line 3860 "src-generated/ugbc.tab.c"
    break;

  case 236: /* $@4: %empty  */
#line 855 "src/ugbc.y"
                        {
        on_gosub( _environment, (yyvsp[-1].string) );  
    }
#line 3868 "src-generated/ugbc.tab.c"
    break;

  case 238: /* every_definition: expression TICKS GOSUB Identifier  */
#line 860 "src/ugbc.y"
                                        {
          every_ticks_gosub( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
    }
#line 3876 "src-generated/ugbc.tab.c"
    break;

  case 239: /* every_definition: ON  */
#line 863 "src/ugbc.y"
         {
          every_on( _environment );
    }
#line 3884 "src-generated/ugbc.tab.c"
    break;

  case 240: /* every_definition: OFF  */
#line 866 "src/ugbc.y"
          {
          every_off( _environment );
    }
#line 3892 "src-generated/ugbc.tab.c"
    break;

  case 255: /* statement: RANDOMIZE  */
#line 885 "src/ugbc.y"
              {
      randomize( _environment );
  }
#line 3900 "src-generated/ugbc.tab.c"
    break;

  case 256: /* statement: IF expressions THEN  */
#line 888 "src/ugbc.y"
                        {
      if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3908 "src-generated/ugbc.tab.c"
    break;

  case 257: /* statement: ELSE  */
#line 891 "src/ugbc.y"
         {
      else_if_then( _environment, NULL );  
  }
#line 3916 "src-generated/ugbc.tab.c"
    break;

  case 258: /* statement: ELSE IF expressions THEN  */
#line 894 "src/ugbc.y"
                             {
      else_if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3924 "src-generated/ugbc.tab.c"
    break;

  case 259: /* statement: ENDIF  */
#line 897 "src/ugbc.y"
          {
      end_if_then( _environment );  
  }
#line 3932 "src-generated/ugbc.tab.c"
    break;

  case 260: /* statement: DO  */
#line 900 "src/ugbc.y"
       {
      begin_loop( _environment );  
  }
#line 3940 "src-generated/ugbc.tab.c"
    break;

  case 261: /* statement: LOOP  */
#line 903 "src/ugbc.y"
         {
      end_loop( _environment );  
  }
#line 3948 "src-generated/ugbc.tab.c"
    break;

  case 262: /* $@5: %empty  */
#line 906 "src/ugbc.y"
          { 
      begin_while( _environment );  
  }
#line 3956 "src-generated/ugbc.tab.c"
    break;

  case 263: /* statement: WHILE $@5 expressions  */
#line 908 "src/ugbc.y"
                {
      begin_while_condition( _environment, (yyvsp[0].string) );  
  }
#line 3964 "src-generated/ugbc.tab.c"
    break;

  case 264: /* statement: WEND  */
#line 911 "src/ugbc.y"
         {
      end_while( _environment );  
  }
#line 3972 "src-generated/ugbc.tab.c"
    break;

  case 265: /* statement: REPEAT  */
#line 914 "src/ugbc.y"
           {
      begin_repeat( _environment );  
  }
#line 3980 "src-generated/ugbc.tab.c"
    break;

  case 266: /* statement: UNTIL expressions  */
#line 917 "src/ugbc.y"
                      {
      end_repeat( _environment, (yyvsp[0].string) );  
  }
#line 3988 "src-generated/ugbc.tab.c"
    break;

  case 267: /* statement: EXIT  */
#line 920 "src/ugbc.y"
         {
      exit_loop( _environment, 0 );  
  }
#line 3996 "src-generated/ugbc.tab.c"
    break;

  case 268: /* statement: EXIT IF expressions  */
#line 923 "src/ugbc.y"
                        {
      exit_loop_if( _environment, (yyvsp[0].string), 0 );  
  }
#line 4004 "src-generated/ugbc.tab.c"
    break;

  case 269: /* statement: EXIT Integer  */
#line 926 "src/ugbc.y"
                 {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 4012 "src-generated/ugbc.tab.c"
    break;

  case 270: /* statement: EXIT direct_integer  */
#line 929 "src/ugbc.y"
                        {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 4020 "src-generated/ugbc.tab.c"
    break;

  case 271: /* statement: EXIT IF expressions COMMA Integer  */
#line 932 "src/ugbc.y"
                                      {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 4028 "src-generated/ugbc.tab.c"
    break;

  case 272: /* statement: EXIT IF expressions COMMA direct_integer  */
#line 935 "src/ugbc.y"
                                             {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 4036 "src-generated/ugbc.tab.c"
    break;

  case 273: /* statement: FOR Identifier ASSIGN expressions TO expressions  */
#line 938 "src/ugbc.y"
                                                     {
      begin_for( _environment, (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 4044 "src-generated/ugbc.tab.c"
    break;

  case 274: /* statement: NEXT  */
#line 941 "src/ugbc.y"
         {
      end_for( _environment );
  }
#line 4052 "src-generated/ugbc.tab.c"
    break;

  case 275: /* statement: FOR Identifier ASSIGN expressions TO expressions STEP expressions  */
#line 944 "src/ugbc.y"
                                                                      {
      begin_for_step( _environment, (yyvsp[-6].string), (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 4060 "src-generated/ugbc.tab.c"
    break;

  case 276: /* statement: BEG GAMELOOP  */
#line 947 "src/ugbc.y"
                 {
      begin_gameloop( _environment );
  }
#line 4068 "src-generated/ugbc.tab.c"
    break;

  case 277: /* statement: END GAMELOOP  */
#line 950 "src/ugbc.y"
                 {
      end_gameloop( _environment );
  }
#line 4076 "src-generated/ugbc.tab.c"
    break;

  case 278: /* statement: GRAPHIC  */
#line 953 "src/ugbc.y"
            {
      graphic( _environment );
  }
#line 4084 "src-generated/ugbc.tab.c"
    break;

  case 279: /* statement: HALT  */
#line 956 "src/ugbc.y"
         {
      halt( _environment );
  }
#line 4092 "src-generated/ugbc.tab.c"
    break;

  case 284: /* statement: RETURN  */
#line 963 "src/ugbc.y"
           {
      return_label( _environment );
  }
#line 4100 "src-generated/ugbc.tab.c"
    break;

  case 285: /* statement: POP  */
#line 966 "src/ugbc.y"
        {
      pop( _environment );
  }
#line 4108 "src-generated/ugbc.tab.c"
    break;

  case 286: /* statement: DONE  */
#line 969 "src/ugbc.y"
          {
      return 0;
  }
#line 4116 "src-generated/ugbc.tab.c"
    break;

  case 287: /* statement: LEFT OP expression COMMA expression CP ASSIGN expressions  */
#line 972 "src/ugbc.y"
                                                              {
        variable_string_left_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4124 "src-generated/ugbc.tab.c"
    break;

  case 288: /* statement: RIGHT OP expression COMMA expression CP ASSIGN expressions  */
#line 975 "src/ugbc.y"
                                                               {
        variable_string_right_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4132 "src-generated/ugbc.tab.c"
    break;

  case 289: /* statement: MID OP expression COMMA expression CP ASSIGN expressions  */
#line 978 "src/ugbc.y"
                                                             {
        variable_string_mid_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), NULL, (yyvsp[0].string) );
  }
#line 4140 "src-generated/ugbc.tab.c"
    break;

  case 290: /* statement: MID OP expression COMMA expression COMMA expression CP ASSIGN expressions  */
#line 981 "src/ugbc.y"
                                                                              {
        variable_string_mid_assign( _environment, (yyvsp[-7].string), (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4148 "src-generated/ugbc.tab.c"
    break;

  case 291: /* statement: Identifier COLON  */
#line 984 "src/ugbc.y"
                     {
      outhead1("%s:", (yyvsp[-1].string));
  }
#line 4156 "src-generated/ugbc.tab.c"
    break;

  case 292: /* statement: Identifier ASSIGN expressions  */
#line 987 "src/ugbc.y"
                                  {
        outline2("; %s = %s", (yyvsp[-2].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-2].string), expressions->type, 0 )->name;
        outline1("; defined %s ", (yyvsp[-2].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-2].string) );
  }
#line 4170 "src-generated/ugbc.tab.c"
    break;

  case 293: /* statement: Identifier DOLLAR ASSIGN expressions  */
#line 996 "src/ugbc.y"
                                         {
        outline2("; %s = %s", (yyvsp[-3].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 )->name;
        outline1("; defined %s ", (yyvsp[-3].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-3].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-3].string) );
  }
#line 4184 "src-generated/ugbc.tab.c"
    break;

  case 294: /* statement: DEBUG expressions  */
#line 1005 "src/ugbc.y"
                      {
      debug_var( _environment, (yyvsp[0].string) );
  }
#line 4192 "src-generated/ugbc.tab.c"
    break;

  case 297: /* statements_no_linenumbers: statement  */
#line 1013 "src/ugbc.y"
                { ((Environment *)_environment)->yylineno = yylineno; }
#line 4198 "src-generated/ugbc.tab.c"
    break;

  case 298: /* $@6: %empty  */
#line 1014 "src/ugbc.y"
                      { ((Environment *)_environment)->yylineno = yylineno; }
#line 4204 "src-generated/ugbc.tab.c"
    break;

  case 300: /* $@7: %empty  */
#line 1018 "src/ugbc.y"
              {
        outhead1("_linenumber%d:", (yyvsp[0].integer));
    }
#line 4212 "src-generated/ugbc.tab.c"
    break;

  case 301: /* statements_with_linenumbers: Integer $@7 statements_no_linenumbers  */
#line 1020 "src/ugbc.y"
                                { 
        ((Environment *)_environment)->yylineno = yylineno;
    }
#line 4220 "src-generated/ugbc.tab.c"
    break;

  case 306: /* $@8: %empty  */
#line 1032 "src/ugbc.y"
  { ((Environment *)_environment)->yylineno = yylineno; }
#line 4226 "src-generated/ugbc.tab.c"
    break;


#line 4230 "src-generated/ugbc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (_environment, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, _environment);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, _environment);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (_environment, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, _environment);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, _environment);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1034 "src/ugbc.y"


void show_usage_and_exit( int _argc, char *_argv[] ) {

    printf("ugBASIC Compiler v1.0\n");
    printf("---------------------\n");
    printf("Copyright 2021 Marco Spedaletti (asimov@mclink.it)\n\n");
    printf("Licensed under the Apache License, Version 2.0 (the \"License\");\n");
    printf("you may not use this program except in compliance with the License.\n\n");

    printf("usage: %s [-c <file>] <source> <asm>\n\n", _argv[0] );

    printf("Options and parameters:\n" );
    printf("\t<source>     Input filename with ugBASIC source code" );
    printf("\t<asm>        Output filename with ASM source code" );
    printf("\t-c <file>    Output filename with linker configuration" );
    exit(EXIT_FAILURE);
}

int main( int _argc, char *_argv[] ) {
    extern FILE *yyin;
    int flags, opt;
    int nsecs, tfnd;
    Environment * _environment = malloc(sizeof(Environment));

    while ((opt = getopt(_argc, _argv, "e:c:")) != -1) {
        switch (opt) {
                case 'c':
                    _environment->configurationFileName = strdup(optarg);
                    break;
                default: /* '?' */
                    show_usage_and_exit( _argc, _argv );
                }
    }

    _environment->sourceFileName = strdup(_argv[optind] );
    _environment->asmFileName = strdup(_argv[optind+1] );
    
    yyin = fopen( _environment->sourceFileName, "r" );
    if ( ! yyin ) {
        fprintf(stderr, "Unable to open source file: %s\n", _environment->sourceFileName );
        exit(EXIT_FAILURE);
    }
    _environment->asmFile = fopen( _environment->asmFileName, "wt");
    if ( ! _environment->asmFile ) {
        fprintf(stderr, "Unable to open output file: %s\n", _environment->asmFileName );
        exit(EXIT_FAILURE);
    }

    if ( _environment->configurationFileName ) {
        _environment->configurationFile = fopen( _environment->configurationFileName, "wt");
        if ( ! _environment->configurationFile ) {
            fprintf(stderr, "Unable to open configuration file: %s\n", _environment->configurationFileName );
            exit(EXIT_FAILURE);
        }
        linker_setup( _environment );
        outhead0(".segment \"CODE\"");
    } else {
        outhead0("org 32768");
    }

    variable_define( _environment, "strings_address", VT_ADDRESS, 0x4200 );
    bank_define( _environment, "VARIABLES", BT_VARIABLES, 0x4000, NULL );
    bank_define( _environment, "TEMPORARY", BT_TEMPORARY, 0x4100, NULL );
    bank_define( _environment, "STRINGS", BT_STRINGS, 0x4200, NULL );

    yydebug = 1;
    errors = 0;
    yyparse (_environment);

    gameloop_cleanup( _environment );
    bank_cleanup( _environment );
    variable_cleanup( _environment );

    if ( _environment->configurationFileName ) {
        linker_cleanup( _environment );
        fclose(_environment->configurationFile);
    }

    fclose(_environment->asmFile);

}

int yyerror (Environment * _ignored, const char *s) /* Called by yyparse on error */
{
        // TODO: better error message (like other compilers)
      printf( "*** ERROR: %s at %d\n", s, yylineno);
      exit(EXIT_FAILURE);
}

