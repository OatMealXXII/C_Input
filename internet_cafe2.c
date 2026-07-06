#include <stdio.h>

int main() {
    int hours = 2 * 30; // 60 hours total

    float no_member = hours * 15;
    float member = 100 + (hours * 13.5); // 13.5 comes from 15 with 10% discount

    printf("No Membership: %.2f THB\n", no_member);
    printf("Membership: %.2f THB\n", member);

    if (member < no_member) {
        printf("Conclusion: Should subscribe (Saves %.2f THB)\n", no_member - member);
    } else {
        printf("Conclusion: Should not subscribe (Costs %.2f THB more)\n", member - no_member);
    }

    return 0;
}