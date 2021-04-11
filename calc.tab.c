/* A Bison parser, made by GNU Bison 3.7.4.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
extern int yyparse();

void yyerror(const char* s);
int parse_string(const char* in, int i);

#line 84 "calc.tab.c"

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

#include "calc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 4,                    /* T_FLOAT  */
  YYSYMBOL_T_PLUS = 5,                     /* T_PLUS  */
  YYSYMBOL_T_MINUS = 6,                    /* T_MINUS  */
  YYSYMBOL_T_MULTIPLY = 7,                 /* T_MULTIPLY  */
  YYSYMBOL_T_DIVIDE = 8,                   /* T_DIVIDE  */
  YYSYMBOL_T_LEFT = 9,                     /* T_LEFT  */
  YYSYMBOL_T_RIGHT = 10,                   /* T_RIGHT  */
  YYSYMBOL_T_SIN = 11,                     /* T_SIN  */
  YYSYMBOL_T_COS = 12,                     /* T_COS  */
  YYSYMBOL_T_TAN = 13,                     /* T_TAN  */
  YYSYMBOL_T_SINH = 14,                    /* T_SINH  */
  YYSYMBOL_T_COSH = 15,                    /* T_COSH  */
  YYSYMBOL_T_TANH = 16,                    /* T_TANH  */
  YYSYMBOL_T_COT = 17,                     /* T_COT  */
  YYSYMBOL_T_SEC = 18,                     /* T_SEC  */
  YYSYMBOL_T_CSC = 19,                     /* T_CSC  */
  YYSYMBOL_T_COTH = 20,                    /* T_COTH  */
  YYSYMBOL_T_SECH = 21,                    /* T_SECH  */
  YYSYMBOL_T_CSCH = 22,                    /* T_CSCH  */
  YYSYMBOL_T_ASIN = 23,                    /* T_ASIN  */
  YYSYMBOL_T_ACOS = 24,                    /* T_ACOS  */
  YYSYMBOL_T_ATAN = 25,                    /* T_ATAN  */
  YYSYMBOL_T_ASINH = 26,                   /* T_ASINH  */
  YYSYMBOL_T_ACOSH = 27,                   /* T_ACOSH  */
  YYSYMBOL_T_ATANH = 28,                   /* T_ATANH  */
  YYSYMBOL_T_ACOT = 29,                    /* T_ACOT  */
  YYSYMBOL_T_ASEC = 30,                    /* T_ASEC  */
  YYSYMBOL_T_ACSC = 31,                    /* T_ACSC  */
  YYSYMBOL_T_ACOTH = 32,                   /* T_ACOTH  */
  YYSYMBOL_T_ASECH = 33,                   /* T_ASECH  */
  YYSYMBOL_T_ACSCH = 34,                   /* T_ACSCH  */
  YYSYMBOL_T_MIN = 35,                     /* T_MIN  */
  YYSYMBOL_T_MAX = 36,                     /* T_MAX  */
  YYSYMBOL_T_EXP = 37,                     /* T_EXP  */
  YYSYMBOL_T_ABS = 38,                     /* T_ABS  */
  YYSYMBOL_T_LN = 39,                      /* T_LN  */
  YYSYMBOL_T_LOG = 40,                     /* T_LOG  */
  YYSYMBOL_T_LB = 41,                      /* T_LB  */
  YYSYMBOL_T_LG = 42,                      /* T_LG  */
  YYSYMBOL_T_UNARY_MINUS = 43,             /* T_UNARY_MINUS  */
  YYSYMBOL_T_UNARY_PLUS = 44,              /* T_UNARY_PLUS  */
  YYSYMBOL_T_EXPONENTIATION = 45,          /* T_EXPONENTIATION  */
  YYSYMBOL_T_COMMA = 46,                   /* T_COMMA  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_calculation = 48,               /* calculation  */
  YYSYMBOL_mixed_expression = 49,          /* mixed_expression  */
  YYSYMBOL_expression = 50                 /* expression  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   717

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  4
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    39,    40,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    85,    86,    87,    88,    89,    91,
      92,    93,    95,    96,    97,    98,    99,   101,   102,   103,
     105,   106,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     138,   139,   140,   141,   142,   143,   144,   145,   146
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_FLOAT",
  "T_PLUS", "T_MINUS", "T_MULTIPLY", "T_DIVIDE", "T_LEFT", "T_RIGHT",
  "T_SIN", "T_COS", "T_TAN", "T_SINH", "T_COSH", "T_TANH", "T_COT",
  "T_SEC", "T_CSC", "T_COTH", "T_SECH", "T_CSCH", "T_ASIN", "T_ACOS",
  "T_ATAN", "T_ASINH", "T_ACOSH", "T_ATANH", "T_ACOT", "T_ASEC", "T_ACSC",
  "T_ACOTH", "T_ASECH", "T_ACSCH", "T_MIN", "T_MAX", "T_EXP", "T_ABS",
  "T_LN", "T_LOG", "T_LB", "T_LG", "T_UNARY_MINUS", "T_UNARY_PLUS",
  "T_EXPONENTIATION", "T_COMMA", "$accept", "calculation",
  "mixed_expression", "expression", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     675,   -41,   -41,   675,   675,   675,    -2,    -1,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    29,    30,    31,    81,    82,    36,   632,   637,   -40,
     -39,   -40,   -39,    27,   110,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   -41,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   -41,   -41,   188,   194,
     230,   236,   242,   248,   255,   261,   272,   278,   284,   302,
     308,   314,   320,   326,   332,   338,   344,   350,   356,   362,
     368,   374,   380,   386,   392,   398,   404,   410,   416,   422,
     428,   434,   440,   446,   452,   458,   464,   470,   476,   482,
     488,   494,   500,   506,   512,   518,   161,   165,   172,   176,
     524,   530,   180,   184,   536,   542,   548,   554,    -4,    79,
      -4,    79,   -40,   -39,   -40,   -39,   -40,   -39,    -4,    79,
      -4,    79,   -40,   -39,   -40,   -39,   -40,   -39,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   675,   675,   675,   675,
     -41,   -41,   675,   675,   -41,   -41,   -41,   -41,   560,   566,
     572,   578,   584,   590,   596,   602,   608,   614,   620,   626,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    90,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,    12,
      96,    11,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    52,
       7,    53,     8,    54,     9,    55,    10,    56,    44,    91,
      45,    92,    46,    93,    47,    60,    48,    61,    20,    66,
      21,    67,    22,    68,    23,    69,    24,    70,    25,    71,
      26,    72,    27,    73,    28,    74,    29,    75,    30,    76,
      31,    77,    32,    78,    33,    79,    34,    80,    35,    81,
      36,    82,    37,    83,    38,    84,    39,    85,    40,    86,
      41,    87,    42,    88,    43,    89,     0,     0,     0,     0,
      16,    62,     0,     0,    18,    64,    17,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    58,    50,    98,    14,    57,    49,    97,    19,    59,
      51,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,    -3,    80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    41,    43,    78,    79,    80,    85,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    76,    77,    78,    79,    75,    86,    70,    71,
      72,    80,    88,    90,    92,    94,    96,    98,   100,   102,
     104,   106,   108,   110,   112,   114,   116,   118,   120,   122,
     124,   126,   128,   130,   132,   134,   136,   138,   140,   142,
     144,   146,    80,   148,   150,   152,   154,   156,   158,   160,
     162,   164,   166,    40,    42,    44,    83,    84,     0,     0,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    82,    83,    84,     0,
      87,     0,     0,     0,    85,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,    85,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,    76,    77,    78,    79,
      81,    82,    83,    84,     0,     0,     0,    76,    77,    78,
      79,    81,    82,    83,    84,    76,    77,    78,    79,    81,
      82,    83,    84,    76,    77,    78,    79,     0,   168,    81,
      82,    83,    84,     0,   169,     0,    80,   216,     0,     0,
      85,   217,     0,   228,   230,   232,   234,    80,   218,   236,
     238,    85,   219,     0,     0,    80,   222,     0,     0,    85,
     223,     0,     0,    80,     0,    76,    77,    78,    79,    85,
     170,    81,    82,    83,    84,     0,   171,    76,    77,    78,
      79,     0,   172,    81,    82,    83,    84,     0,   173,     0,
      76,    77,    78,    79,     0,   174,    81,    82,    83,    84,
       0,   175,     0,     0,     0,    80,     0,    76,    77,    78,
      79,    85,   176,    81,    82,    83,    84,    80,   177,    76,
      77,    78,    79,    85,   178,     0,   229,   231,   233,   235,
      80,     0,   237,   239,     0,     0,    85,    81,    82,    83,
      84,     0,   179,    76,    77,    78,    79,    80,   180,    81,
      82,    83,    84,    85,   181,    76,    77,    78,    79,    80,
     182,    81,    82,    83,    84,     0,   183,    76,    77,    78,
      79,     0,   184,    81,    82,    83,    84,    85,   185,    76,
      77,    78,    79,    80,   186,    81,    82,    83,    84,    85,
     187,    76,    77,    78,    79,    80,   188,    81,    82,    83,
      84,    85,   189,    76,    77,    78,    79,    80,   190,    81,
      82,    83,    84,    85,   191,    76,    77,    78,    79,    80,
     192,    81,    82,    83,    84,    85,   193,    76,    77,    78,
      79,    80,   194,    81,    82,    83,    84,    85,   195,    76,
      77,    78,    79,    80,   196,    81,    82,    83,    84,    85,
     197,    76,    77,    78,    79,    80,   198,    81,    82,    83,
      84,    85,   199,    76,    77,    78,    79,    80,   200,    81,
      82,    83,    84,    85,   201,    76,    77,    78,    79,    80,
     202,    81,    82,    83,    84,    85,   203,    76,    77,    78,
      79,    80,   204,    81,    82,    83,    84,    85,   205,    76,
      77,    78,    79,    80,   206,    81,    82,    83,    84,    85,
     207,    76,    77,    78,    79,    80,   208,    81,    82,    83,
      84,    85,   209,    76,    77,    78,    79,    80,   210,    81,
      82,    83,    84,    85,   211,    76,    77,    78,    79,    80,
     212,    81,    82,    83,    84,    85,   213,    76,    77,    78,
      79,    80,   214,    81,    82,    83,    84,    85,   215,    76,
      77,    78,    79,    80,   220,    81,    82,    83,    84,    85,
     221,    76,    77,    78,    79,    80,   224,    81,    82,    83,
      84,    85,   225,    76,    77,    78,    79,    80,   226,    81,
      82,    83,    84,    85,   227,    76,    77,    78,    79,    80,
     240,    81,    82,    83,    84,    85,   241,    76,    77,    78,
      79,    80,   242,    81,    82,    83,    84,    85,   243,    76,
      77,    78,    79,    80,   244,    81,    82,    83,    84,    85,
     245,    76,    77,    78,    79,    80,   246,    81,    82,    83,
      84,    85,   247,    76,    77,    78,    79,    80,   248,    81,
      82,    83,    84,    85,   249,    76,    77,    78,    79,    80,
     250,    81,    82,    83,    84,    85,   251,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,    80,     1,     2,
       3,     4,    85,     0,     5,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
       3,     4,     5,     7,     8,    45,    45,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     5,     6,     7,     8,     0,    10,     9,     9,
       9,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    45,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     3,     4,     5,     7,     8,    -1,    -1,
       9,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    45,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    45,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     5,     6,     7,     8,
       5,     6,     7,     8,    -1,    -1,    -1,     5,     6,     7,
       8,     5,     6,     7,     8,     5,     6,     7,     8,     5,
       6,     7,     8,     5,     6,     7,     8,    -1,    10,     5,
       6,     7,     8,    -1,    10,    -1,    45,    46,    -1,    -1,
      45,    46,    -1,   216,   217,   218,   219,    45,    46,   222,
     223,    45,    46,    -1,    -1,    45,    46,    -1,    -1,    45,
      46,    -1,    -1,    45,    -1,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    -1,    10,     5,     6,     7,
       8,    -1,    10,     5,     6,     7,     8,    -1,    10,    -1,
       5,     6,     7,     8,    -1,    10,     5,     6,     7,     8,
      -1,    10,    -1,    -1,    -1,    45,    -1,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,    -1,   216,   217,   218,   219,
      45,    -1,   222,   223,    -1,    -1,    45,     5,     6,     7,
       8,    -1,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    -1,    10,     5,     6,     7,
       8,    -1,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,    10,     5,     6,     7,     8,    45,    10,     5,
       6,     7,     8,    45,    10,     5,     6,     7,     8,    45,
      10,     5,     6,     7,     8,    45,    10,     5,     6,     7,
       8,    45,     5,     6,     7,     8,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    45,     3,     4,
       5,     6,    45,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    39,    40,    41,    42,    48,    49,    50,    49,
      50,    49,    50,    49,    50,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     0,     5,     6,     7,     8,
      45,     5,     6,     7,     8,    45,    10,    10,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    46,    46,    46,    46,
      10,    10,    46,    46,    10,    10,    10,    10,    49,    50,
      49,    50,    49,    50,    49,    50,    49,    50,    49,    50,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     3,     6,     6,     4,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     3,     3,     3,     3,     6,
       6,     6,     3,     3,     3,     3,     3,     6,     6,     6,
       3,     3,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       1,     3,     3,     3,     3,     2,     2,     6,     6
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* calculation: mixed_expression  */
#line 39 "calc.y"
                              { printf("\tResult: %f\n", (yyvsp[0].fval)); }
