#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 100 == 0) {
        if (year % 400 == 0)
            printf("%d is a leap year!\n", year);
        else
            printf("%d is not a leap year!\n", year);
    } else {
        if (year % 4 == 0)
            printf("%d is a leap year!\n", year);
        else
            printf("%d is not a leap year!\n", year);
    }
}

/*
4. Write a C program to find whether a given year is a leap year or not.
*/