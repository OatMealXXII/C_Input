#include <stdio.h>

int main () {
    char ans;
    printf("Do you want to continue? :");
    scanf("%c",&ans);
    switch (ans) {
        case 'y':
            printf("Game Start");
            break;
        case 'Y':
            printf("Game Start");
            break;
        case 'n':
            printf("Game Over");
            break;
        case 'N':
            printf("Game Over");
            break;
        default:
            printf("IDK");
    }

    return 0;
}