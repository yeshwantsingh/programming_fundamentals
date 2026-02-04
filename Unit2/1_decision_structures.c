#include <stdio.h>

int main() {
    printf("--- Decision Structures ---\n");
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // If-else
    if (num > 0) {
        printf("Positive number\n");
    } else {
        printf("Non-positive number\n");
    }

    // If-else if - else
    if (num > 0) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }
    
    // Nested if
    if (num != 0) {
        if (num > 0) {
            printf("Nested: Positive number\n");
        } else {
            printf("Nested: Negative number\n");
        }
    } else {
        printf("Nested: Zero\n");
    }

    // Switch
    printf("Day of week (1-7): ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    
    // Ternary operator
    int absValue = (num < 0) ? -num : num;
    printf("Absolute value: %d\n", absValue);

    return 0;
}