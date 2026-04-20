#include <stdio.h>

int main() {
    printf("--- Pointers and Arrays ---\n");
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to first element
    
    printf("Array elements using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    
    printf("Array elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    
    // Pointer arithmetic with arrays
    printf("ptr points to: %d\n", *ptr);
    ptr++; // Move to next element
    printf("After ptr++, points to: %d\n", *ptr);
    ptr += 2; // Move two more
    printf("After ptr += 2, points to: %d\n", *ptr);
    
    // Reset pointer
    ptr = arr;
    printf("Reset ptr to arr[0]: %d\n", *ptr);
    
    // Array name as pointer
    printf("arr is equivalent to &arr[0]: %p == %p\n", arr, &arr[0]);
    
    return 0;
}
