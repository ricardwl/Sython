/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sython.y" /* yacc.c:339  */



// #define YYDEBUG 1
#include <stdint.h>
#include <stdio.h>
#include "sython.h"


#line 76 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT_LITERAL = 258,
    TRUE_T = 259,
    FALSE_T = 260,
    DOUBLE_LITERAL = 261,
    STRING_LITERAL = 262,
    NULL_T = 263,
    IDENTIFIER = 264,
    FUNCTION = 265,
    IF = 266,
    ELSE = 267,
    ELSIF = 268,
    WHILE = 269,
    FOR = 270,
    FOREACH = 271,
    RETURN_T = 272,
    BREAK = 273,
    CONTINUE = 274,
    LP = 275,
    RP = 276,
    LC = 277,
    RC = 278,
    LB = 279,
    RB = 280,
    SEMICOLON = 281,
    COLON = 282,
    COMMA = 283,
    LOGICAL_AND = 284,
    LOGICAL_OR = 285,
    EQ = 286,
    NE = 287,
    GT = 288,
    GE = 289,
    LT = 290,
    LE = 291,
    ADD = 292,
    SUB = 293,
    MUL = 294,
    DIV = 295,
    MOD = 296,
    EXCLAMATION = 297,
    DOT = 298,
    ADD_ASSIGN_T = 299,
    SUB_ASSIGN_T = 300,
    MUL_ASSIGN_T = 301,
    DIV_ASSIGN_T = 302,
    MOD_ASSIGN_T = 303,
    INCREMENT = 304,
    DECREMENT = 305,
    CLOSURE = 306,
    GLOBAL_T = 307,
    TRY = 308,
    CATCH = 309,
    FINALLY = 310,
    THROW = 311,
    EXTEND = 312,
    STATIC = 313,
    FINAL = 314,
    CLASS = 315,
    ASSIGN_T = 316,
    LOWER_THAN_ELSE = 317
  };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define TRUE_T 259
#define FALSE_T 260
#define DOUBLE_LITERAL 261
#define STRING_LITERAL 262
#define NULL_T 263
#define IDENTIFIER 264
#define FUNCTION 265
#define IF 266
#define ELSE 267
#define ELSIF 268
#define WHILE 269
#define FOR 270
#define FOREACH 271
#define RETURN_T 272
#define BREAK 273
#define CONTINUE 274
#define LP 275
#define RP 276
#define LC 277
#define RC 278
#define LB 279
#define RB 280
#define SEMICOLON 281
#define COLON 282
#define COMMA 283
#define LOGICAL_AND 284
#define LOGICAL_OR 285
#define EQ 286
#define NE 287
#define GT 288
#define GE 289
#define LT 290
#define LE 291
#define ADD 292
#define SUB 293
#define MUL 294
#define DIV 295
#define MOD 296
#define EXCLAMATION 297
#define DOT 298
#define ADD_ASSIGN_T 299
#define SUB_ASSIGN_T 300
#define MUL_ASSIGN_T 301
#define DIV_ASSIGN_T 302
#define MOD_ASSIGN_T 303
#define INCREMENT 304
#define DECREMENT 305
#define CLOSURE 306
#define GLOBAL_T 307
#define TRY 308
#define CATCH 309
#define FINALLY 310
#define THROW 311
#define EXTEND 312
#define STATIC 313
#define FINAL 314
#define CLASS 315
#define ASSIGN_T 316
#define LOWER_THAN_ELSE 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "sython.y" /* yacc.c:355  */

    String* identifier;
    Value value;
    void *statement;
    void *expression;
    StatementList *statement_list;
    ArgumentList *argument_list;
    ParameterList *parameter_list;
    OperatorType  optype;

