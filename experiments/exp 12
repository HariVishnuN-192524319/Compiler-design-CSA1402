#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char input[100];
int pos = 0;
void E();
void Eprime();
void T();
void Tprime();
void F();
/* E -> T E' */
void E()
{
    T();
    Eprime();
}
/* E' -> + T E' | epsilon */
void Eprime()
{
    if (input[pos] == '+')
    {
        pos++;
        T();
        Eprime();
    }
}
/* T -> F T' */
void T()
{
    F();
    Tprime();
}
/* T' -> * F T' | epsilon */
void Tprime()
{
    if (input[pos] == '*')
    {
        pos++;
        F();
        Tprime();
    }
}
/* F -> (E) | id */
void F()
{
    if (input[pos] == 'i' && input[pos + 1] == 'd')
    {
        pos += 2;
    }
    else if (input[pos] == '(')
    {
        pos++;
        E();
        if (input[pos] == ')')
            pos++;
        else
        {
            printf("Error: Missing ')'\n");
            exit(1);
        }
    }
    else
    {
        printf("Error: Invalid expression\n");
        exit(1);
    }
}
int main()
{
    printf("Enter expression: ");
    scanf("%s", input);
    E();
    if (input[pos] == '\0')
        printf("String is Accepted\n");
    else
        printf("String is Rejected\n");
    return 0;
}
