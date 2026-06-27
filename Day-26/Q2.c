// Write a program to Create voting eligibility system.

#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("=== Voting Eligibility System ===\n\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (y/n): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        printf("\nResult: You ARE eligible to vote!\n");
    } else {
        printf("\nResult: You are NOT eligible to vote.\n");
        if (age < 18)
            printf("Reason: You must be at least 18 years old.\n");
        if (citizen != 'y' && citizen != 'Y')
            printf("Reason: You must be a citizen.\n");
    }

    return 0;
}