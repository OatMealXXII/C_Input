#include <stdio.h>

int main() {
    // หาพื้นที่สี่เหลี่ยมผืนผ้า
    // ข้อมูลที่ต้องใช้ : กว้าง, ยาว, พื้นที่
    int width, height, space;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);
    space = width * height;
    printf("The area is: %d", space);
}