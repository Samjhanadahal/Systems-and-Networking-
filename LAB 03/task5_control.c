#include <stdio.h>

int main()
{
    int choice;

    printf("Do you want to continue? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Continuing...\n");
        return 0;
    }
    else
    {
        printf("Exiting...\n");
        return 1;
    }
}
