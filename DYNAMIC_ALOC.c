//DYNAMIC MEMORY ALLOCATION
// This program demonstrates dynamic memory allocation in C using malloc,calloc, realloc, and free functions.
//malloc is used to allocate memory for a single integer, calloc is used to allocate memory for an array of integers,
//calloc initializes the allocated memory to zero, realloc is used to resize the allocated memory,
//and free is used to deallocate the memory that was previously allocated.
//realloc can also be used to change the size of the memory block allocated by malloc or calloc.
//free is used to release the memory allocated by malloc, calloc, or realloc.
//show all the 4 functions in a single program
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc to allocate memory for a single integer
    int *ptr1 = (int *)malloc(sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }
    *ptr1 = 42; // Assigning value
    printf("Value using malloc: %d\n", *ptr1);
    
    // Using calloc to allocate memory for an array of integers
    int n = 5;
    int *ptr2 = (int *)calloc(n, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed using calloc.\n");
        free(ptr1); // Free previously allocated memory
        return 1;
    }
    for (int i = 0; i < n; i++) {
        ptr2[i] = i + 1; // Assigning values
    }
    printf("Values using calloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    // Using realloc to resize the memory allocated by malloc
    int new_size = 10;
    int *ptr3 = (int *)realloc(ptr1, new_size * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation failed using realloc.\n");
        free(ptr2); // Free previously allocated memory
        return 1;
    }
    for (int i = 0; i < new_size; i++) {
        ptr3[i] = i + 1; // Assigning new values
    }
    printf("Values after realloc: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", ptr3[i]);
    }
    printf("\n");
    // Freeing the allocated memory
    free(ptr3);
    free(ptr2);
    printf("Memory freed successfully.\n");
    return 0;
}
    