#include <stdio.h>

int main() {
    printf("--- File I/O Operations ---\n");
    
    // Writing to file
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    
    fprintf(fp, "Hello, this is a text file.\n");
    fprintf(fp, "Number: %d\n", 42);
    fprintf(fp, "Float: %.2f\n", 3.14);
    fclose(fp);
    printf("Data written to file\n");
    
    // Reading from file
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    
    char buffer[100];
    printf("Reading from file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    
    // Binary file operations
    int numbers[] = {1, 2, 3, 4, 5};
    fp = fopen("binary.dat", "wb");
    if (fp != NULL) {
        fwrite(numbers, sizeof(int), 5, fp);
        fclose(fp);
        printf("Binary data written\n");
    }
    
    fp = fopen("binary.dat", "rb");
    if (fp != NULL) {
        int readNumbers[5];
        fread(readNumbers, sizeof(int), 5, fp);
        fclose(fp);
        printf("Binary data read: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", readNumbers[i]);
        }
        printf("\n");
    }
    
    // fprintf, fscanf - file I/O
    fp = fopen("temp.txt", "r");
    if (fp != NULL) {
        char fileContent[100];
        fscanf(fp, "%[^\n]", fileContent);
        fclose(fp);
        printf("9. fprintf/fscanf: Read from file: %s\n", fileContent);
    }
    
    // putchar, getchar - character I/O
    printf("\n10. putchar/getchar: Enter a character: ");
    char ch = getchar();
    printf("   You entered: ");
    putchar(ch);
    putchar('\n');
    
    // Clean up
    remove("temp.txt");

    return 0;
}