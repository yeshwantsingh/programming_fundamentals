#include <stdio.h>

int main() {
    // Implicit conversions
    int i = 10;
    float f = i; // int to float
    printf("Implicit: int %d to float %.2f\n", i, f);
    
    double d = f; // float to double
    printf("Implicit: float %.2f to double %.2f\n", f, d);
    
    // Explicit conversions (casting)
    float pi = 3.14159;
    int intPi = (int)pi; // float to int
    printf("Explicit: float %.5f to int %d\n", pi, intPi);
    
    char ch = 'A';
    int ascii = (int)ch; // char to int
    printf("Explicit: char '%c' to int %d\n", ch, ascii);
    
    int num = 65;
    char charNum = (char)num; // int to char
    printf("Explicit: int %d to char '%c'\n", num, charNum);
    
    // Type promotion in expressions
    int a = 5;
    double b = 2.0;
    double result = a / b; // a promoted to double
    printf("Type promotion: %d / %.1f = %.2f\n", a, b, result);
    
    return 0;
}