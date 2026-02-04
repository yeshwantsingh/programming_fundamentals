#include <stdio.h>

int main() {
    printf("--- Loops Demonstration ---\n");
    
    // For loop
    printf("For loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // While loop
    printf("While loop: ");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // Do-while loop
    printf("Do-while loop: ");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
    
    // Nested loops
    printf("Nested loops (multiplication table):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("%d ", row * col);
        }
        printf("\n");
    }
    
    return 0;
}