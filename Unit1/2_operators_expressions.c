#include <stdio.h>
#include "myvar.h" // Include header file for variable declaration

int main() {
    // Declaration: Tells the compiler about the variable (no memory allocation yet)
    extern int x; // Declaration of x
    printf("Declared x: %d\n", x);

    // Definition: Allocates memory and optionally initializes
    int z; // Definition without initialization
    int y = 5; // Definition with initialization
    
    
    // Assignment: Assigns a value to an already declared/defined variable
    x = 10; // Assignment statement
    z = 20; // Assignment statement
    
    printf("--- Declaration, Definition, and Assignment ---\n");
    printf("x (assigned): %d\n", x);
    printf("y (initialized): %d\n", y);
    printf("z (assigned): %d\n", z);
    
    // Now proceed with operators
    int a = 10, b = 5;
    
    // Arithmetic operators
    printf("Arithmetic:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    
    // Relational operators
    printf("\nRelational:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    
    // Logical operators
    printf("\nLogical:\n");
    printf("a > 5 && b < 10: %d\n", a > 5 && b < 10);
    printf("a < 5 || b > 10: %d\n", a < 5 || b > 10);
    printf("!(a == 10): %d\n", !(a == 10));
    
    // Bitwise operators
    printf("\nBitwise:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    
    // Assignment operators
    printf("\nAssignment:\n");
    int c = a;
    printf("c = a: %d\n", c);
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n", c);
    
    // Comma operator
    printf("\nComma operator:\n");
    int result = (a = 20, b = 30, a + b);
    printf("Result: %d\n", result);
    
    return 0;
}
