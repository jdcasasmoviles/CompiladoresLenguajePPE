/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y" /* yacc.c:339  */

/* Zona de includes y otras jaladas */
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "scanner.h"
#include "parfuns.h"

void yyerror(char *mgs);

char tipo;

#line 81 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_BGPRG = 258,
    TOK_ENPRG = 259,
    TOK_IDENT = 260,
    TOK_RTYPE = 261,
    TOK_ZTYPE = 262,
    TOK_STYPE = 263,
    TOK_PRINT = 264,
    TOK_SCONS = 265,
    TOK_ZCONS = 266,
    TOK_RCONS = 267,
    TOK_BOOLT = 268,
    TOK_BOOLF = 269,
    TOK_BOOLN = 270,
    TOK_BGFUN = 271,
    TOK_ENFUN = 272,
    TOK_BGFOR = 273,
    TOK_ENFOR = 274,
    TOK_BGWHI = 275,
    TOK_ENWHI = 276,
    TOK_BEGIF = 277,
    TOK_ENDIF = 278,
    TOK_ELSIF = 279,
    TOK_ELSEE = 280,
    TOK_IOINN = 281,
    TOK_IOOUT = 282,
    TOK_RETUR = 283,
    TOK_LOGIO = 284,
    TOK_LOGIA = 285,
    TOK_LOGIN = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "src/parser.y" /* yacc.c:355  */

     char *sval;
     int   zval;
     float rval;

#line 159 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    40,    38,    34,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    32,
      36,    35,    37,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    39,    41,    41,    41,    44,    46,    50,
      51,    52,    53,    54,    55,    56,    57,    61,    61,    65,
      66,    67,    71,    72,    72,    76,    80,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    97,    98,    99,
     103,   104,   105,   109,   110,   111,   115,   116,   119,   121,
     125,   125,   126,   126,   129,   131,   135,   136,   146,   156,
     156,   157,   157,   161,   162,   163,   163,   164,   164,   168,
     168,   168,   168,   168,   172,   173,   177,   181,   185,   186,
     186,   190,   190,   190,   192,   194,   194,   194,   194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_BGPRG", "TOK_ENPRG", "TOK_IDENT",
  "TOK_RTYPE", "TOK_ZTYPE", "TOK_STYPE", "TOK_PRINT", "TOK_SCONS",
  "TOK_ZCONS", "TOK_RCONS", "TOK_BOOLT", "TOK_BOOLF", "TOK_BOOLN",
  "TOK_BGFUN", "TOK_ENFUN", "TOK_BGFOR", "TOK_ENFOR", "TOK_BGWHI",
  "TOK_ENWHI", "TOK_BEGIF", "TOK_ENDIF", "TOK_ELSIF", "TOK_ELSEE",
  "TOK_IOINN", "TOK_IOOUT", "TOK_RETUR", "TOK_LOGIO", "TOK_LOGIA",
  "TOK_LOGIN", "';'", "':'", "','", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'('", "')'", "$accept", "S", "programa", "$@1", "$@2",
  "bloque", "instruccion", "inicio_variables", "$@3", "tipo",
  "lista_definiciones", "$@4", "asignacion", "imprimir", "expresion",
  "operacion", "factor", "termino", "numero", "definicion_funciones",
  "funcion_definicion", "$@5", "$@6", "retorno", "parametros_lista",
  "definicion_parametro", "llamada_funcion", "$@7", "$@8",
  "variables_lista", "$@9", "$@10", "estructura_for", "$@11", "$@12",
  "$@13", "$@14", "inicializacion_for", "lista_inicializacion",
  "estructura_while", "estructura_if", "$@15", "encabezado_if", "$@16",
  "$@17", "elsif_bloques", "$@18", "$@19", "$@20", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    59,    58,    44,    61,    60,    62,    43,    45,
      42,    47,    40,    41
};
# endif

#define YYPACT_NINF -123

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-123)))

