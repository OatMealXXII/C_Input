#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ans = 'Y';

    while (ans == 'Y')
    {
        int num, i, multiple;
        printf("Enter a number (1-12): ");
        scanf("%d", &num);

        for (i = 1; i < 13; i++)
        {
            multiple = num * i;
            printf("%d x %d = %d\n", num, i, multiple);
        }

        printf("Do you want to continue? [Y/N]: ");
        scanf(" %c", &ans);
        ans = getchar();
        printf("Restarting...\n");
        getchar();
        system("cls");
    }
    printf("Bye Bye");

    return 0;
}