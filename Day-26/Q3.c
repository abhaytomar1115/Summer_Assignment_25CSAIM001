// Write a program to Create ATM simulation.

#include <stdio.h>

int main()
{
    int pin;
    int correctPin = 1234;
    double balance = 10000.00;
    double amount;
    int choice;
    int attempts = 0;

    printf("=== Welcome to ATM ===\n\n");

    // PIN verification (max 3 attempts)
    while (attempts < 3)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            break;
        }
        else
        {
            attempts++;
            printf("Wrong PIN! Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3)
    {
        printf("\nCard blocked! Too many wrong attempts.\n");
        return 0;
    }

    // ATM Menu
    do
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nYour balance: $%.2f\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: $");
            scanf("%lf", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Deposited $%.2f. New balance: $%.2f\n", amount, balance);
            }
            else
            {
                printf("Invalid amount!\n");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: $");
            scanf("%lf", &amount);
            if (amount <= 0)
            {
                printf("Invalid amount!\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance -= amount;
                printf("Dispensing $%.2f. New balance: $%.2f\n", amount, balance);
            }
            break;

        case 4:
            printf("\nThank you for using ATM. Goodbye!\n");
            break;

        default:
            printf("Invalid option! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}