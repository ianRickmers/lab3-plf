%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern FILE *yyin;
extern int yylineno;
void yyerror(char *s);
%}

%token EXPONENCIAL
%token ENTERO
%token DECIMAL
%token IDENTIFICADOR
%token PI
%token '|'
%token '\n'
%token FIN 0 
%left '!'
%left '='
%left ' ' 
%left '+' '-'
%left X ':' '/' MOD
%left NEG POS
%right '^'
%left SQR CUR EXP LN LOG SGN INT FIX FRAC
%token PAR

%%
input: /*vacío*/
| input line
;

line: exp '\n'
| exp FIN
| '\n'
;

exp: ENTERO 
| DECIMAL 
| EXPONENCIAL
| IDENTIFICADOR
| exp '+' exp
| exp '-' exp
| exp X exp 
| exp ':' exp
| exp '/' exp
| exp '^' exp
| '(' exp ')' %prec PAR
| '|' exp '|'
| exp '!'
| exp '=' exp
| exp MOD exp
| SQR '(' exp ')' 
| CUR '(' exp ')' 
| EXP '(' exp ')'
| LN '(' exp ')' 
| LOG '(' exp ')' 
| SGN '(' exp ')'
| INT '(' exp ')'
| FIX '(' exp ')'
| FRAC '(' exp ')'
| PI
| '-' exp %prec NEG
| '+' exp %prec POS
;
%%

void yyerror(char *s)
{
printf("Error en la l%cnea: %d\n",161,yylineno);
exit(1);
}


int main(int argc, char *argv[])
{
    FILE *archivo_entrada;
    if(argc==1){
        printf("Error: Falta par%cmetro.\nUso: sintactico.exe archivo\n",160);
        return 0;
    }
    if(argc > 2){
        printf("Error: Demasiados par%cmetros.\nUso: sintactico.exe archivo\n",160);
        return 0;
    }
    if ((archivo_entrada = fopen(argv[1], "r")))
    {
        archivo_entrada = fopen(argv[1], "r");
        yyin = archivo_entrada;
        yyparse();
        printf("An%clisis sint%cctico exitoso.\n",160,160);
        fclose(archivo_entrada);
        return 0;
    }
    printf("Error: El archivo no existe.\n");
    return 0;

}
