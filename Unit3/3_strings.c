#include <stdio.h>
#include <string.h>

int main() {
    printf("--- Strings ---\n");
    
    // String declaration and initialization
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // String operations
    // Concatenation
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated: %s\n", str3);
    
    // Length
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str3: %lu\n", strlen(str3));
    
    // Copy
    char str4[20];
    strcpy(str4, str1);
    printf("Copied str1 to str4: %s\n", str4);
    
    // Comparison
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
    
    // Substring search
    char *pos = strstr(str3, "World");
    if (pos != NULL) {
        printf("Found 'World' in str3 at position: %ld\n", pos - str3);
    }
    
    // Character access
    printf("First character of str1: %c\n", str1[0]);
    printf("Last character of str1: %c\n", str1[strlen(str1) - 1]);
    
    return 0;
}
