#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    printf("--- Pointers to Structures ---\n");
    
    struct Student s = {"Alice", 101, 95.5};
    struct Student *ptr = &s;
    
    // Accessing members using pointer
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    
    // Modifying through pointer
    strcpy(ptr->name, "Bob");
    ptr->roll = 102;
    ptr->marks = 88.0;
    
    printf("After modification:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    
    // Array of structures with pointers
    struct Student students[2] = {
        {"Charlie", 103, 92.0},
        {"David", 104, 87.5}
    };
    
    struct Student *stuPtr = students;
    for (int i = 0; i < 2; i++) {
        printf("Student %d: %s, Roll: %d, Marks: %.2f\n", 
               i + 1, (stuPtr + i)->name, (stuPtr + i)->roll, (stuPtr + i)->marks);
    }
    
    return 0;
}
