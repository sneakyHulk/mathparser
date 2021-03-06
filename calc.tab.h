/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CALC_TAB_H_INCLUDED
# define YY_YY_CALC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_FLOAT = 259,                 /* T_FLOAT  */
    T_PLUS = 260,                  /* T_PLUS  */
    T_MINUS = 261,                 /* T_MINUS  */
    T_MULTIPLY = 262,              /* T_MULTIPLY  */
    T_DIVIDE = 263,                /* T_DIVIDE  */
    T_LEFT = 264,                  /* T_LEFT  */
    T_RIGHT = 265,                 /* T_RIGHT  */
    T_SIN = 266,                   /* T_SIN  */
    T_COS = 267,                   /* T_COS  */
    T_TAN = 268,                   /* T_TAN  */
    T_SINH = 269,                  /* T_SINH  */
    T_COSH = 270,                  /* T_COSH  */
    T_TANH = 271,                  /* T_TANH  */
    T_COT = 272,                   /* T_COT  */
    T_SEC = 273,                   /* T_SEC  */
    T_CSC = 274,                   /* T_CSC  */
    T_COTH = 275,                  /* T_COTH  */
    T_SECH = 276,                  /* T_SECH  */
    T_CSCH = 277,                  /* T_CSCH  */
    T_ASIN = 278,                  /* T_ASIN  */
    T_ACOS = 279,                  /* T_ACOS  */
    T_ATAN = 280,                  /* T_ATAN  */
    T_ASINH = 281,                 /* T_ASINH  */
    T_ACOSH = 282,                 /* T_ACOSH  */
    T_ATANH = 283,                 /* T_ATANH  */
    T_ACOT = 284,                  /* T_ACOT  */
    T_ASEC = 285,                  /* T_ASEC  */
    T_ACSC = 286,                  /* T_ACSC  */
    T_ACOTH = 287,                 /* T_ACOTH  */
    T_ASECH = 288,                 /* T_ASECH  */
    T_ACSCH = 289,                 /* T_ACSCH  */
    T_MIN = 290,                   /* T_MIN  */
    T_MAX = 291,                   /* T_MAX  */
    T_EXP = 292,                   /* T_EXP  */
    T_ABS = 293,                   /* T_ABS  */
    T_LN = 294,                    /* T_LN  */
    T_LOG = 295,                   /* T_LOG  */
    T_LB = 296,                    /* T_LB  */
    T_LG = 297,                    /* T_LG  */
    T_UNARY_MINUS = 298,           /* T_UNARY_MINUS  */
    T_UNARY_PLUS = 299,            /* T_UNARY_PLUS  */
    T_EXPONENTIATION = 300,        /* T_EXPONENTIATION  */
    T_COMMA = 301                  /* T_COMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "calc.y"

	long int ival;
	double fval;

#line 115 "calc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CALC_TAB_H_INCLUDED  */
