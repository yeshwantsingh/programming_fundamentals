#include <stdio.h>

int main() {
    // Input/Output statements
    
    // printf examples
    printf("Hello, World!\n");
    printf("Integer: %d\n", 42);
    printf("Float: %.2f\n", 3.14159);
    printf("Character: %c\n", 'Z');
    printf("String: %s\n", "C Programming");
    
    // scanf examples
    int num;
    float fnum;
    char ch;
    char str[50];
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    
    printf("Enter a float: ");
    scanf("%f", &fnum);
    printf("You entered: %.2f\n", fnum);
    
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note: space before %c to consume newline
    printf("You entered: %c\n", ch);
    
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    
    // Formatted output
    printf("\nFormatted output:\n");
    printf("%-10s %-5s %-5s\n", "Name", "Age", "Grade");
    printf("%-10s %-5d %-5.1f\n", "Alice", 25, 85.5);
    printf("%-10s %-5d %-5.1f\n", "Bob", 30, 92.0);
    

    // Advanced printf variations
    printf("\n--- Advanced printf variations ---\n");
    
    // Width and precision
    printf("Width example: |%10d|\n", 42);  // Right-aligned
    printf("Width example: |%-10d|\n", 42); // Left-aligned
    printf("Precision: %.3f\n", 3.1415926535);
    printf("Scientific: %e\n", 123456.789);
    printf("Hexadecimal: %x\n", 255);
    printf("Octal: %o\n", 64);
    
    // Multiple arguments
    printf("Multiple: %d + %d = %d\n", 5, 3, 5 + 3);
    
    // Advanced scanf variations
    printf("\n--- Advanced scanf variations ---\n");
    
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d\n", a, b);
    
    // Reading specific formats
    char buffer[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", buffer); // Read until newline
    printf("You entered: %s\n", buffer);
    
    // Reading with field width
    int limited;
    printf("Enter a number (max 3 digits): ");
    scanf("%3d", &limited);
    printf("Limited input: %d\n", limited);
    
    // Using sscanf for string parsing
    char data[] = "John 25 85.5";
    char name[20];
    int age;
    float grade;
    sscanf(data, "%s %d %f", name, &age, &grade);
    printf("Parsed: Name=%s, Age=%d, Grade=%.1f\n", name, age, grade);
    
    return 0;
}