#include <stdio.h>

int main() {
    int a, b, c, d;
    float ratio;
    printf("Enter values of a b c d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((c-d) != 0) {
        ratio = (a-b) / (float)(c-d);
        printf("Ratio (a-b) to (c-d) is: %f\n", ratio);
    } else {
        printf("(c-d) cannot be zero!\n");
    }
    return 0;
}