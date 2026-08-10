#include <stdio.h>
#include <ctype.h>
int main()
{
    char text[] =
        "Hello World\n"
        "Compiler Design\n"
        "Lexical Analyzer";
    int i, characters = 0, words = 0, lines = 1;
    int inWord = 0;
    for (i = 0; text[i] != '\0'; i++)
    {
        characters++;
        if (text[i] == '\n')
            lines++;
        if (isspace(text[i]))
            inWord = 0;
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }
    printf("Input:\n%s\n", text);
    printf("\nCharacters = %d\n", characters);
    printf("Words      = %d\n", words);
    printf("Lines      = %d\n", lines);
    return 0;
}
