#include <stdio.h>

int main() {
    printf("--- Arrays ---\n");
    
    // One-dimensional array
    int arr[] = {1, 2, 3, 4, 5};
    printf("One-dimensional array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Operations on array elements
    arr[2] = 10; // Modify element
    printf("After modifying arr[2]: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sum of elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
    
    // Multidimensional array
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Two-dimensional array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Operations on 2D array
    matrix[1][1] = 50; // Modify
    printf("After modifying matrix[1][1]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