#line 1362 "calc.tab.c"
    break;

  case 4: /* calculation: expression  */
#line 40 "calc.y"
                        { printf("\tResult: %i\n", (yyvsp[0].ival)); }
#line 1368 "calc.tab.c"
    break;

  case 5: /* mixed_expression: T_FLOAT  */
#line 43 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[0].fval); }
#line 1374 "calc.tab.c"
    break;

  case 6: /* mixed_expression: mixed_expression T_PLUS mixed_expression  */
#line 44 "calc.y"
                                                                                                        { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval); }
#line 1380 "calc.tab.c"
    break;

  case 7: /* mixed_expression: mixed_expression T_MINUS mixed_expression  */
#line 45 "calc.y"
                                                                                                        { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval); }
#line 1386 "calc.tab.c"
    break;

  case 8: /* mixed_expression: mixed_expression T_MULTIPLY mixed_expression  */
#line 46 "calc.y"
                                                                                                        { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval); }
#line 1392 "calc.tab.c"
    break;

  case 9: /* mixed_expression: mixed_expression T_DIVIDE mixed_expression  */
#line 47 "calc.y"
                                                                                                        { (yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].fval); }
#line 1398 "calc.tab.c"
    break;

  case 10: /* mixed_expression: mixed_expression T_EXPONENTIATION mixed_expression  */
