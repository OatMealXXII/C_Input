#include <stdio.h>
int main () {
    int score;
    printf("Type score :");
    scanf("%d",&score);

    if (score>=50) {
        printf("PASS");
    } else {
        printf("FAIL");
    }
}