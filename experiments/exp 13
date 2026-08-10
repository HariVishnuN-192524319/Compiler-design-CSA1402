#include <stdio.h>
#include <string.h>
char input[100];
int pos = 0;
/* Function declarations */
int S();
int A();
/* S -> aA */
int S()
{
    if (input[pos] == 'a')
    {
        pos++;
        return A();
    }
    return 0;
/* A -> bA | epsilon */
int A(
{
   while (input[pos] == 'b')
        pos++
    return 1;
}
int main()
{    printf("Grammar:\n");
    printf("S -> aA\n");
    printf("A -> bA | epsilon\n\n";
    printf("Enter input string: ");    scanf("%s", input);
    if (S() && input[pos] == '\0')        printf("String is Accepted\n");
    else
        printf("String is Rejecte\n");
    return 0;
