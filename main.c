#include <stdio.h>

int main()
{
    int score[4] = {40, 65, 80, 90};
    for (int i = 0; i < 4; i++)
    {
        printf("Score[%d]: %d\n", i, score[i]);
    }

    return 0;
}