#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Starting...\n");

    // Loop for 30 seconds
    for (int i = 0; i < 30; i++)
    {
        printf("I am still running...\n");
        sleep(1);
    }

    printf("I am finished.\n");

    return 0;
}
