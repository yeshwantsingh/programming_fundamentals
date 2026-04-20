#include <stdio.h>

int main() {
    printf("--- Pointers: Basics ---\n");
    
    // Pointer declaration
    int *ptr;
    int var = 10;
    
    // Pointer assignment
    ptr = &var;
    
    // Pointer operations
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // Address arithmetic
    printf("ptr + 1: %p\n", ptr + 1);
    printf("ptr - 1: %p\n", ptr - 1);
    
    // Modifying value through pointer
    *ptr = 20;
    printf("After *ptr = 20, var: %d\n", var);
    
    // Pointer to pointer
    int **pptr = &ptr;
    printf("Value of pptr: %p\n", pptr);
    printf("Value pointed by *pptr: %p\n", *pptr);
    printf("Value pointed by **pptr: %d\n", **pptr);
    
    return 0;
}
