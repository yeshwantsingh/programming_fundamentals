#include <stdio.h>

int main() {
    printf("--- Examples of stdio.h Functions ---\n");
    
    // 1. printf - formatted output
    printf("1. printf: Hello, World!\n");
    printf("   Formatted: Integer=%d, Float=%.2f, Char=%c\n", 42, 3.14, 'A');
    
    // 2. scanf - formatted input
    int num;
    printf("\n2. scanf: Enter an integer: ");
    scanf("%d", &num);
    printf("   You entered: %d\n", num);
    
    // 3. puts - output string with newline
    printf("\n3. puts: ");
    puts("This is a string output with newline");
    
    // 4. fgets - read string from stdin
    char buffer[100];
    printf("\n4. fgets: Enter a line: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("   You entered: %s", buffer);
    
    // 5. fputs - write string to stdout
    printf("\n5. fputs: ");
    fputs("This is written using fputs\n", stdout);
    
    // 6. sprintf - write formatted string to buffer
    char str[50];
    sprintf(str, "Formatted: %d + %.2f = %.2f", 5, 2.5, 7.5);
    printf("\n6. sprintf: %s\n", str);
    
    // 7. sscanf - read formatted string from buffer
    int a;
    float b, c;
    sscanf(str, "Formatted: %d + %f = %f", &a, &b, &c);
    printf("\n7. sscanf: Parsed values: %d, %.2f, %.2f\n", a, b, c);
    
    return 0;
}