#line 48 "calc.y"
                                                                                                { (yyval.fval) = pow((yyvsp[-2].fval), (yyvsp[0].fval)); }
#line 1404 "calc.tab.c"
    break;

  case 11: /* mixed_expression: T_MINUS mixed_expression  */
#line 49 "calc.y"
                                                                                                        { (yyval.fval) = -(yyvsp[0].fval); }
#line 1410 "calc.tab.c"
    break;

  case 12: /* mixed_expression: T_PLUS mixed_expression  */
#line 50 "calc.y"
                                                                                                                { (yyval.fval) = +(yyvsp[0].fval); }
#line 1416 "calc.tab.c"
    break;

  case 13: /* mixed_expression: T_LEFT mixed_expression T_RIGHT  */
#line 51 "calc.y"
                                                                                                                        { (yyval.fval) = (yyvsp[-1].fval); }
#line 1422 "calc.tab.c"
    break;

  case 14: /* mixed_expression: T_MAX T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT  */
#line 53 "calc.y"
                                                                                        { (yyval.fval) = (yyvsp[-3].fval) < (yyvsp[-1].fval) ? (yyvsp[-1].fval) : (yyvsp[-3].fval); }
#line 1428 "calc.tab.c"
    break;

  case 15: /* mixed_expression: T_MIN T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT  */
