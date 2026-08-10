#include <stdio.h>
#include <ctype.h>
char s[100];
int top = -1, temp = 1;
char st[100];
int pre(char c)
{
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}
void gen(char op)
{
    char b = st[top--];
    char a = st[top--];
    printf("t%d = %c %c %c\n", temp, a, op, b);
    st[++top] = '0' + temp;
    temp++;
}
int main()
{
    int i;
    char c;
    printf("Enter expression: ");
    scanf("%s", s);
    for (i = 0; s[i]; i++)
    {
        c = s[i];
        if (isalnum(c))
            st[++top] = c;
        else if (c == '(')
            st[++top] = c;
        else if (c == ')')
        {
            while (st[top] != '(')
                gen(st[top--]);
            top--;
        }
        else
        {
            while (top >= 0 && st[top] != '(' &&
                   pre(st[top]) >= pre(c))
                gen(st[top--]);
            st[++top] = c;
        }
    }
    while (top >= 0)
        gen(st[top--]);
    return 0;
}
