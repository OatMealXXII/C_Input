#include <stdio.h>

int main()
{
    int score[5];
    int max, min;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter score[%d]: ", i + 1);
        scanf("%d", &score[i]);
    }

    max = score[0];
    min = score[0];

    for (int i = 1; i < 5; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
        }
        if (score[i] < min)
        {
            min = score[i];
        }
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}