#line 54 "calc.y"
                                                                                        { (yyval.fval) = (yyvsp[-3].fval) < (yyvsp[-1].fval) ? (yyvsp[-3].fval) : (yyvsp[-1].fval); }
#line 1434 "calc.tab.c"
    break;

  case 16: /* mixed_expression: T_LN T_LEFT mixed_expression T_RIGHT  */
#line 55 "calc.y"
                                                                                                                { (yyval.fval) = log((yyvsp[-1].fval)); }
#line 1440 "calc.tab.c"
    break;

  case 17: /* mixed_expression: T_LG T_LEFT mixed_expression T_RIGHT  */
#line 56 "calc.y"
                                                                                                                { (yyval.fval) = log10((yyvsp[-1].fval)); }
#line 1446 "calc.tab.c"
    break;

  case 18: /* mixed_expression: T_LB T_LEFT mixed_expression T_RIGHT  */
#line 57 "calc.y"
                                                                                                                { (yyval.fval) = log2((yyvsp[-1].fval)); }
#line 1452 "calc.tab.c"
    break;

  case 19: /* mixed_expression: T_LOG T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT  */
#line 58 "calc.y"
                                                                                        { (yyval.fval) = log((yyvsp[-3].fval)) / log((yyvsp[-1].fval)); }
#line 1458 "calc.tab.c"
    break;

  case 20: /* mixed_expression: T_SIN T_LEFT mixed_expression T_RIGHT  */
#line 59 "calc.y"
                                                                                                                { (yyval.fval) = sin((yyvsp[-1].fval)); }
#line 1464 "calc.tab.c"
    break;

  case 21: /* mixed_expression: T_COS T_LEFT mixed_expression T_RIGHT  */
#line 60 "calc.y"
                                                                                                                { (yyval.fval) = cos((yyvsp[-1].fval)); }
#line 1470 "calc.tab.c"
    break;

  case 22: /* mixed_expression: T_TAN T_LEFT mixed_expression T_RIGHT  */
#line 61 "calc.y"
                                                                                                                { (yyval.fval) = tan((yyvsp[-1].fval)); }
#line 1476 "calc.tab.c"
    break;

  case 23: /* mixed_expression: T_SINH T_LEFT mixed_expression T_RIGHT  */
#line 62 "calc.y"
                                                                                                                { (yyval.fval) = sinh((yyvsp[-1].fval)); }
#line 1482 "calc.tab.c"
    break;

  case 24: /* mixed_expression: T_COSH T_LEFT mixed_expression T_RIGHT  */
#line 63 "calc.y"
                                                                                                                { (yyval.fval) = cosh((yyvsp[-1].fval)); }
#line 1488 "calc.tab.c"
    break;

  case 25: /* mixed_expression: T_TANH T_LEFT mixed_expression T_RIGHT  */
#line 64 "calc.y"
                                                                                                                { (yyval.fval) = tanh((yyvsp[-1].fval)); }
#line 1494 "calc.tab.c"
    break;

  case 26: /* mixed_expression: T_COT T_LEFT mixed_expression T_RIGHT  */
#line 65 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / tan((yyvsp[-1].fval)); }
#line 1500 "calc.tab.c"
    break;

  case 27: /* mixed_expression: T_SEC T_LEFT mixed_expression T_RIGHT  */
