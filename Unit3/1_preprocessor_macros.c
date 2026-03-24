#include <stdio.h>
#include <stdlib.h> // Library function example
#include <math.h> // For sqrt

// Macro definitions
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DEBUG 1

int main() {
    printf("--- Pre-processor Directives ---\n");
    
    // Using defined constants
    printf("PI: %.5f\n", PI);
    printf("Square of 5: %d\n", SQUARE(5));
    printf("Max of 10 and 20: %d\n", MAX(10, 20));
    
    // Conditional compilation
    #ifdef DEBUG
        printf("Debug mode is enabled\n");
    #else
        printf("Debug mode is disabled\n");
    #endif
    
    // Library functions
    printf("Absolute value of -5: %d\n", abs(-5));
    printf("Square root of 16: %.2f\n", sqrt(16.0)); // From <math.h>, but included via <stdlib.h>? Wait, sqrt is in math.h
    
    return 0;
}
