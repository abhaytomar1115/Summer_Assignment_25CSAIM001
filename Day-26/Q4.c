// Write a program to Create quiz application.

#include <stdio.h>

#define TOTAL_QUESTIONS 5

int main() {
    char questions[TOTAL_QUESTIONS][100] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "What is 10 x 10?",
        "Who invented the telephone?",
        "What is the largest ocean on Earth?"
    };

    char optA[TOTAL_QUESTIONS][30] = {"Berlin",   "Earth",   "10",   "Edison",   "Atlantic"};
    char optB[TOTAL_QUESTIONS][30] = {"Madrid",   "Mars",    "100",  "Tesla",    "Indian"};
    char optC[TOTAL_QUESTIONS][30] = {"Paris",    "Venus",   "1000", "Bell",     "Arctic"};
    char optD[TOTAL_QUESTIONS][30] = {"Rome",     "Jupiter", "10000","Newton",   "Pacific"};

    char answers[TOTAL_QUESTIONS] = {'c', 'b', 'b', 'c', 'd'};

    char userAnswer;
    int score = 0;

    printf("=====================================\n");
    printf("        WELCOME TO QUIZ APP          \n");
    printf("=====================================\n\n");

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        printf("Q%d. %s\n", i + 1, questions[i]);
        printf("  a) %s\n", optA[i]);
        printf("  b) %s\n", optB[i]);
        printf("  c) %s\n", optC[i]);
        printf("  d) %s\n", optD[i]);
        printf("Your answer (a/b/c/d): ");
        scanf(" %c", &userAnswer);

        if (userAnswer == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %c\n\n", answers[i]);
        }
    }

    printf("=====================================\n");
    printf("Your Score : %d / %d\n", score, TOTAL_QUESTIONS);
    printf("Percentage : %.1f%%\n", (score * 100.0) / TOTAL_QUESTIONS);

    if      (score == 5) printf("Grade: A+ Perfect!\n");
    else if (score >= 4) printf("Grade: A  Excellent!\n");
    else if (score >= 3) printf("Grade: B  Good!\n");
    else if (score >= 2) printf("Grade: C  Average\n");
    else                 printf("Grade: F  Try again!\n");

    printf("=====================================\n");

    return 0;
}