#line 66 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / cos((yyvsp[-1].fval)); }
#line 1506 "calc.tab.c"
    break;

  case 28: /* mixed_expression: T_CSC T_LEFT mixed_expression T_RIGHT  */
#line 67 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / sin((yyvsp[-1].fval)); }
#line 1512 "calc.tab.c"
    break;

  case 29: /* mixed_expression: T_COTH T_LEFT mixed_expression T_RIGHT  */
#line 68 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / tanh((yyvsp[-1].fval)); }
#line 1518 "calc.tab.c"
    break;

  case 30: /* mixed_expression: T_SECH T_LEFT mixed_expression T_RIGHT  */
#line 69 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / cosh((yyvsp[-1].fval)); }
#line 1524 "calc.tab.c"
    break;

  case 31: /* mixed_expression: T_CSCH T_LEFT mixed_expression T_RIGHT  */
#line 70 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / sinh((yyvsp[-1].fval)); }
#line 1530 "calc.tab.c"
    break;

  case 32: /* mixed_expression: T_ASIN T_LEFT mixed_expression T_RIGHT  */
#line 71 "calc.y"
                                                                                                                { (yyval.fval) = asin((yyvsp[-1].fval)); }
#line 1536 "calc.tab.c"
    break;

  case 33: /* mixed_expression: T_ACOS T_LEFT mixed_expression T_RIGHT  */
#line 72 "calc.y"
                                                                                                                { (yyval.fval) = acos((yyvsp[-1].fval)); }
#line 1542 "calc.tab.c"
    break;

  case 34: /* mixed_expression: T_ATAN T_LEFT mixed_expression T_RIGHT  */
#line 73 "calc.y"
                                                                                                                { (yyval.fval) = atan((yyvsp[-1].fval)); }
#line 1548 "calc.tab.c"
    break;

  case 35: /* mixed_expression: T_ASINH T_LEFT mixed_expression T_RIGHT  */
#line 74 "calc.y"
                                                                                                                { (yyval.fval) = asinh((yyvsp[-1].fval)); }
#line 1554 "calc.tab.c"
    break;

  case 36: /* mixed_expression: T_ACOSH T_LEFT mixed_expression T_RIGHT  */
#line 75 "calc.y"
                                                                                                                { (yyval.fval) = acosh((yyvsp[-1].fval)); }
#line 1560 "calc.tab.c"
    break;

  case 37: /* mixed_expression: T_ATANH T_LEFT mixed_expression T_RIGHT  */
#line 76 "calc.y"
                                                                                                                { (yyval.fval) = atanh((yyvsp[-1].fval)); }
#line 1566 "calc.tab.c"
    break;

  case 38: /* mixed_expression: T_ACOT T_LEFT mixed_expression T_RIGHT  */
#line 77 "calc.y"
                                                                                                                { (yyval.fval) = atan(1.0 / (yyvsp[-1].fval)); }
#line 1572 "calc.tab.c"
    break;

  case 39: /* mixed_expression: T_ASEC T_LEFT mixed_expression T_RIGHT  */
#line 78 "calc.y"
                                                                                                                { (yyval.fval) = acos(1.0 / (yyvsp[-1].fval)); }
#line 1578 "calc.tab.c"
    break;

  case 40: /* mixed_expression: T_ACSC T_LEFT mixed_expression T_RIGHT  */
#line 79 "calc.y"
                                                                                                                { (yyval.fval) = asin(1.0 / (yyvsp[-1].fval)); }
#line 1584 "calc.tab.c"
    break;

  case 41: /* mixed_expression: T_ACOTH T_LEFT mixed_expression T_RIGHT  */
#line 80 "calc.y"
                                                                                                                { (yyval.fval) = atanh(1.0 / (yyvsp[-1].fval)); }
#line 1590 "calc.tab.c"
    break;

  case 42: /* mixed_expression: T_ASECH T_LEFT mixed_expression T_RIGHT  */
#line 81 "calc.y"
                                                                                                                { (yyval.fval) = acosh(1.0 / (yyvsp[-1].fval)); }
#line 1596 "calc.tab.c"
    break;

  case 43: /* mixed_expression: T_ACSCH T_LEFT mixed_expression T_RIGHT  */
#line 82 "calc.y"
                                                                                                                { (yyval.fval) = asinh(1.0 / (yyvsp[-1].fval)); }
#line 1602 "calc.tab.c"
    break;

  case 44: /* mixed_expression: expression T_PLUS mixed_expression  */
#line 85 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].ival) + (yyvsp[0].fval); }
#line 1608 "calc.tab.c"
    break;

  case 45: /* mixed_expression: expression T_MINUS mixed_expression  */
#line 86 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].ival) - (yyvsp[0].fval); }
#line 1614 "calc.tab.c"
    break;

  case 46: /* mixed_expression: expression T_MULTIPLY mixed_expression  */
