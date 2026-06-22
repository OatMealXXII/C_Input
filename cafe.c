#include <stdio.h>

int main() {
    int time, sum, price = 15;
    printf("Enter time you use : ");
    scanf("%d", &time);
    sum = time * price; // ราคา 15 บาทต่อ ชม.
    printf("Price for using %d hours : %d Bath", time ,sum);

    return 0;
}