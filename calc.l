%option noyywrap
%option nounistd

%{
#include <stdio.h>

#define YY_DECL int yylex()

#include "calc.tab.h"

%}

%%

[ \t]			;																	// ignore all whitespace
[0-9]*\.[0-9]+  { printf("T_FLOAT"); yylval.fval = atof(yytext); return T_FLOAT; }
[0-9]+			{ printf("T_INT"); yylval.ival = atoi(yytext); return T_INT; }
"+"				{ printf("T_PLUS"); return T_PLUS; }
"-"				{ printf("T_MINUS"); return T_MINUS; }
"*"				{ printf("T_MULTIPLY"); return T_MULTIPLY; }
"/"				{ printf("T_DIVIDE"); return T_DIVIDE; }
"^"				{ printf("T_EXPONENTIATION"); return T_EXPONENTIATION; }
"("				{ printf("T_LEFT"); return T_LEFT; }
")"				{ printf("T_RIGHT"); return T_RIGHT; }
","				{ printf("T_COMMA"); return T_COMMA; }
"sin"			{ printf("T_SIN"); return T_SIN; }
"cos"			{ printf("T_COS"); return T_COS; }
"tan"			{ printf("T_TAN"); return T_TAN; }
"sinh"			{ printf("T_SINH"); return T_SINH; }
"cosh"			{ printf("T_COSH"); return T_COSH; }
"tanh"			{ printf("T_TANH"); return T_TANH; }
"cot"			{ printf("T_COT"); return T_COT; }
"sec"			{ printf("T_SEC"); return T_SEC; }
"csc"			{ printf("T_CSC"); return T_CSC; }
"coth"			{ printf("T_COTH"); return T_COTH; }
"sech"			{ printf("T_SECH"); return T_SECH; }
"csch"			{ printf("T_CSCH"); return T_CSCH; }
"asin"			{ printf("T_ASIN"); return T_ASIN; }
"acos"			{ printf("T_ACOS"); return T_ACOS; }
"atan"			{ printf("T_ATAN"); return T_ATAN; }
"asinh"			{ printf("T_ASINH"); return T_ASINH; }
"acosh"			{ printf("T_ACOSH"); return T_ACOSH; }
"atanh"			{ printf("T_ATANH"); return T_ATANH; }
"acot"			{ printf("T_ACOT"); return T_ACOT; }
"asec"			{ printf("T_ASEC"); return T_ASEC; }
"acsc"			{ printf("T_ACSC"); return T_ACSC; }
"acoth"			{ printf("T_ACOTH"); return T_ACOTH; }
"asech"			{ printf("T_ASECH"); return T_ASECH; }
"acsch"			{ printf("T_ACSCH"); return T_ACSCH; }

"min"			{ printf("T_MIN"); return T_MIN; }
"max"			{ printf("T_MAX"); return T_MAX; }
"exp"			{ printf("T_EXP"); return T_EXP; }
"abs"			{ printf("T_ABS"); return T_ABS; }
"ln"			{ printf("T_LN"); return T_LN; }
"lg"			{ printf("T_LG"); return T_LG; }
"lb"			{ printf("T_LB"); return T_LB; }
"log"			{ printf("T_LOG"); return T_LOG; }
.																					// Ignore everything else

%%

void set_input_string(const char* in, int i) {
  yy_scan_bytes(in, i);
}

void end_lexical_scan(void) {
  yy_delete_buffer(YY_CURRENT_BUFFER);
}
