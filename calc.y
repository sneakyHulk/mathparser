%{

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
extern int yyparse();

void yyerror(const char* s);
int parse_string(const char* in, int i);
%}

%union {
	long int ival;
	double fval;
}

%token<ival> T_INT
%token<fval> T_FLOAT
%token T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LEFT T_RIGHT
%token T_SIN T_COS T_TAN T_SINH T_COSH T_TANH T_COT T_SEC T_CSC T_COTH T_SECH T_CSCH T_ASIN T_ACOS T_ATAN T_ASINH T_ACOSH T_ATANH T_ACOT T_ASEC T_ACSC T_ACOTH T_ASECH T_ACSCH T_MIN T_MAX T_EXP T_ABS T_LN T_LOG T_LB T_LG

%left T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE
%right T_UNARY_MINUS T_UNARY_PLUS
%right T_EXPONENTIATION
%left T_COMMA


%type<ival> expression
%type<fval> mixed_expression

%start calculation

%%

calculation:
	   | mixed_expression { printf("\tResult: %f\n", $1); }
	   | expression { printf("\tResult: %i\n", $1); }
;

mixed_expression: T_FLOAT                 									{ $$ = $1; }
	  | mixed_expression T_PLUS mixed_expression							{ $$ = $1 + $3; }
	  | mixed_expression T_MINUS mixed_expression							{ $$ = $1 - $3; }
	  | mixed_expression T_MULTIPLY mixed_expression						{ $$ = $1 * $3; }
	  | mixed_expression T_DIVIDE mixed_expression							{ $$ = $1 / $3; }
	  | mixed_expression T_EXPONENTIATION mixed_expression					{ $$ = pow($1, $3); }
	  | T_MINUS mixed_expression						%prec T_UNARY_MINUS	{ $$ = -$2; }
	  | T_PLUS mixed_expression							%prec T_UNARY_PLUS	{ $$ = +$2; }
	  | T_LEFT mixed_expression T_RIGHT										{ $$ = $2; }

	  | T_MAX T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT		{ $$ = $3 < $5 ? $5 : $3; }
	  | T_MIN T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT		{ $$ = $3 < $5 ? $3 : $5; }
	  | T_LN T_LEFT mixed_expression T_RIGHT								{ $$ = log($3); }
	  | T_LG T_LEFT mixed_expression T_RIGHT								{ $$ = log10($3); }
	  | T_LB T_LEFT mixed_expression T_RIGHT								{ $$ = log2($3); }
	  | T_LOG T_LEFT mixed_expression T_COMMA mixed_expression T_RIGHT		{ $$ = log($3) / log($5); }
	  | T_SIN T_LEFT mixed_expression T_RIGHT								{ $$ = sin($3); }
	  | T_COS T_LEFT mixed_expression T_RIGHT								{ $$ = cos($3); }
	  | T_TAN T_LEFT mixed_expression T_RIGHT								{ $$ = tan($3); }
	  | T_SINH T_LEFT mixed_expression T_RIGHT								{ $$ = sinh($3); }
	  | T_COSH T_LEFT mixed_expression T_RIGHT								{ $$ = cosh($3); }
	  | T_TANH T_LEFT mixed_expression T_RIGHT								{ $$ = tanh($3); }
	  | T_COT T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / tan($3); }
	  | T_SEC T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / cos($3); }
	  | T_CSC T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / sin($3); }
	  | T_COTH T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / tanh($3); }
	  | T_SECH T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / cosh($3); }
	  | T_CSCH T_LEFT mixed_expression T_RIGHT								{ $$ = 1.0 / sinh($3); }
	  | T_ASIN T_LEFT mixed_expression T_RIGHT								{ $$ = asin($3); }
	  | T_ACOS T_LEFT mixed_expression T_RIGHT								{ $$ = acos($3); }
	  | T_ATAN T_LEFT mixed_expression T_RIGHT								{ $$ = atan($3); }
	  | T_ASINH T_LEFT mixed_expression T_RIGHT								{ $$ = asinh($3); }
	  | T_ACOSH T_LEFT mixed_expression T_RIGHT								{ $$ = acosh($3); }
	  | T_ATANH T_LEFT mixed_expression T_RIGHT								{ $$ = atanh($3); }
	  | T_ACOT T_LEFT mixed_expression T_RIGHT								{ $$ = atan(1.0 / $3); }
	  | T_ASEC T_LEFT mixed_expression T_RIGHT								{ $$ = acos(1.0 / $3); }
	  | T_ACSC T_LEFT mixed_expression T_RIGHT								{ $$ = asin(1.0 / $3); }
	  | T_ACOTH T_LEFT mixed_expression T_RIGHT								{ $$ = atanh(1.0 / $3); }
	  | T_ASECH T_LEFT mixed_expression T_RIGHT								{ $$ = acosh(1.0 / $3); }
	  | T_ACSCH T_LEFT mixed_expression T_RIGHT								{ $$ = asinh(1.0 / $3); }


	  | expression T_PLUS mixed_expression	 								{ $$ = $1 + $3; }
	  | expression T_MINUS mixed_expression	 								{ $$ = $1 - $3; }
	  | expression T_MULTIPLY mixed_expression 								{ $$ = $1 * $3; }
	  | expression T_DIVIDE mixed_expression								{ $$ = $1 / $3; }
	  | expression T_EXPONENTIATION mixed_expression						{ $$ = pow((double)$1, $3); }

	  | T_MAX T_LEFT expression T_COMMA mixed_expression T_RIGHT			{ $$ = (double)$3 < $5 ? $5 : (double)$3; }
	  | T_MIN T_LEFT expression T_COMMA mixed_expression T_RIGHT			{ $$ = (double)$3 < $5 ? (double)$3 : $5; }
	  | T_LOG T_LEFT expression T_COMMA mixed_expression T_RIGHT			{ $$ = log((double)$3) / log($5); }

	  | mixed_expression T_PLUS expression	 								{ $$ = $1 + $3; }
	  | mixed_expression T_MINUS expression	 								{ $$ = $1 - $3; }
	  | mixed_expression T_MULTIPLY expression 								{ $$ = $1 * $3; }
	  | mixed_expression T_DIVIDE expression								{ $$ = $1 / $3; }
	  | mixed_expression T_EXPONENTIATION expression						{ $$ = pow((double)$1, $3); }

	  | T_MAX T_LEFT mixed_expression T_COMMA expression T_RIGHT			{ $$ = $3 < (double)$5 ? (double)$5 : $3; }
	  | T_MIN T_LEFT mixed_expression T_COMMA expression T_RIGHT			{ $$ = $3 < (double)$5 ? $3 : (double)$5; }
	  | T_LOG T_LEFT mixed_expression T_COMMA expression T_RIGHT			{ $$ = log($3) / log((double)$5); }

	  | expression T_DIVIDE expression										{ $$ = $1 / (double)$3; }
	  | expression T_EXPONENTIATION expression								{ $$ = pow((double)$1, (double)$3); }

	  | T_LN T_LEFT expression T_RIGHT										{ $$ = log((double)$3); }
	  | T_LG T_LEFT expression T_RIGHT										{ $$ = log10((double)$3); }
	  | T_LB T_LEFT expression T_RIGHT										{ $$ = log2((double)$3); }
	  | T_LOG T_LEFT expression T_COMMA expression T_RIGHT					{ $$ = log((double)$3) / log((double)$5); }
	  | T_SIN T_LEFT expression T_RIGHT										{ $$ = sin((double)$3); }
	  | T_COS T_LEFT expression T_RIGHT										{ $$ = cos((double)$3); }
	  | T_TAN T_LEFT expression T_RIGHT										{ $$ = tan((double)$3); }
	  | T_SINH T_LEFT expression T_RIGHT									{ $$ = sinh((double)$3); }
	  | T_COSH T_LEFT expression T_RIGHT									{ $$ = cosh((double)$3); }
	  | T_TANH T_LEFT expression T_RIGHT									{ $$ = tanh((double)$3); }
	  | T_COT T_LEFT expression T_RIGHT										{ $$ = 1.0 / tan((double)$3); }
	  | T_SEC T_LEFT expression T_RIGHT										{ $$ = 1.0 / cos((double)$3); }
	  | T_CSC T_LEFT expression T_RIGHT										{ $$ = 1.0 / sin((double)$3); }
	  | T_COTH T_LEFT expression T_RIGHT									{ $$ = 1.0 / tanh((double)$3); }
	  | T_SECH T_LEFT expression T_RIGHT									{ $$ = 1.0 / cosh((double)$3); }
	  | T_CSCH T_LEFT expression T_RIGHT									{ $$ = 1.0 / sinh((double)$3); }
	  | T_ASIN T_LEFT expression T_RIGHT									{ $$ = asin((double)$3); }
	  | T_ACOS T_LEFT expression T_RIGHT									{ $$ = acos((double)$3); }
	  | T_ATAN T_LEFT expression T_RIGHT									{ $$ = atan((double)$3); }
	  | T_ASINH T_LEFT expression T_RIGHT									{ $$ = asinh((double)$3); }
	  | T_ACOSH T_LEFT expression T_RIGHT									{ $$ = acosh((double)$3); }
	  | T_ATANH T_LEFT expression T_RIGHT									{ $$ = atanh((double)$3); }
	  | T_ACOT T_LEFT expression T_RIGHT									{ $$ = atan(1.0 / (double)$3); }
	  | T_ASEC T_LEFT expression T_RIGHT									{ $$ = acos(1.0 / (double)$3); }
	  | T_ACSC T_LEFT expression T_RIGHT									{ $$ = asin(1.0 / (double)$3); }
	  | T_ACOTH T_LEFT expression T_RIGHT									{ $$ = atanh(1.0 / (double)$3); }
	  | T_ASECH T_LEFT expression T_RIGHT									{ $$ = acosh(1.0 / (double)$3); }
	  | T_ACSCH T_LEFT expression T_RIGHT									{ $$ = asinh(1.0 / (double)$3); }
;

expression: T_INT													{ $$ = $1; }
	  | expression T_PLUS expression								{ $$ = $1 + $3; }
	  | expression T_MINUS expression								{ $$ = $1 - $3; }
	  | expression T_MULTIPLY expression							{ $$ = $1 * $3; }
	  | T_LEFT expression T_RIGHT									{ $$ = $2; }
	  | T_MINUS expression %prec T_UNARY_MINUS						{ $$ = -$2; }
	  | T_PLUS expression %prec T_UNARY_PLUS						{ $$ = +$2; }
	  | T_MAX T_LEFT expression T_COMMA expression T_RIGHT			{ $$ = $3 < $5 ? $5 : $3; }
	  | T_MIN T_LEFT expression T_COMMA expression T_RIGHT			{ $$ = $3 < $5 ? $3 : $5; }
;

%%

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
