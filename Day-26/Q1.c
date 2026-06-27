// Write a program to Create number guessing game.


/*
 * Number Guessing Game
 * The computer picks a random number; you try to guess it.
 * After each guess you get a "too high" or "too low" hint.
 * The game tracks your attempts and lets you play again.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define MIN 1
#define MAX 100
 
/* Returns 1 if the player wants to play again, 0 otherwise. */
int play_round(void) {
    int secret = (rand() % (MAX - MIN + 1)) + MIN;
    int guess   = 0;
    int attempts = 0;
 
    printf("\n  I've picked a number between %d and %d.\n", MIN, MAX);
    printf("  Can you guess it?\n\n");
 
    while (1) {
        printf("  Your guess: ");
 
        /* Validate input */
        if (scanf("%d", &guess) != 1) {
            printf("  Please enter a valid number.\n");
            /* Clear the bad input */
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
 
        if (guess < MIN || guess > MAX) {
            printf("  Out of range. Guess between %d and %d.\n", MIN, MAX);
            continue;
        }
 
        attempts++;
 
        if (guess < secret) {
            printf("  Too low!  Try higher.\n");
        } else if (guess > secret) {
            printf("  Too high! Try lower.\n");
        } else {
            /* Correct guess */
            printf("\n  Correct! The number was %d.\n", secret);
            if (attempts == 1)
                printf("  You got it in 1 attempt — impressive!\n");
            else
                printf("  You got it in %d attempts.\n", attempts);
            break;
        }
    }
 
    char again;
    printf("\n  Play again? (y/n): ");
    scanf(" %c", &again);   /* space before %c skips whitespace */
    return (again == 'y' || again == 'Y');
}
 
int main(void) {
    srand((unsigned int)time(NULL));   /* seed random number generator */
 
    printf("================================\n");
    printf("     NUMBER GUESSING GAME\n");
    printf("================================\n");
 
    do {
        /* nothing */
    } while (play_round());
 
    printf("\n  Thanks for playing. Goodbye!\n\n");
    return 0;
}
 