#include <stdio.h>
#include <string.h>

// Union declaration
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("--- Unions ---\n");
    
    // Union variable
    union Data data;
    
    // Using as int
    data.i = 10;
    printf("data.i: %d\n", data.i);
    printf("data.f: %f\n", data.f);
    
    // Using as float (overwrites previous value)
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);
    printf("data.i (garbage now): %d\n", data.i); // Garbage because union shares memory
    
    // Using as string
    strcpy(data.str, "Hello");
    printf("data.str: %s\n", data.str);
    printf("data.f (garbage now): %.2f\n", data.f); // Garbage
    printf("data.i (garbage now): %d\n", data.i); // Garbage
    
    // Size of union vs struct
    struct StructData {
        int i;
        float f;
        char str[20];
    };
    
    printf("Size of union: %lu bytes\n", sizeof(union Data));
    printf("Size of struct: %lu bytes\n", sizeof(struct StructData));
    
    return 0;
}
