#include <stdio.h>

int main() {
    int x, y, sum;
    printf("Enter numbers 1: ");
    scanf("%d", &x); // 67
    printf("Enter numbers 2: ");
    scanf("%d", &y); // 10
    sum = x + y;
    printf("The sum of the two numbers is: %d", sum);

    return 0;
}