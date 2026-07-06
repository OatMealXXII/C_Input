#include <stdio.h>

int main() {
    int hours = 50; // โจทย์กำหนดให้ทั้งคู่ใช้บริการ 50 ชั่วโมง
    int cost = 15;
    int subscription = 100;

    int total_A = hours * cost;

    int total_B = subscription + (hours * cost * 90 / 100);

    // แสดงผลลัพธ์ของทั้งคู่
    printf("User 'A' cost summary is: %d\n", total_A);
    printf("User 'B' cost summary is: %d\n", total_B);

    // เปรียบเทียบและสรุปว่าใครจ่ายมากกว่า
    if (total_A > total_B) {
        printf("Result: User 'A' pay more than User 'B'\n");
    } else if (total_B > total_A) {
        printf("Result: User 'B' pay more than User 'A'\n");
    } else {
        printf("Summary: Both pay same price\n");
    }

    return 0;
}