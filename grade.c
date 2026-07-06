#include <stdio.h>
int main () {
    int score;
    printf("Type your score :");
    scanf("%d", &score);

    if (score >= 80) {
        printf("You're grade 4");
    } else if (score >= 70) {
        printf("You're grade 3");
    } else if (score >= 60) {
        printf("You're grade 2");
    } else if (score >= 50) {
        printf("You're grade 1");
    } else {
        printf("You're grade 0");
    }
}