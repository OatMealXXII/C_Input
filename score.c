#include <stdio.h>

void main() {
    //สร้างตัวแปร 3 ตัวสำหรับเก็บคะแนนงาน 30 ,คะแนนจิตพิสัย 20 , คะแนนสอบ 50
    int HW, afd, test;
    HW = 25;
    afd = 20;
    test = 25;
    float sum;
    sum = HW + afd + test;
    printf("Home Work : %d\nAffective Domain Score : %d\nFinal Test Score : %d\nSum : %.2f",HW,afd,test,sum);
}