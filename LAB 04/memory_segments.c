#include <stdio.h>
#include <stdlib.h>

int global_var = 10;
static int static_global_var = 20;

void sample_function()
{
    printf("Function address:              %p\n", (void *)sample_function);
}

int main()
{
    int local_var = 30;
    static int static_local_var = 40;

    int *heap_var = (int *)malloc(sizeof(int));

    if (heap_var == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *heap_var = 50;

    printf("=== Memory Segment Address Mapping ===\n\n");

    printf("Global variable address:       %p\n", (void *)&global_var);
    printf("Static global variable:        %p\n", (void *)&static_global_var);
    printf("Local variable address:        %p\n", (void *)&local_var);
    printf("Static local variable:         %p\n", (void *)&static_local_var);
    printf("Heap variable address:         %p\n", (void *)heap_var);

    sample_function();

    printf("\n=== Values ===\n");
    printf("Global variable:               %d\n", global_var);
    printf("Static global variable:        %d\n", static_global_var);
    printf("Local variable:                %d\n", local_var);
    printf("Static local variable:         %d\n", static_local_var);
    printf("Heap variable:                 %d\n", *heap_var);

    free(heap_var);

    return 0;
}
