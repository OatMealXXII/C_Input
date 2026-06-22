#include <stdio.h>

int main() {
    int sum, time, price;
    printf("Enter time you use :\t");
    scanf("%d", &time); // 50 ชม.
    printf("Price per hour :\t");
    scanf("%d", &price);  // ราคา 15 บาทต่อ ชม.
    sum = time * price;
    printf("Price for using %d hours : %d Bath", time ,sum);

    return 0;
}