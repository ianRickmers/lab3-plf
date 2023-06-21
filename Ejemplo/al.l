%{
#include "y.tab.h"
%}

%option noyywrap

%%
. {return CARACTER;}
\n {return EOF;}
%%

