#include <stdio.h>
#include <string.h>
#include <ctype.h>
char p[10][20];
int n;
void first(char c)
{
    int i, j;
    if (!isupper(c))
    {
        printf("%c ", c);
        return;
    }
    for (i = 0; i < n; i++)
    {
        if (p[i][0] == c)
        {
            if (p[i][2] == '#')
                printf("# ");
            else
            {
                for (j = 2; p[i][j] != '\0'; j++)
                {
                    if (!isupper(p[i][j]))
                    {
                        printf("%c ", p[i][j]);
                        break;
                    }
                    first(p[i][j]);
                    break;
                }
            }
        }
    }
}
int main()
{
    int i;
    printf("Enter number of productions: ");
    scanf("%d", &n);
    printf("Enter productions (use # for epsilon):\n");
    for (i = 0; i < n; i++)
        scanf("%s", p[i]);
    printf("\nFIRST sets:\n");
    for (i = 0; i < n; i++)
    {
        if (i == 0 || p[i][0] != p[i-1][0])
        {
            printf("FIRST(%c) = { ", p[i][0]);
            first(p[i][0]);
            printf("}\n");
        }
    }
    return 0;
}
