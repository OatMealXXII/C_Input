#include <stdio.h>

int main() {
    int num, i, multiple;
    printf("Enter a number (1-12): ");
    scanf("%d", &num);
    for (i = 1; i < 13; i++) {
        multiple = num * i;
        printf("%d x %d = %d\n",num, i, multiple);
    }

    return 0;
}