#include <stdio.h>

int calculate(int day, int fish, int tomato)
{
    int can;

    if (fish / 3 < tomato / 2)
    {
        can = fish / 3;
    }
    else
    {
        can = tomato / 2;
    }

    printf("Day %d\n", day);
    printf("Can = %d\n", can);
    printf("Fish Left = %d\n", fish - can * 3);
    printf("Tomato Left = %d\n\n", tomato - can * 2);

    return can;
}

int main()
{
    calculate(1, 30, 20);
    calculate(2, 60, 20);
    calculate(3, 52, 33);
    calculate(4, 70, 50);
    calculate(5, 100, 200);

    return 0;
}