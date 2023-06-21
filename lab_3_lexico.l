%{
#include "y.tab.h"
%}

%option noyywrap
%option yylineno

%%
"PI" { return PI; }
"MOD" { return MOD; }
"SQR" { return SQR; }
"CUR" { return CUR; }
"EXP" { return EXP; }
"LN" { return LN; }
"LOG" { return LOG; }
"SGN" { return SGN; }
"INT" { return INT; }
"FIX" { return FIX; }
"FRAC" { return FRAC; }
x { return X; }
[0-9]+(,[0-9]+)?E(\+|\-)?[0-9]+ { return EXPONENCIAL; }
([a-z]|[A-Z])([a-z]|[A-Z]|[0-9])* { return IDENTIFICADOR; }
[0-9]+,[0-9]+ { return DECIMAL; }
[0-9]+ { return ENTERO; }
\n { return '\n'; }
[ \t]+ { }
. {return yytext[0];}
<<EOF>> { return 0; }
%%


