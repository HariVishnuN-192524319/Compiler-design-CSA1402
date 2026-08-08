#include <stdio.h>
int main()
{
    int n, i;
    char ch;
    int whitespace = 0, newline = 0;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    getchar();   // remove the Enter after number
    printf("Enter the text:\n");
    for (i = 0; i < n; i++)
    {
        while ((ch = getchar()) != '\n')
        {
            if (ch == ' ' || ch == '\t')
                whitespace++;
        }
        newline++;
    }
    printf("\nNumber of whitespaces: %d\n", whitespace);
    printf("Number of newline characters: %d\n", newline);
    return 0;
}