#define YYTABLE_NINF -68

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    19,    43,  -123,  -123,  -123,    63,   -26,  -123,  -123,
    -123,     3,     5,    13,  -123,  -123,    53,    63,    32,  -123,
      45,    50,    61,  -123,  -123,  -123,    51,    49,    64,   -26,
    -123,  -123,  -123,     0,     0,  -123,  -123,    52,    39,  -123,
    -123,  -123,    99,     3,    69,  -123,  -123,  -123,    79,  -123,
    -123,  -123,  -123,    25,     3,    70,    18,  -123,    58,    -7,
      80,    14,    16,     0,     0,     0,     0,    81,  -123,    82,
      74,     3,   102,   114,    78,  -123,  -123,  -123,  -123,    87,
      89,    83,  -123,     0,     0,    58,     0,    58,    39,    39,
    -123,  -123,    90,    95,    99,    63,    85,   124,  -123,   102,
      97,  -123,     3,    63,    98,   100,  -123,    58,    58,    58,
       3,     3,  -123,   115,  -123,    93,  -123,   103,    96,   117,
      18,    18,  -123,  -123,  -123,    63,    33,   114,  -123,  -123,
    -123,  -123,   106,  -123,  -123,   109,  -123,   110,  -123,    63,
     138,    63,   140,   104,    46,  -123,   113,   105,   121,  -123,
      63,  -123,    51,  -123,   145,   134,   121,  -123,    63,   120,
    -123,   136,  -123,  -123,  -123,   135,  -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     4,     1,     7,     0,    20,    19,
      21,     0,     0,     0,    81,     9,     0,     7,     0,    17,
       0,     0,     0,    13,    14,    15,    84,     0,    61,    43,
      27,    47,    46,     0,     0,    35,    26,    28,    37,    40,
      44,    36,     0,     0,     0,     5,     8,    10,     0,    11,
      16,    12,    85,     0,     0,     0,     0,    43,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    74,
       0,     0,    48,     0,     0,    78,    79,    25,    60,    63,
      64,     0,    45,     0,     0,    29,     0,    30,    38,    39,
      41,    42,     0,     0,     0,     7,     0,     0,     6,    48,
      22,    18,     0,     7,     0,     0,    62,    33,    31,    32,
       0,     0,    75,     0,    82,     0,    49,     0,     0,     0,
       0,     0,    76,    70,    77,     7,     0,     0,    86,    80,
      66,    68,     0,    83,    50,     0,    52,    56,    24,     7,
       0,     7,     0,     0,     0,    87,     0,     0,    54,    58,
       7,    57,    84,    71,     0,     0,    54,    88,     7,     0,
      51,     0,    72,    55,    53,     0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,   -17,  -123,  -123,  -123,  -122,
      28,  -123,   -10,  -123,   -37,   -24,    35,    40,   -54,    57,
    -123,  -123,  -123,     1,    15,  -123,    -8,  -123,  -123,   -11,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,    66,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,     6,  -123,  -123,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,    72,    16,    17,    18,    48,    19,
     101,   117,    20,    21,    36,    37,    38,    39,    40,    98,
      99,   141,   143,   155,   136,   137,    22,    55,    56,    81,
     104,   105,    23,    93,   132,   158,   165,    68,    69,    24,
      25,   103,    26,    44,   125,    53,    74,   139,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    35,    80,    41,   135,    57,    70,    27,    29,    58,
      59,    31,    32,    30,    31,    32,    28,    77,    33,    57,
       1,    57,   135,    79,     4,    31,    32,    31,    32,    31,
      32,    63,    64,    35,    96,    41,    82,    85,    87,     8,
       9,    10,    34,     5,    35,    34,    41,    42,    75,    84,
      76,    86,     8,     9,    10,    43,    34,    45,    34,   107,
     108,    35,   109,    41,    47,   118,    80,    80,     7,     8,
       9,    10,    11,   122,   123,    52,   134,    49,   113,    65,
      66,    12,    50,    13,    54,    14,   119,    60,    61,    62,
      63,    64,    35,    51,    41,    15,    63,    64,    88,    89,
      35,    35,    41,    41,    67,    90,    91,   -59,   133,   130,
     131,    71,    73,    78,    92,    83,    94,    95,    97,   100,
     102,   -65,   145,   -67,   148,   110,   106,   111,   114,   115,
     147,   -23,   120,   156,   121,   126,   124,   127,   140,   128,
     129,   162,   142,   146,   144,   149,    27,   150,   153,   154,
     159,   160,   163,   164,   166,   138,   116,   161,   157,   151,
     112
};

