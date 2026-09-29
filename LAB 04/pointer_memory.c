#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 10;

    // Declare pointer
    int *ptr = &value;

    // Allocate memory on the heap
    int *heap_ptr = (int *)malloc(sizeof(int));

    if (heap_ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *heap_ptr = 20;

    printf("Value of variable: %d\n", value);
    printf("Address of variable: %p\n", (void *)&value);
    printf("Value stored in pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", (void *)ptr);
    printf("Heap value: %d\n", *heap_ptr);
    printf("Heap address: %p\n", (void *)heap_ptr);

    // Free allocated memory
    free(heap_ptr);

    return 0;
}
