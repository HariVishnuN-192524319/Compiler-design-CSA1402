%{
#include<stdio.h>

int count = 0;
%}

%%
[aAeEiIoOuU] {
    printf("%s is a vowel\n", yytext);
    count++;
}

.|\n ;
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter a string: ");
    yylex();
    printf("\nTotal Number of Vowels = %d\n", count);
    return 0;
}
