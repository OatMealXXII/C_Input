#include <stdio.h>

int main() {
    int total_tomatoes;
    int tomatoes_per_dish;
    int dishes = 0;

    for (total_tomatoes = 35, tomatoes_per_dish = 3; total_tomatoes >= tomatoes_per_dish; total_tomatoes -= tomatoes_per_dish) {
        dishes++;
    }

    int remaining_tomatoes = total_tomatoes;

    printf("Total Dishes: %d\n", dishes);
    printf("Remaining Tomatoes: %d\n", remaining_tomatoes);

    return 0;
}