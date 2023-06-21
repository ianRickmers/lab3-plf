%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(char *s);
%}

%token CARACTER

%%
s: CARACTER;
%%

void yyerror(char *s)
{
printf("Error\n");
exit(1);
}

void main()
{
yyparse();
printf("0k\n");
}
