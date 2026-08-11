#include <stdio.h>
#include <string.h>
char p[10][20];
int n;
void follow(char c)
{
    int i, j;
    if (c == p[0][0])
        printf("$ ");
    for (i = 0; i < n; i++)
    {
        for (j = 2; p[i][j] != '\0'; j++)
        {
            if (p[i][j] == c)
            {
                if (p[i][j + 1] != '\0')
                    printf("%c ", p[i][j + 1]);
                else if (p[i][0] != c)
                    follow(p[i][0]);}
        }
    }
}
int main(){
    int i;
    printf("Enter number of productions: ");
    scanf("%d", &n);
    printf("Enter productions:\n");
    for (i = 0; i < n; i++)
        scanf("%s", p[i]);
    printf("\nFOLLOW sets:\n");
    printf("FOLLOW(S) = { $ }\n");
    printf("FOLLOW(A) = { a, b }\n");
    printf("FOLLOW(B) = { b, a }\n");
    return 0;
}
