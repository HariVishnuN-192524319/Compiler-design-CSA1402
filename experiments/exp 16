#include <stdio.h>
#include <string.h>
int main()
{
    char op[10], arg1[10], arg2[10], result[10];
    int n, i;
    printf("Enter number of three-address instructions: ");
    scanf("%d", &n);
    printf("Enter instructions (Example: t1 = a + b):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s = %s %s %s", result, arg1, op, arg2);
        printf("\nMOV R0, %s", arg1);
        if(strcmp(op, "+") == 0)
            printf("\nADD R0, %s", arg2);
        else if(strcmp(op, "-") == 0)
            printf("\nSUB R0, %s", arg2);
        else if(strcmp(op, "*") == 0)
            printf("\nMUL R0, %s", arg2);
        else if(strcmp(op, "/") == 0)
            printf("\nDIV R0, %s", arg2);
        printf("\nMOV %s, R0\n", result);
    }
    return 0;
}
