#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("My PID is: %d\n", getpid());
    printf("My Parent PID is: %d\n", getppid());

    printf("Sleeping for 20 seconds...\n");
    sleep(20);

    return 0;
}
