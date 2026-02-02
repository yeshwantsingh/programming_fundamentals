#include <stdio.h>

int main() {
    // Data types demonstration
    char ch = 'A';
    int num = 123;
    float f = 3.14f;
    double d = 2.71828;
    long long ll = 123456789012345;
    
    printf("Character: %c\n", ch);
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", f);
    printf("Double: %.5f\n", d);
    printf("Long long: %lld\n", ll);
    
    // Size of data types
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    
    return 0;
}
