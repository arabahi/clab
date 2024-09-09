#include <stdio.h>
#include <math.h>

void takeTwoInputs(int *a, int *b) {
    printf("Enter two numbers: ");
    scanf("%d%d", a, b);
}

void takeOneInput(int *a) {
    printf("Enter number: ");
    scanf("%d", a);
}

int main() {
    int a, b, opcode;
    printf("Enter code for desired operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Power\n");
    printf("7. Square Root\n>> ");
    scanf("%d", &opcode);
    switch (opcode)
    {
        case 1:
            takeTwoInputs(&a, &b);
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case 2:
            takeTwoInputs(&a, &b);
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case 3:
            takeTwoInputs(&a, &b);
            printf("%d x %d = %d\n", a, b, a*b);
            break;
        case 4:
            takeTwoInputs(&a, &b);
            if (b == 0) {
                printf("Divisor cannot be zero!\n");
                break;
            }
            printf("%d / %d = %f\n", a, b, a/(float)b);
            break;
        case 5:
            takeTwoInputs(&a, &b);
            printf("%d %% %d = %d\n", a, b, a%b);
            break;
        case 6:
            takeTwoInputs(&a, &b);
            printf("%d^%d = %d\n", a, b, (int)pow(a, b));
            break;
        case 7:
            takeOneInput(&a);
            if (a < 0) {
                printf("Input cannot be negative!\n");
                break;
            }
            printf("square root of %d = %f\n", a, sqrt(a));
            break;
        default:
            printf("Invalid operation code!\n");
            break;
    }
    return 0;
}

/*
3. Write a menu driven program to create a simple calculator in C. Operations must include
addition, subtraction, mul, div, modulo, power, square root.
*/