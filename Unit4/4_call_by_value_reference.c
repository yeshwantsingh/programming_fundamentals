#include <stdio.h>

// Call by Value: receives a copy of the argument
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Call by Reference: receives the address of the argument
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: *a = %d, *b = %d\n", *a, *b);
}

// Call by Value with array (array decays to pointer, acts like reference)
void doubleArrayByValue(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

// Modifying a single value by reference
void increment(int *n) {
    (*n)++;
}

int main() {
    printf("--- Call by Value vs Call by Reference ---\n\n");

    // --- Call by Value ---
    printf("== Call by Value ==\n");
    int x = 5, y = 10;
    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After  swapByValue: x = %d, y = %d  (unchanged)\n\n", x, y);

    // --- Call by Reference ---
    printf("== Call by Reference ==\n");
    int a = 5, b = 10;
    printf("Before swapByReference: a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After  swapByReference: a = %d, b = %d  (swapped)\n\n", a, b);

    // --- Increment by reference ---
    printf("== Increment by Reference ==\n");
    int count = 0;
    printf("Before increment: count = %d\n", count);
    increment(&count);
    increment(&count);
    printf("After 2 increments: count = %d\n\n", count);

    // --- Array passed to function (acts like reference) ---
    printf("== Array Passed to Function ==\n");
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Before doubleArray: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    doubleArrayByValue(arr, 5);
    printf("After  doubleArray: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("  (modified, array decays to pointer)\n");

    return 0;
}
