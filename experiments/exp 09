#include <stdio.h>
#include <string.h>
int main()
{
    char lhs, alpha[20], beta[20];
    printf("Enter left recursive production:\n");
    printf("L -> L,S | S\n");
    lhs = 'L';
    strcpy(alpha, ",S");
    strcpy(beta, "S");
    printf("\nAfter eliminating left recursion:\n");
    printf("%c -> %s%c'\n", lhs, beta, lhs);
    printf("%c' -> %s%c' | epsilon\n", lhs, alpha, lhs);
    return 0;
}