#line 251 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  80
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    62,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    59,    63,    67,    72,    73,    78,    86,
      89,    90,    95,   100,   105,   109,   110,   111,   112,   116,
     117,   118,   119,   123,   124,   127,   128,   131,   135,   141,
     145,   152,   157,   163,   168,   174,   177,   183,   186,   192,
     198,   202,   206,   210,   214,   218,   224,   226,   232,   234,
     240,   242,   246,   252,   253,   257,   261,   265,   271,   272,
     276,   282,   283,   287,   291,   297,   298,   302,   308,   311,
     315,   319,   327,   323,   334,   338,   345,   349,   353,   357,
     367,   368,   369,   370,   374,   378,   382,   383,   386,   390,
     396,   400,   404,   408,   415,   418,   422,   428,   432,   433,
     434,   435,   436,   437,   440,   443,   446,   447,   450,   456,
     460,   466,   470,   476,   480,   486,   487,   493,   500,   506,
     513,   520,   523,   526,   533,   539,   545,   549,   553,   558,
     564,   568
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_LITERAL", "TRUE_T", "FALSE_T",
  "DOUBLE_LITERAL", "STRING_LITERAL", "NULL_T", "IDENTIFIER", "FUNCTION",
  "IF", "ELSE", "ELSIF", "WHILE", "FOR", "FOREACH", "RETURN_T", "BREAK",
  "CONTINUE", "LP", "RP", "LC", "RC", "LB", "RB", "SEMICOLON", "COLON",
  "COMMA", "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE", "GT", "GE", "LT", "LE",
  "ADD", "SUB", "MUL", "DIV", "MOD", "EXCLAMATION", "DOT", "ADD_ASSIGN_T",
  "SUB_ASSIGN_T", "MUL_ASSIGN_T", "DIV_ASSIGN_T", "MOD_ASSIGN_T",
  "INCREMENT", "DECREMENT", "CLOSURE", "GLOBAL_T", "TRY", "CATCH",
  "FINALLY", "THROW", "EXTEND", "STATIC", "FINAL", "CLASS", "ASSIGN_T",
  "'~'", "LOWER_THAN_ELSE", "$accept", "program", "translation_unit",
  "definition_or_statement", "def_class", "class_extend", "field_def",
  "instant_filed", "methods_def", "method_or_gs", "method_def",
  "getter_def", "setter_def", "function_definition", "parameter_list",
  "argument_list", "statement_list", "expression", "assignment_expression",
  "assignment_operator", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "$@1", "primary_expression", "array_literal", "closure_definition",
  "expression_list", "statement", "global_statement", "identifier_list",
  "if_statement", "elsif_list", "elsif", "while_statement",
  "for_statement", "foreach_statement", "expression_opt",
  "return_statement", "break_statement", "continue_statement",
  "try_statement", "throw_statement", "block", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   126,   317
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,  -108,  -108,  -108,  -108,  -108,  -108,   -11,     6,    23,
      38,    48,    60,   357,    82,   127,   357,   357,   383,   383,
      29,   150,   148,   357,   173,   176,   194,    13,  -108,  -108,
    -108,    76,  -108,   166,   206,   152,   154,   165,   116,  -108,
     393,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,    89,   224,   357,   357,   357,
     236,   218,   221,  -108,  -108,    33,  -108,   140,  -108,    57,
    -108,   229,     5,  -108,   104,   214,   137,   121,   393,   191,
    -108,  -108,  -108,   357,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   357,   241,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,   357,  -108,    42,
    -108,    16,    50,    58,   225,   227,  -108,  -108,  -108,   294,
      31,  -108,   148,    62,  -108,   244,  -108,   271,  -108,   235,
     148,  -108,   357,   248,   237,  -108,   206,   152,   154,   154,
     165,   165,   165,   165,   116,   116,  -108,  -108,  -108,    34,
     238,  -108,  -108,   357,   148,    91,   148,   148,   357,   357,
    -108,  -108,   148,    93,  -108,   148,   251,  -108,  -108,  -108,
     252,  -108,  -108,  -108,   357,  -108,   334,  -108,  -108,   148,
     226,  -108,   242,    96,  -108,   148,  -108,  -108,   243,    -2,
    -108,   139,  -108,    97,  -108,   148,   249,   228,  -108,   357,
     148,  -108,   148,   -14,   253,   240,  -108,    -2,    -2,    -2,
    -108,  -108,  -108,  -108,   357,   148,  -108,   250,  -108,   217,
      32,   261,  -108,    14,  -108,  -108,  -108,  -108,   105,  -108,
     148,   148,   148,   108,   148,    39,   263,  -108,   148,  -108,
    -108,  -108,   148,   274,   148,   113,   148,  -108,  -108,   148,
    -108,   148,   275,  -108,  -108,   148,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    80,    83,    84,    81,    82,    85,    79,     0,     0,
       0,     0,     0,   121,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     4,     8,
       6,     0,    35,    37,    46,    48,    50,    53,    58,    61,
      65,    68,    86,    87,     7,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,   121,
       0,   122,     0,   124,   125,     0,    95,     0,    66,    65,
      67,     0,     0,   109,     0,     0,     0,     0,     0,    11,
       1,     5,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,    45,    74,    75,    40,     0,    78,     0,
      31,     0,     0,     0,     0,     0,   123,    77,    88,     0,
       0,    29,     0,     0,   108,     0,   131,     0,    33,     0,
       0,   129,     0,     0,     0,    36,    47,    49,    51,    52,
      54,    55,    56,    57,    59,    60,    62,    63,    64,     0,
      70,    38,    76,     0,     0,     0,     0,     0,   121,     0,
      89,    96,     0,     0,    93,     0,     0,   110,   130,    34,
       0,   127,    39,    10,     0,    69,     0,    32,    28,     0,
     111,   118,     0,     0,    91,     0,    92,    30,     0,    18,
      12,     0,    72,     0,    27,     0,     0,   113,   115,   121,
       0,    90,     0,     0,     0,     0,    14,    18,    18,    18,
      13,    73,    71,   112,     0,     0,   116,     0,   120,   128,
       0,     0,    24,     0,     9,    15,    16,    17,     0,   114,
       0,     0,     0,     0,     0,     0,     0,    23,     0,   119,
     126,    21,     0,     0,     0,     0,     0,   117,    20,     0,
      22,     0,     0,    26,    19,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,   257,  -108,  -108,  -108,  -108,  -108,   -35,
    -108,  -108,  -108,  -108,  -107,   128,  -108,   -13,   -16,   230,
    -108,   208,   220,   156,   109,   134,    -7,   120,  -108,  -108,
    -108,  -108,  -108,   -70,  -108,  -108,  -108,  -108,   110,  -108,
    -108,  -108,   -57,  -108,  -108,  -108,  -108,  -108,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,    29,   134,   189,   190,   205,   206,
     207,   208,   209,    30,   123,   109,   127,    31,    32,   107,
      33,    34,    35,    36,    37,    38,    39,    40,   211,    41,
      42,    43,    67,    44,    45,    74,    46,   197,   198,    47,
      48,    49,    62,    50,    51,    52,    53,    54,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      61,    66,   114,    65,   155,   128,   220,   203,    75,    55,
      77,    68,    70,   163,   121,    56,     1,     2,     3,     4,
       5,     6,     7,     8,     9,   121,   122,    10,    11,    12,
      13,    14,    15,    16,   235,    17,    75,   154,    71,   110,
     121,   121,   164,    57,   112,   113,    61,   221,   121,    72,
     171,    18,   162,   232,   117,    19,   204,   169,    58,   175,
     244,    83,    83,   152,    20,    21,    22,   135,    59,    23,
     153,   156,    24,    25,   178,   236,   180,   181,    83,   157,
      60,    97,   184,   165,   149,   186,    83,   146,   147,   148,
     166,   151,     1,     2,     3,     4,     5,     6,     7,   194,
      98,   182,    82,   161,    83,   201,   104,   105,    63,    16,
     108,    17,   179,   233,   185,   213,   172,   200,   212,   166,
     218,   166,   219,   222,    83,   153,   238,    18,   245,   242,
     124,    19,   125,    83,   251,   229,   166,   177,    69,    69,
      20,   166,   217,   237,    78,    61,   183,   131,    24,    83,
     239,   240,   241,    64,   243,    94,    95,    96,   247,    73,
     110,   191,   248,   118,   250,   210,   252,    83,   119,   253,
      75,   254,   225,   226,   227,   256,     1,     2,     3,     4,
       5,     6,     7,    86,    87,    79,    61,    88,    89,    90,
      91,   129,   130,    16,    80,    17,    84,   140,   141,   142,
     143,   228,    92,    93,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,     1,     2,     3,
       4,     5,     6,     7,    20,     9,   144,   145,    10,    11,
      12,    13,    14,    15,    16,    85,    17,   126,   195,   196,
     215,   196,   138,   139,   111,   115,    83,   116,   133,   120,
     150,   158,    18,   167,   159,   170,    19,   173,   176,   174,
     187,   188,   223,   224,   202,    20,    21,    22,   199,   214,
      23,   230,   231,    24,     1,     2,     3,     4,     5,     6,
       7,   234,     9,   246,    81,    10,    11,    12,    13,    14,
      15,    16,   136,    17,   168,   249,   255,     1,     2,     3,
       4,     5,     6,     7,   193,   137,     0,   216,   132,    18,
       0,     0,     0,    19,    16,     0,    17,   160,     0,     0,
       0,     0,    20,    21,    22,     0,     0,    23,     0,     0,
      24,     0,    18,     0,     0,     0,    19,     1,     2,     3,
       4,     5,     6,     7,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    24,    16,   192,    17,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    19,    16,     0,    17,
       0,     0,     0,     0,     0,    20,     1,     2,     3,     4,
       5,     6,     7,    24,     0,    18,     0,     0,     0,    19,
       0,     0,     0,    16,     0,    17,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    24,    97,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106
};

