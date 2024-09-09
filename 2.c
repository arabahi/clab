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

/*
2. WAP to assign grades to the students:

Marks          Grade
80 to 100       A
60 to 79        B
50 to 59        C
40 to 49        D
0 to 39         E
*/