#line 87 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].ival) * (yyvsp[0].fval); }
#line 1620 "calc.tab.c"
    break;

  case 47: /* mixed_expression: expression T_DIVIDE mixed_expression  */
#line 88 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].ival) / (yyvsp[0].fval); }
#line 1626 "calc.tab.c"
    break;

  case 48: /* mixed_expression: expression T_EXPONENTIATION mixed_expression  */
#line 89 "calc.y"
                                                                                                        { (yyval.fval) = pow((double)(yyvsp[-2].ival), (yyvsp[0].fval)); }
#line 1632 "calc.tab.c"
    break;

  case 49: /* mixed_expression: T_MAX T_LEFT expression T_COMMA mixed_expression T_RIGHT  */
#line 91 "calc.y"
                                                                                        { (yyval.fval) = (double)(yyvsp[-3].ival) < (yyvsp[-1].fval) ? (yyvsp[-1].fval) : (double)(yyvsp[-3].ival); }
#line 1638 "calc.tab.c"
    break;

  case 50: /* mixed_expression: T_MIN T_LEFT expression T_COMMA mixed_expression T_RIGHT  */
#line 92 "calc.y"
                                                                                        { (yyval.fval) = (double)(yyvsp[-3].ival) < (yyvsp[-1].fval) ? (double)(yyvsp[-3].ival) : (yyvsp[-1].fval); }
#line 1644 "calc.tab.c"
    break;

  case 51: /* mixed_expression: T_LOG T_LEFT expression T_COMMA mixed_expression T_RIGHT  */
#line 93 "calc.y"
                                                                                        { (yyval.fval) = log((double)(yyvsp[-3].ival)) / log((yyvsp[-1].fval)); }
#line 1650 "calc.tab.c"
    break;

  case 52: /* mixed_expression: mixed_expression T_PLUS expression  */
#line 95 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].ival); }
#line 1656 "calc.tab.c"
    break;

  case 53: /* mixed_expression: mixed_expression T_MINUS expression  */
#line 96 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].ival); }
#line 1662 "calc.tab.c"
    break;

  case 54: /* mixed_expression: mixed_expression T_MULTIPLY expression  */
#line 97 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].ival); }
#line 1668 "calc.tab.c"
    break;

  case 55: /* mixed_expression: mixed_expression T_DIVIDE expression  */
#line 98 "calc.y"
                                                                                                                { (yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].ival); }
#line 1674 "calc.tab.c"
    break;

  case 56: /* mixed_expression: mixed_expression T_EXPONENTIATION expression  */
#line 99 "calc.y"
                                                                                                        { (yyval.fval) = pow((double)(yyvsp[-2].fval), (yyvsp[0].ival)); }
#line 1680 "calc.tab.c"
    break;

  case 57: /* mixed_expression: T_MAX T_LEFT mixed_expression T_COMMA expression T_RIGHT  */
#line 101 "calc.y"
                                                                                        { (yyval.fval) = (yyvsp[-3].fval) < (double)(yyvsp[-1].ival) ? (double)(yyvsp[-1].ival) : (yyvsp[-3].fval); }
#line 1686 "calc.tab.c"
    break;

  case 58: /* mixed_expression: T_MIN T_LEFT mixed_expression T_COMMA expression T_RIGHT  */
#line 102 "calc.y"
                                                                                        { (yyval.fval) = (yyvsp[-3].fval) < (double)(yyvsp[-1].ival) ? (yyvsp[-3].fval) : (double)(yyvsp[-1].ival); }
#line 1692 "calc.tab.c"
    break;

  case 59: /* mixed_expression: T_LOG T_LEFT mixed_expression T_COMMA expression T_RIGHT  */
#line 103 "calc.y"
                                                                                        { (yyval.fval) = log((yyvsp[-3].fval)) / log((double)(yyvsp[-1].ival)); }
#line 1698 "calc.tab.c"
    break;

  case 60: /* mixed_expression: expression T_DIVIDE expression  */
#line 105 "calc.y"
                                                                                                                        { (yyval.fval) = (yyvsp[-2].ival) / (double)(yyvsp[0].ival); }
#line 1704 "calc.tab.c"
    break;

  case 61: /* mixed_expression: expression T_EXPONENTIATION expression  */
#line 106 "calc.y"
                                                                                                                { (yyval.fval) = pow((double)(yyvsp[-2].ival), (double)(yyvsp[0].ival)); }
#line 1710 "calc.tab.c"
    break;

  case 62: /* mixed_expression: T_LN T_LEFT expression T_RIGHT  */
#line 108 "calc.y"
                                                                                                                        { (yyval.fval) = log((double)(yyvsp[-1].ival)); }
#line 1716 "calc.tab.c"
    break;

  case 63: /* mixed_expression: T_LG T_LEFT expression T_RIGHT  */
#line 109 "calc.y"
                                                                                                                        { (yyval.fval) = log10((double)(yyvsp[-1].ival)); }
