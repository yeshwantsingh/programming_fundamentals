#include <stdio.h>

// Recursive function prototype
int factorial(int n);

int main() {
    printf("--- Recursion ---\n");
    
    // Function call
    int num;
    printf("Enter number for factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
