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
    
    // Operator precedence and order of execution
    printf("\n--- Operator Precedence and Order of Execution ---\n");
    
    // Precedence example: * has higher precedence than +
    int expr1 = 2 + 3 * 4;  // 3*4 = 12, then 2+12 = 14
    printf("2 + 3 * 4 = %d (multiplication before addition)\n", expr1);
    
    // Precedence example: parentheses override precedence
    int expr2 = (2 + 3) * 4;  // 2+3 = 5, then 5*4 = 20
    printf("(2 + 3) * 4 = %d (parentheses force addition first)\n", expr2);
    
    // Multiple operators with different precedence
    int expr3 = 10 - 5 + 2 * 3 / 2;  // 2*3=6, 6/2=3, 10-5=5, 5+3=8
    printf("10 - 5 + 2 * 3 / 2 = %d\n", expr3);
    
    // Associativity: left-to-right for same precedence
    int expr4 = 10 / 2 * 5;  // 10/2=5, then 5*5=25 (left to right)
    printf("10 / 2 * 5 = %d (left-to-right associativity)\n", expr4);
    
    // Right-to-left associativity for assignment
    int d, e, f;
    d = e = f = 42;  // f=42, then e=f, then d=e
    printf("d = e = f = 42: d=%d, e=%d, f=%d (right-to-left)\n", d, e, f);
    
    // Mixed precedence with logical operators
    int bool_expr = 5 > 3 && 2 < 4 || 1 == 1;  // (5>3 && 2<4) || 1==1 = true || true = true
    printf("5 > 3 && 2 < 4 || 1 == 1 = %d\n", bool_expr);
    
    // Unary operators have higher precedence
    int expr5 = -5 + 3 * 2;  // -5 + (3*2) = -5 + 6 = 1
    printf("-5 + 3 * 2 = %d (unary minus before addition)\n", expr5);
    
    return 0;
}