#line 1722 "calc.tab.c"
    break;

  case 64: /* mixed_expression: T_LB T_LEFT expression T_RIGHT  */
#line 110 "calc.y"
                                                                                                                        { (yyval.fval) = log2((double)(yyvsp[-1].ival)); }
#line 1728 "calc.tab.c"
    break;

  case 65: /* mixed_expression: T_LOG T_LEFT expression T_COMMA expression T_RIGHT  */
#line 111 "calc.y"
                                                                                                { (yyval.fval) = log((double)(yyvsp[-3].ival)) / log((double)(yyvsp[-1].ival)); }
#line 1734 "calc.tab.c"
    break;

  case 66: /* mixed_expression: T_SIN T_LEFT expression T_RIGHT  */
#line 112 "calc.y"
                                                                                                                        { (yyval.fval) = sin((double)(yyvsp[-1].ival)); }
#line 1740 "calc.tab.c"
    break;

  case 67: /* mixed_expression: T_COS T_LEFT expression T_RIGHT  */
#line 113 "calc.y"
                                                                                                                        { (yyval.fval) = cos((double)(yyvsp[-1].ival)); }
#line 1746 "calc.tab.c"
    break;

  case 68: /* mixed_expression: T_TAN T_LEFT expression T_RIGHT  */
#line 114 "calc.y"
                                                                                                                        { (yyval.fval) = tan((double)(yyvsp[-1].ival)); }
#line 1752 "calc.tab.c"
    break;

  case 69: /* mixed_expression: T_SINH T_LEFT expression T_RIGHT  */
#line 115 "calc.y"
                                                                                                                { (yyval.fval) = sinh((double)(yyvsp[-1].ival)); }
#line 1758 "calc.tab.c"
    break;

  case 70: /* mixed_expression: T_COSH T_LEFT expression T_RIGHT  */
#line 116 "calc.y"
                                                                                                                { (yyval.fval) = cosh((double)(yyvsp[-1].ival)); }
#line 1764 "calc.tab.c"
    break;

  case 71: /* mixed_expression: T_TANH T_LEFT expression T_RIGHT  */
#line 117 "calc.y"
                                                                                                                { (yyval.fval) = tanh((double)(yyvsp[-1].ival)); }
#line 1770 "calc.tab.c"
    break;

  case 72: /* mixed_expression: T_COT T_LEFT expression T_RIGHT  */
#line 118 "calc.y"
                                                                                                                        { (yyval.fval) = 1.0 / tan((double)(yyvsp[-1].ival)); }
#line 1776 "calc.tab.c"
    break;

  case 73: /* mixed_expression: T_SEC T_LEFT expression T_RIGHT  */
#line 119 "calc.y"
                                                                                                                        { (yyval.fval) = 1.0 / cos((double)(yyvsp[-1].ival)); }
#line 1782 "calc.tab.c"
    break;

  case 74: /* mixed_expression: T_CSC T_LEFT expression T_RIGHT  */
#line 120 "calc.y"
                                                                                                                        { (yyval.fval) = 1.0 / sin((double)(yyvsp[-1].ival)); }
#line 1788 "calc.tab.c"
    break;

  case 75: /* mixed_expression: T_COTH T_LEFT expression T_RIGHT  */
#line 121 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / tanh((double)(yyvsp[-1].ival)); }
#line 1794 "calc.tab.c"
    break;

  case 76: /* mixed_expression: T_SECH T_LEFT expression T_RIGHT  */
#line 122 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / cosh((double)(yyvsp[-1].ival)); }
#line 1800 "calc.tab.c"
    break;

  case 77: /* mixed_expression: T_CSCH T_LEFT expression T_RIGHT  */
#line 123 "calc.y"
                                                                                                                { (yyval.fval) = 1.0 / sinh((double)(yyvsp[-1].ival)); }
#line 1806 "calc.tab.c"
    break;

  case 78: /* mixed_expression: T_ASIN T_LEFT expression T_RIGHT  */
#line 124 "calc.y"
                                                                                                                { (yyval.fval) = asin((double)(yyvsp[-1].ival)); }
#line 1812 "calc.tab.c"
    break;

  case 79: /* mixed_expression: T_ACOS T_LEFT expression T_RIGHT  */
#line 125 "calc.y"
                                                                                                                { (yyval.fval) = acos((double)(yyvsp[-1].ival)); }
#line 1818 "calc.tab.c"
    break;

  case 80: /* mixed_expression: T_ATAN T_LEFT expression T_RIGHT  */
#line 126 "calc.y"
                                                                                                                { (yyval.fval) = atan((double)(yyvsp[-1].ival)); }
#line 1824 "calc.tab.c"
    break;

  case 81: /* mixed_expression: T_ASINH T_LEFT expression T_RIGHT  */
#line 127 "calc.y"
                                                                                                                { (yyval.fval) = asinh((double)(yyvsp[-1].ival)); }
