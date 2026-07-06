#include <stdio.h>

int main() {
    float temp;
    printf("Enter a temperature : ");
    scanf("%f", &temp);
    if (temp>50) {
        printf("It's so hot");
    } else if (temp<0) {
        printf("It's too cold");
    } else {
        printf("It's normal");
    }
}