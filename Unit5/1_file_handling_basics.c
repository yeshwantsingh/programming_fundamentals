#include <stdio.h>

int main() {
    printf("--- File Handling Basics ---\n");
    
    // File declaration
    FILE *fp;
    
    // Types of files: text and binary
    printf("File types: Text files (readable) and Binary files (raw data)\n");
    
    // File pointer
    printf("FILE *fp is a file pointer that points to a FILE structure\n");
    
    // Opening a file (declaration example)
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    printf("File opened successfully for writing\n");
    
    // Closing the file
    fclose(fp);
    printf("File closed\n");
    
    // File operations overview
    printf("Common file operations: fopen, fclose, fprintf, fscanf, fgets, fputs, fread, fwrite\n");
    
    return 0;
}