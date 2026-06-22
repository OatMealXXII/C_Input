#include <stdio.h>

int main() {
    // หาพื้นที่สี่เหลี่ยมผืนผ้า
    // ข้อมูลที่ต้องใช้ : กว้าง, ยาว, พื้นที่
    // 2 x (กว้าง x ยาว)
    float width, height, space;
    printf("Enter width: ");
    scanf("%f", &width); // 18.2
    printf("Enter height: ");
    scanf("%f", &height); // 8.9
    space = 2*(width+height);
    printf("The area is: %.2f", space);
}