#include <stdio.h>

int main() {
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 80) {
        grade = 'A';
    } else if (marks <= 79 && marks >= 60) {
        grade = 'B';
    } else if (marks <= 59 && marks >= 50) {
        grade = 'C';
    } else if (marks <= 49 && marks >= 40) { 
        grade = 'D';
    } else if (marks <= 39 && marks >= 0) {
        grade = 'E';
    } else {
        grade = 'I';
    }
    if (grade == 'I') {
        printf("Invalid Marks!\n");
    } else {
        printf("You got Grade: %c\n", grade);
    }
    return 0;
}