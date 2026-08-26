%{
#include<stdio.h>
%}

%%
[a-zA-Z]+   { printf("Word\n"); }
[0-9]+      { printf("Number\n"); }
.           ;
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter a word or number: ");
    yylex();
    return 0;
}
