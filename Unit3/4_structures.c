#include <stdio.h>
#include <string.h>

// Structure declaration
typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

int main() {
    printf("--- Structures ---\n");
    
    // Structure variable declaration
    Student s1;
		Student s = {"Yeshwant", 100, 68.9};
    
    // Assigning values
    strcpy(s1.name, "Alice");
    s1.rollNumber = 101;
    s1.marks = 95.5;

    
    // Accessing members
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);

    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);
    
    // Array of structures
    Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
    }
    
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %s, Roll: %d, Marks: %.2f\n", 
               i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }
    
    return 0;
}
