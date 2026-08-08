#include <stdio.h>
#include <ctype.h>
int main()
{
    char input[500];
    int i = 0;
    printf("Enter the input:\n");
    fgets(input, sizeof(input), stdin);
    while (input[i] != '\0')
    {
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
        {
            i++;
            continue;
        }
        if (input[i] == '/' && input[i + 1] == '/')
        {
            while (input[i] != '\0' && input[i] != '\n')
                i++;
            continue;
        }
        if (input[i] == '/' && input[i + 1] == '*')
        {
            i += 2;
            while (input[i] != '\0' &&
                   !(input[i] == '*' && input[i + 1] == '/'))
            {
                i++;
            }
            if (input[i] != '\0')
                i += 2;
            continue;
        }
        printf("%c", input[i]);
        i++;
    }
    return 0;
}
