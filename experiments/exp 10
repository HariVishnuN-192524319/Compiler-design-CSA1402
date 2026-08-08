#include <stdio.h>
#include <string.h>
int main()
{
    char lhs;
    char p1[50], p2[50], p3[50];
    int i = 0;
    printf("Enter productions for S:\n");
    scanf("%s %s %s", p1, p2, p3);
    printf("Enter production for E:\n");
    scanf("%s", p1);   /* E production */
    printf("\nOriginal Grammar:\n");
    printf("S -> %s | %s | %s\n", p1, p2, p3);
    i = 0;
    while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
        i++;
    if (i > 0)
    {
        printf("\nAfter Left Factoring:\n");
        printf("S  -> %.*sS' | %s\n", i, p1, p3);

        printf("S' -> %sS' | epsilon\n", p1 + i);
        printf("E  -> b\n");
    }
    else
    {
        printf("\nNo left factoring required.\n");
    }
    return 0;
}
