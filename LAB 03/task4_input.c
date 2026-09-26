#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %sWelcome to OS Class.\n", name);

    return 0;
}
