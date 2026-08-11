#include <stdio.h>
#include <string.h>
int main()
{
    char line[500];
    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);
    if (line[0] == '/' && line[1] == '/')
    {
        printf("The given line is a single-line comment.\n");
    }
    else if (line[0] == '/' && line[1] == '*')
    {
        int len = strlen(line);
        if (len >= 4 &&
            line[len - 3] == '*' &&
            line[len - 2] == '/')
        {
            printf("The given line is a multi-line comment.\n");
        }
        else
        {
            printf("The given line starts as a multi-line comment.\n");
        }
    }
    else
    {
        printf("The given line is not a comment.\n");
    }
    return 0;
}