static const yytype_uint8 yycheck[] =
{
      17,    11,    56,    11,   126,     5,    43,    33,     5,    33,
      34,    11,    12,    10,    11,    12,    42,    54,    15,     5,
       3,     5,   144,     5,     5,    11,    12,    11,    12,    11,
      12,    38,    39,    43,    71,    43,    43,    61,    62,     6,
       7,     8,    42,     0,    54,    42,    54,    42,    23,    35,
      25,    35,     6,     7,     8,    42,    42,     4,    42,    83,
      84,    71,    86,    71,    32,   102,   120,   121,     5,     6,
       7,     8,     9,   110,   111,    24,    43,    32,    95,    40,
      41,    18,    32,    20,    35,    22,   103,    35,    36,    37,
      38,    39,   102,    32,   102,    32,    38,    39,    63,    64,
     110,   111,   110,   111,     5,    65,    66,    43,   125,   120,
     121,    42,    33,    43,    33,    35,    34,    43,    16,     5,
      42,    34,   139,    34,   141,    35,    43,    32,    43,     5,
     140,    34,    34,   150,    34,    42,    21,    34,    32,    43,
      23,   158,    33,     5,    34,     5,    33,    43,    43,    28,
       5,    17,    32,    17,    19,   127,    99,   156,   152,   144,
      94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,    46,     5,     0,    47,     5,     6,     7,
       8,     9,    18,    20,    22,    32,    49,    50,    51,    53,
      56,    57,    70,    76,    83,    84,    86,    33,    42,     5,
      10,    11,    12,    15,    42,    56,    58,    59,    60,    61,
      62,    70,    42,    42,    87,     4,    49,    32,    52,    32,
      32,    32,    24,    89,    35,    71,    72,     5,    59,    59,
      35,    36,    37,    38,    39,    40,    41,     5,    81,    82,
      58,    42,    48,    33,    90,    23,    25,    58,    43,     5,
      62,    73,    43,    35,    35,    59,    35,    59,    60,    60,
      61,    61,    33,    77,    34,    43,    58,    16,    63,    64,
       5,    54,    42,    85,    74,    75,    43,    59,    59,    59,
      35,    32,    81,    49,    43,     5,    63,    55,    58,    49,
      34,    34,    58,    58,    21,    88,    42,    34,    43,    23,
      73,    73,    78,    49,    43,    53,    68,    69,    54,    91,
      32,    65,    33,    66,    34,    49,     5,    56,    49,     5,
      43,    68,    92,    43,    28,    67,    49,    89,    79,     5,
      17,    67,    49,    32,    17,    80,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    47,    48,    46,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    52,    51,    53,
      53,    53,    54,    55,    54,    56,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      65,    64,    66,    64,    67,    67,    68,    68,    69,    71,
      70,    72,    70,    73,    73,    74,    73,    75,    73,    77,
      78,    79,    80,    76,    81,    81,    82,    83,    84,    85,
      84,    87,    88,    86,    89,    90,    91,    92,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     0,     0,     7,     0,     2,     1,
       2,     2,     2,     1,     1,     1,     2,     0,     4,     1,
       1,     1,     1,     0,     4,     4,     2,     1,     1,     3,
       3,     4,     4,     4,     2,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     3,     1,     1,     0,     2,
       0,     8,     0,     9,     0,     3,     1,     3,     3,     0,
       4,     0,     5,     1,     1,     0,     4,     0,     4,     0,
       0,     0,     0,    14,     1,     3,     4,     6,     3,     0,
       6,     0,     0,     7,     0,     0,     0,     0,     9
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 41 "src/parser.y" /* yacc.c:1646  */
    { programa((yyvsp[0].sval)); }
#line 1373 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 41 "src/parser.y" /* yacc.c:1646  */
    { endprog((yyvsp[-3].sval)); }
#line 1379 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "src/parser.y" /* yacc.c:1646  */
    { tipo = ((yyvsp[0].sval))[0]; }
#line 1385 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "src/parser.y" /* yacc.c:1646  */
    { declararvar((yyvsp[0].sval), tipo); }
#line 1391 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "src/parser.y" /* yacc.c:1646  */
    { declararvar((yyvsp[0].sval), tipo); }
#line 1397 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 76 "src/parser.y" /* yacc.c:1646  */
    { asignar((yyvsp[-3].sval), (yyvsp[0].sval)); }
#line 1403 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "src/parser.y" /* yacc.c:1646  */
    { agregarcod("print", (yyvsp[0].sval), "", ""); }
#line 1409 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 86 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = comparacion("menor", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1415 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 87 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = comparacion("mayor", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1421 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 88 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = comparacion("menig", (yyvsp[-3].sval), (yyvsp[0].sval)); }
#line 1427 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = comparacion("mayig", (yyvsp[-3].sval), (yyvsp[0].sval)); }
#line 1433 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = comparacion("igual", (yyvsp[-3].sval), (yyvsp[0].sval)); }
#line 1439 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = negar((yyvsp[0].sval)); }
#line 1445 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 93 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sval) = ret(); }
#line 1451 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 98 "src/parser.y" /* yacc.c:1646  */
    {(yyval.sval) = operacion("sumar", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1457 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "src/parser.y" /* yacc.c:1646  */
    {(yyval.sval) = operacion("resta", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1463 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 104 "src/parser.y" /* yacc.c:1646  */
    {(yyval.sval) = operacion("multi", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1469 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "src/parser.y" /* yacc.c:1646  */
    {(yyval.sval) = operacion("divid", (yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 1475 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 111 "src/parser.y" /* yacc.c:1646  */
    {(yyval.sval) = (yyvsp[-1].sval);}
#line 1481 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "src/parser.y" /* yacc.c:1646  */
    { agregarsim((yyvsp[0].sval), 'R', "", 0, atof((yyvsp[0].sval))); }
#line 1487 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "src/parser.y" /* yacc.c:1646  */
    { agregarsim((yyvsp[0].sval), 'Z', "", atoi((yyvsp[0].sval)), 0); }
#line 1493 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 125 "src/parser.y" /* yacc.c:1646  */
    { newfunc((yyvsp[-2].sval)); }
#line 1499 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 125 "src/parser.y" /* yacc.c:1646  */
    { agregarcod("endfx", (yyvsp[-6].sval), "", ""); }
#line 1505 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 126 "src/parser.y" /* yacc.c:1646  */
    { newfunc((yyvsp[-2].sval)); }
#line 1511 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 126 "src/parser.y" /* yacc.c:1646  */
    { agregarcod("endfx", (yyvsp[-7].sval), "", ""); }
#line 1517 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 131 "src/parser.y" /* yacc.c:1646  */
    { agregarcod("return", (yyvsp[-1].sval), "", ""); }
#line 1523 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 156 "src/parser.y" /* yacc.c:1646  */
    { resetparams(); }
#line 1529 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "src/parser.y" /* yacc.c:1646  */
    { exefunc((yyvsp[-3].sval)); }
#line 1535 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "src/parser.y" /* yacc.c:1646  */
    { resetparams(); }
#line 1541 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 157 "src/parser.y" /* yacc.c:1646  */
    { exefunc((yyvsp[-4].sval)); }
#line 1547 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 161 "src/parser.y" /* yacc.c:1646  */
    { agregarparam((yyvsp[0].sval)); }
#line 1553 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "src/parser.y" /* yacc.c:1646  */
    { agregarparam((yyvsp[0].sval)); }
#line 1559 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 163 "src/parser.y" /* yacc.c:1646  */
    { agregarparam((yyvsp[0].sval)); }
#line 1565 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 164 "src/parser.y" /* yacc.c:1646  */
    { agregarparam((yyvsp[0].sval)); }
#line 1571 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { begfor(); }
#line 1577 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { jmp2endfor((yyvsp[0].sval)); }
#line 1583 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { fixbfor(); }
#line 1589 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { endfor(); }
#line 1595 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 177 "src/parser.y" /* yacc.c:1646  */
    { asignar((yyvsp[-3].sval), (yyvsp[0].sval)); }
#line 1601 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 185 "src/parser.y" /* yacc.c:1646  */
    { elselbl(); endif(); }
#line 1607 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { elselbl(); }
#line 1613 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { endif(); }
#line 1619 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { begif(); }
#line 1625 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { jmp2else((yyvsp[-1].sval)); }
#line 1631 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { jmp2endif(); }
#line 1637 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { elselbl(); }
#line 1643 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 194 "src/parser.y" /* yacc.c:1646  */
    {jmp2else((yyvsp[-1].sval));}
#line 1649 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { jmp2endif(); }
#line 1655 "parser.c" /* yacc.c:1646  */
    break;


#line 1659 "parser.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 196 "src/parser.y" /* yacc.c:1906  */
