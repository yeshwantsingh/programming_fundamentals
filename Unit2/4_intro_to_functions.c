#include <stdio.h>


// Function prototypes (declarations)
int add(int, int);
void swapByValue(int a, int b);

int main() {
    printf("--- Introduction to Functions ---\n");
    
    // Function call (actual arguments)
		int x = 5, y = 10;
    int sum = add(x, y); // Formal arguments in function
    printf("Sum of %d and %d is %d\n", x, y, sum);
    
    // Pass by value
    printf("\nPass by value:\n");
    printf("Before swap: x=%d, y=%d\n", x, y);
    swapByValue(x, y);
    printf("After swap: x=%d, y=%d (unchanged)\n", x, y);
    
    // Subprogram concept
    printf("\nThis demonstrates subprograms (functions)\n");
    
    
    return 0;
}

// Function definition
int add(int a, int b) { // Formal parameters
    return a + b;
}

// Pass by value: changes are local
void swapByValue(int a, int b) {
    int temp = b;
    b = a;
    a = temp;
    printf("Inside swapByValue: a=%d, b=%d\n", a, b);
}
