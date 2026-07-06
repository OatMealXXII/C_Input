#include <stdio.h>

int main() {
    float hours;

    printf("Enter total hours: ");
    if (scanf("%f", &hours) != 1 || hours < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    float no_member = hours * 15;
    float member = 100 + (hours * 13.5);

    printf("\n--- Results ---\n");
    printf("No Membership: %.2f THB\n", no_member);
    printf("Membership: %.2f THB\n", member);
    printf("----------------\n");

    if (member < no_member) {
        printf("Conclusion: Should subscribe (Saves %.2f THB)\n", no_member - member);
    } else if (member > no_member) {
        printf("Conclusion: Should not subscribe (Costs %.2f THB more)\n", member - no_member);
    } else {
        printf("Conclusion: Both options cost the same.\n");
    }

    return 0;
}