#line 1830 "calc.tab.c"
    break;

  case 82: /* mixed_expression: T_ACOSH T_LEFT expression T_RIGHT  */
#line 128 "calc.y"
                                                                                                                { (yyval.fval) = acosh((double)(yyvsp[-1].ival)); }
#line 1836 "calc.tab.c"
    break;

  case 83: /* mixed_expression: T_ATANH T_LEFT expression T_RIGHT  */
#line 129 "calc.y"
                                                                                                                { (yyval.fval) = atanh((double)(yyvsp[-1].ival)); }
#line 1842 "calc.tab.c"
    break;

  case 84: /* mixed_expression: T_ACOT T_LEFT expression T_RIGHT  */
#line 130 "calc.y"
                                                                                                                { (yyval.fval) = atan(1.0 / (double)(yyvsp[-1].ival)); }
#line 1848 "calc.tab.c"
    break;

  case 85: /* mixed_expression: T_ASEC T_LEFT expression T_RIGHT  */
#line 131 "calc.y"
                                                                                                                { (yyval.fval) = acos(1.0 / (double)(yyvsp[-1].ival)); }
#line 1854 "calc.tab.c"
    break;

  case 86: /* mixed_expression: T_ACSC T_LEFT expression T_RIGHT  */
#line 132 "calc.y"
                                                                                                                { (yyval.fval) = asin(1.0 / (double)(yyvsp[-1].ival)); }
#line 1860 "calc.tab.c"
    break;

  case 87: /* mixed_expression: T_ACOTH T_LEFT expression T_RIGHT  */
#line 133 "calc.y"
                                                                                                                { (yyval.fval) = atanh(1.0 / (double)(yyvsp[-1].ival)); }
#line 1866 "calc.tab.c"
    break;

  case 88: /* mixed_expression: T_ASECH T_LEFT expression T_RIGHT  */
#line 134 "calc.y"
                                                                                                                { (yyval.fval) = acosh(1.0 / (double)(yyvsp[-1].ival)); }
#line 1872 "calc.tab.c"
    break;

  case 89: /* mixed_expression: T_ACSCH T_LEFT expression T_RIGHT  */
#line 135 "calc.y"
                                                                                                                { (yyval.fval) = asinh(1.0 / (double)(yyvsp[-1].ival)); }
#line 1878 "calc.tab.c"
    break;

  case 90: /* expression: T_INT  */
#line 138 "calc.y"
                                                                                                                        { (yyval.ival) = (yyvsp[0].ival); }
#line 1884 "calc.tab.c"
    break;

  case 91: /* expression: expression T_PLUS expression  */
#line 139 "calc.y"
                                                                                                        { (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival); }
#line 1890 "calc.tab.c"
    break;

  case 92: /* expression: expression T_MINUS expression  */
#line 140 "calc.y"
                                                                                                        { (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival); }
#line 1896 "calc.tab.c"
    break;

  case 93: /* expression: expression T_MULTIPLY expression  */
#line 141 "calc.y"
                                                                                                { (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival); }
#line 1902 "calc.tab.c"
    break;

  case 94: /* expression: T_LEFT expression T_RIGHT  */
#line 142 "calc.y"
                                                                                                        { (yyval.ival) = (yyvsp[-1].ival); }
#line 1908 "calc.tab.c"
    break;

  case 95: /* expression: T_MINUS expression  */
#line 143 "calc.y"
                                                                                                { (yyval.ival) = -(yyvsp[0].ival); }
#line 1914 "calc.tab.c"
    break;

  case 96: /* expression: T_PLUS expression  */
#line 144 "calc.y"
                                                                                                { (yyval.ival) = +(yyvsp[0].ival); }
#line 1920 "calc.tab.c"
    break;

  case 97: /* expression: T_MAX T_LEFT expression T_COMMA expression T_RIGHT  */
#line 145 "calc.y"
                                                                                { (yyval.ival) = (yyvsp[-3].ival) < (yyvsp[-1].ival) ? (yyvsp[-1].ival) : (yyvsp[-3].ival); }
#line 1926 "calc.tab.c"
    break;

  case 98: /* expression: T_MIN T_LEFT expression T_COMMA expression T_RIGHT  */
#line 146 "calc.y"
                                                                                { (yyval.ival) = (yyvsp[-3].ival) < (yyvsp[-1].ival) ? (yyvsp[-3].ival) : (yyvsp[-1].ival); }
#line 1932 "calc.tab.c"
    break;


#line 1936 "calc.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 149 "calc.y"


/* Declarations */
void set_input_string(const char* in, int i);
void end_lexical_scan(void);

/* This function parses a string */
int parse_string(const char* in, int i) {
  set_input_string(in, i);
  int rv = yyparse();
  end_lexical_scan();
  return rv;
}

int main() {
	parse_string("asinh((-4)^-3 + -2+3)", 22);

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