static const yytype_int16 yycheck[] =
{
      13,    17,    59,    16,   111,    75,    20,     9,    22,    20,
      23,    18,    19,   120,     9,     9,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     9,    21,    14,    15,    16,
      17,    18,    19,    20,    20,    22,    22,    21,     9,    55,
       9,     9,   122,    20,    57,    58,    59,    61,     9,    20,
     130,    38,    21,    21,    21,    42,    58,   127,    20,    25,
      21,    28,    28,    21,    51,    52,    53,    83,    20,    56,
      28,    21,    59,    60,   154,    61,   156,   157,    28,    21,
      20,    24,   162,    21,    97,   165,    28,    94,    95,    96,
      28,   107,     3,     4,     5,     6,     7,     8,     9,   179,
      43,   158,    26,   119,    28,   185,    49,    50,    26,    20,
      21,    22,    21,   220,    21,   195,   132,    21,    21,    28,
     200,    28,   202,   203,    28,    28,    21,    38,   235,    21,
      26,    42,    28,    28,    21,   215,    28,   153,    18,    19,
      51,    28,   199,   223,    24,   158,   159,    26,    59,    28,
     230,   231,   232,    26,   234,    39,    40,    41,   238,     9,
     176,   174,   242,    23,   244,    26,   246,    28,    28,   249,
      22,   251,   207,   208,   209,   255,     3,     4,     5,     6,
       7,     8,     9,    31,    32,     9,   199,    33,    34,    35,
      36,    54,    55,    20,     0,    22,    30,    88,    89,    90,
      91,   214,    37,    38,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     3,     4,     5,
       6,     7,     8,     9,    51,    11,    92,    93,    14,    15,
      16,    17,    18,    19,    20,    29,    22,    23,    12,    13,
      12,    13,    86,    87,    20,     9,    28,    26,    57,    20,
       9,    26,    38,     9,    27,    20,    42,     9,    20,    22,
       9,     9,     9,    23,    21,    51,    52,    53,    26,    20,
      56,    21,    55,    59,     3,     4,     5,     6,     7,     8,
       9,    20,    11,    20,    27,    14,    15,    16,    17,    18,
      19,    20,    84,    22,    23,    21,    21,     3,     4,     5,
       6,     7,     8,     9,   176,    85,    -1,   197,    78,    38,
      -1,    -1,    -1,    42,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      59,    -1,    38,    -1,    -1,    -1,    42,     3,     4,     5,
       6,     7,     8,     9,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    20,    21,    22,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    51,     3,     4,     5,     6,
       7,     8,     9,    59,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    24,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      14,    15,    16,    17,    18,    19,    20,    22,    38,    42,
      51,    52,    53,    56,    59,    60,    65,    66,    67,    68,
      77,    81,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    93,    94,    95,    97,    98,   100,   103,   104,   105,
     107,   108,   109,   110,   111,    20,     9,    20,    20,    20,
      20,    81,   106,    26,    26,    81,    82,    96,    90,    91,
      90,     9,    20,     9,    99,    22,   112,    81,    91,     9,
       0,    67,    26,    28,    30,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    24,    43,    44,
      45,    46,    47,    48,    49,    50,    61,    83,    21,    79,
      82,    20,    81,    81,   106,     9,    26,    21,    23,    28,
      20,     9,    21,    78,    26,    28,    23,    80,    97,    54,
      55,    26,    83,    57,    69,    82,    85,    86,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    81,
       9,    82,    21,    28,    21,    78,    21,    21,    26,    27,
      23,    82,    21,    78,   112,    21,    28,     9,    23,    97,
      20,   112,    82,     9,    22,    25,    20,    82,   112,    21,
     112,   112,   106,    81,   112,    21,   112,     9,     9,    70,
      71,    81,    21,    79,   112,    12,    13,   101,   102,    26,
      21,   112,    21,     9,    58,    72,    73,    74,    75,    76,
      26,    92,    21,   112,    20,    12,   102,   106,   112,   112,
      20,    61,   112,     9,    23,    73,    73,    73,    81,   112,
      21,    55,    21,    78,    20,    20,    61,   112,    21,   112,
     112,   112,    21,   112,    21,    78,    20,   112,   112,    21,
     112,    21,   112,   112,   112,    21,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    67,    67,    67,    68,
      69,    69,    70,    71,    72,    73,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    92,    91,    91,    91,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   102,   103,   104,
     105,   106,   106,   107,   108,   109,   110,   110,   110,   111,
     112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     7,
       2,     0,     1,     2,     1,     2,     2,     2,     0,     6,
       5,     4,     5,     3,     2,     7,     6,     6,     5,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     1,     4,
       3,     6,     0,     6,     2,     2,     4,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       6,     5,     5,     4,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     5,     7,     6,     8,     1,     2,     5,     5,     9,
       7,     0,     1,     3,     2,     2,     9,     4,     7,     3,
       3,     2
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
        case 2:
#line 56 "sython.y" /* yacc.c:1646  */
    {
	printf("\n>>>>>>>>>no error!<<<<<<<<<<<<<\n");	;	
	}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "sython.y" /* yacc.c:1646  */
    {
		StatementList* list = getCurrentInterpreter()->list;
    	(yyval.statement_list) = list->add(list, (yyvsp[0].statement_list));
	}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "sython.y" /* yacc.c:1646  */
    {
	    	(yyval.statement_list) = (yyvsp[-1].statement_list)->add((yyvsp[-1].statement_list), (yyvsp[0].statement_list));
    	}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "sython.y" /* yacc.c:1646  */
    {
	//StatementList* list = getCurrentInterpreter()->list;
    		//$$ = list->add(list, $1);	
                
	}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 132 "sython.y" /* yacc.c:1646  */
    {
          (yyval.statement) =initFunctionDefineStatement((yyvsp[-4].identifier), (yyvsp[-2].parameter_list), (yyvsp[0].statement_list));
        }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 136 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement) = initFunctionDefineStatement((yyvsp[-3].identifier), NULL, (yyvsp[0].statement_list));
        }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 142 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 146 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "sython.y" /* yacc.c:1646  */
    {
            (yyval.argument_list) = initArgumentList((yyvsp[0].expression));
		//printf("argument_list-->assignment_expression\n");
        }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "sython.y" /* yacc.c:1646  */
    {
            (yyval.argument_list) = (yyvsp[-2].argument_list)->add((yyvsp[-2].argument_list), (yyvsp[0].expression));
        }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement_list) =  initStatementList();
    	   (yyval.statement_list)->add((yyval.statement_list), (yyvsp[0].statement));
        }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "sython.y" /* yacc.c:1646  */
    {
          (yyval.statement_list) = (yyvsp[-1].statement_list)->add((yyvsp[-1].statement_list), (yyvsp[0].statement));
        }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "sython.y" /* yacc.c:1646  */
    {//printf("assignment_expression\n");
	}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 184 "sython.y" /* yacc.c:1646  */
    {//printf("assignment_expression-->logicalor_expression\n");
	}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 187 "sython.y" /* yacc.c:1646  */
    {
		//if()
        	(yyval.expression) = initAssignExpression2((yyvsp[-2].expression), (yyvsp[0].expression));
		//printf("assignment_expression-->postfix_expression assignment_operator assignment_expressio\n");
        }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 199 "sython.y" /* yacc.c:1646  */
    {
           (yyval.optype)=ASSIGN_T_OPERATOR;
        }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 203 "sython.y" /* yacc.c:1646  */
    {
           (yyval.optype)=ADD_OPERATOR;
        }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 207 "sython.y" /* yacc.c:1646  */
    {
           (yyval.optype)=SUB_OPERATOR;
        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 211 "sython.y" /* yacc.c:1646  */
    {
            (yyval.optype)=MUL_OPERATOR;
        }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 215 "sython.y" /* yacc.c:1646  */
    {
            (yyval.optype)=DIV_OPERATOR;
        }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "sython.y" /* yacc.c:1646  */
    {
            (yyval.optype)=MOD_OPERATOR;
        }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 227 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 235 "sython.y" /* yacc.c:1646  */
    {
          ;
        }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 243 "sython.y" /* yacc.c:1646  */
    {
                 (yyval.expression) = initBinaryExpression(EQ_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 247 "sython.y" /* yacc.c:1646  */
    {
             (yyval.expression) = initBinaryExpression(NQ_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 254 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initBinaryExpression(GT_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 258 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initBinaryExpression(GE_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 262 "sython.y" /* yacc.c:1646  */
    {
             (yyval.expression) = initBinaryExpression(LT_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 266 "sython.y" /* yacc.c:1646  */
    {
           (yyval.expression) = initBinaryExpression(LE_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 273 "sython.y" /* yacc.c:1646  */
    {
        	(yyval.expression) = initBinaryExpression(ADD_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));  
        }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 277 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initBinaryExpression(SUB_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 282 "sython.y" /* yacc.c:1646  */
    {}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 284 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initBinaryExpression(MUL_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 288 "sython.y" /* yacc.c:1646  */
    {
           (yyval.expression) = initBinaryExpression(DIV_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 292 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initBinaryExpression(MOD_OPERATOR, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 299 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initUnaryExpression(SUB_OPERATOR, (yyvsp[0].expression));
        }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 303 "sython.y" /* yacc.c:1646  */
    {
           (yyval.expression) = initUnaryExpression(NOT_OPERATOR, (yyvsp[0].expression));
        }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 308 "sython.y" /* yacc.c:1646  */
    {
		//printf("primary_expression\n");
	}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 312 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 316 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 320 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 327 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 331 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 335 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 339 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 346 "sython.y" /* yacc.c:1646  */
    {
           (yyval.expression) = initFunctionCallExpression((yyvsp[-3].identifier), (yyvsp[-1].argument_list));
        }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 350 "sython.y" /* yacc.c:1646  */
    {
		(yyval.expression)=(yyvsp[-1].expression);			
	}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 354 "sython.y" /* yacc.c:1646  */
    {
            (yyval.expression) = initFunctionCallExpression((yyvsp[-2].identifier), NULL);
        }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 358 "sython.y" /* yacc.c:1646  */
    {	/*if(strcmp(yylval.identifier->str,"print")!=0){
			//$$ = initVariableExpression($1);
			//printf("\nIDENTIFIER %s\n", yylval.identifier->str );		
		}else{
			//printf("\nPRINT %s\n", yylval.identifier->str );
		}*/
		(yyval.expression) = initVariableExpression((yyvsp[0].identifier));
            
        }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 367 "sython.y" /* yacc.c:1646  */
    {(yyval.expression) = initValueExpression((yyvsp[0].value));}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 368 "sython.y" /* yacc.c:1646  */
    {(yyval.expression) = initValueExpression((yyvsp[0].value));}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 369 "sython.y" /* yacc.c:1646  */
    {(yyval.expression) = initValueExpression((yyvsp[0].value));}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 371 "sython.y" /* yacc.c:1646  */
    {
            {(yyval.expression) = initValueExpression((yyvsp[0].value));}
        }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 375 "sython.y" /* yacc.c:1646  */
    {
            {(yyval.expression) = initValueExpression((yyvsp[0].value));}
        }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 379 "sython.y" /* yacc.c:1646  */
    {
            {(yyval.expression) = initValueExpression((yyvsp[0].value));}
        }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 387 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 391 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 397 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 401 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 405 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 409 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 415 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 419 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 423 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 429 "sython.y" /* yacc.c:1646  */
    {
        	(yyval.statement) = initExpressionStatement((yyvsp[-1].expression));
        }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 437 "sython.y" /* yacc.c:1646  */
    {
    		(yyval.statement) = initReturnStatement(NULL);
    	}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 440 "sython.y" /* yacc.c:1646  */
    {
		(yyval.statement) = initBreakStatement();
	}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 443 "sython.y" /* yacc.c:1646  */
    {
   		(yyval.statement) = initContinueStatement();
    	}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 451 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 457 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 461 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 467 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement) = initIfStatement((yyvsp[-2].expression), (yyvsp[0].statement_list));
        }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 471 "sython.y" /* yacc.c:1646  */
    {
            IfStatement* ifS =  initIfStatement((yyvsp[-4].expression), (yyvsp[-2].statement_list));
    	    ifS->addElse(ifS, (yyvsp[0].statement_list));
            (yyval.statement)=ifS;
        }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 477 "sython.y" /* yacc.c:1646  */
    {
           	
        }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 481 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 488 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 494 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 501 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 508 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement) = initForStatement((yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].statement_list));
        }
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 514 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 520 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 527 "sython.y" /* yacc.c:1646  */
    {
            (yyval.statement) = initReturnStatement((yyvsp[-1].expression));
        }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 534 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 540 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 546 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 550 "sython.y" /* yacc.c:1646  */
    {
           
        }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 554 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 559 "sython.y" /* yacc.c:1646  */
    {
            
        }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 565 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement_list) = (yyvsp[-1].statement_list);
        }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 569 "sython.y" /* yacc.c:1646  */
    {
           (yyval.statement_list) = NULL;
        }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2325 "y.tab.c" /* yacc.c:1646  */
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
#line 573 "sython.y" /* yacc.c:1906  */


