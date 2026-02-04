#include <stdio.h>

int main() {
    printf("--- Jump Statements ---\n");
    
    // Break in loop
    printf("Break example: ");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;
        printf("%d ", i);
    }
    printf("\n");
    
    // Continue in loop
    printf("Continue example: ");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    
    // Goto
    printf("Goto example: ");
    int i = 1;
    start:
    printf("%d ", i);
    i++;
    if (i <= 5) goto start;
    printf("\n");
    
    return 0;
}