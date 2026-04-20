#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("--- Dynamic Memory Allocation ---\n");
    
    // malloc: allocate memory
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Assign values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    
    // realloc: resize memory
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    // Assign more values
    for (int i = 5; i < 10; i++) {
        ptr[i] = i + 1;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    
    // calloc: allocate and initialize to zero
    int *ptr2 = (int *)calloc(3, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("calloc initialized values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    
    // free: deallocate memory
    free(ptr);
    free(ptr2);
    
    printf("Memory freed successfully\n");
    
    return 0;
}