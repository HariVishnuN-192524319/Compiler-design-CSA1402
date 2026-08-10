#include <stdio.h>
#include <string.h>
struct Symbol
{
    char name[20];
    char type[20];
    int address;
};
struct Symbol table[50];
int count = 0;
/* Insert symbol */
void insert()
{
    char name[20];
    printf("Enter symbol name: ");
    scanf("%s", name);
    /* Check duplicate */
    for (int i = 0; i < count; i++)
    {
        if (strcmp(table[i].name, name) == 0)
        {
            printf("Symbol already exists!\n");
            return;
        }
    }
    strcpy(table[count].name, name);
    printf("Enter type: ");
    scanf("%s", table[count].type);
    printf("Enter address: ");
    scanf("%d", &table[count].address);
    count++;
    printf("Symbol inserted successfully.\n");
}
/* Search symbol */
void search()
{
    char name[20];
    printf("Enter symbol to search: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(table[i].name, name) == 0)
        {
            printf("\nSymbol Found\n");
            printf("Name    : %s\n", table[i].name);
            printf("Type    : %s\n", table[i].type);
            printf("Address : %d\n", table[i].address);
            return;
        }
    }
    printf("Symbol not found.\n");
}
/* Delete symbol */
void deleteSymbol()
{
    char name[20];
    printf("Enter symbol to delete: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(table[i].name, name) == 0)
        {
            for (int j = i; j < count - 1; j++)
            {
                table[j] = table[j + 1];
            }
            count--;
            printf("Symbol deleted successfully.\n");
            return;
        }
    }
    printf("Symbol not found.\n");
}
/* Display symbol table */
void display()
{
    if (count == 0)
    {
        printf("Symbol table is empty.\n");
        return;
    }
    printf("\n----- SYMBOL TABLE -----\n");
    printf("%-15s %-15s %-10s\n",
           "Name", "Type", "Address");
    for (int i = 0; i < count; i++)
    {
        printf("%-15s %-15s %-10d\n",
               table[i].name,
               table[i].type,
               table[i].address);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n\n--- SYMBOL TABLE ---\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                search();
                break;
            case 3:
                deleteSymbol();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Program terminated.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
