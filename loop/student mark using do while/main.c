#include <stdio.h>

int main() {
    int marks;

    do {
        printf("Enter student marks: ");
        scanf("%d", &marks);
        if (marks < 0 || marks > 100) {
            printf("Invalid marks!");
        } else {
            char grade;
            if (marks >= 90) {
                grade = 'A';
            } else if (marks >= 80) {
                grade = 'B';
            } else if (marks >= 70) {
                grade = 'C';
            } else if (marks >= 60) {
                grade = 'D';
            } else {
                grade = 'F';
            }
            printf("The grade for %d marks is: %c\n", marks, grade);
        }
    } while (0);
    return 0;
}
