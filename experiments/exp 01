#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_ID_LEN 20
int main()
{
    char input[500];
    int i = 0;
    printf("Enter the C statement:\n");
    fgets(input, sizeof(input), stdin);
    while (input[i] != '\0')
    {
        if (isspace(input[i]))
        {
            i++;
            continue;
        }
        if (input[i] == '/' && input[i + 1] == '/')
        {
            break;
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
        if (isalpha(input[i]) || input[i] == '_')
        {
            char id[100];
            int j = 0;
            while (isalnum(input[i]) || input[i] == '_')
            {
                if (j < 99)
                    id[j++] = input[i];
                i++;
            }
            id[j] = '\0';
            if (j > MAX_ID_LEN)
                printf("Identifier: %s (Length exceeds %d)\n",
                       id, MAX_ID_LEN);
            else
                printf("Identifier: %s\n", id);
            continue;
        }
        if (isdigit(input[i]))
        {
            char constant[100];
            int j = 0;
            while (isdigit(input[i]) || input[i] == '.')
            {
                if (j < 99)
                    constant[j++] = input[i];
                i++;
            }
            constant[j] = '\0';

            printf("Constant: %s\n", constant);
            continue;
        }
        if (strchr("+-*/%=<>!", input[i]))
        {
            if ((input[i] == '+' && input[i + 1] == '+') ||
                (input[i] == '-' && input[i + 1] == '-') ||
                (input[i] == '=' && input[i + 1] == '=') ||
                (input[i] == '!' && input[i + 1] == '=') ||
                (input[i] == '<' && input[i + 1] == '=') ||
                (input[i] == '>' && input[i + 1] == '='))
            {
                printf("Operator: %c%c\n",
                       input[i], input[i + 1]);
                i += 2;
            }
            else
            {
                printf("Operator: %c\n", input[i]);
                i++;
            }
            continue;
        }
        i++;
    }
    return 0;
}
