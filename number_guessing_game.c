#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Number Guessing Game
 * - computer picks a random number in the range 1..20 (inclusive)
 * - user repeatedly guesses until correct
 * - program responds "Too high!", "Too low!" or "Congratulations!"
 * - displays the total number of attempts when guessed correctly
 */

int main(void) {
    int secret, guess;
    int attempts = 0;

    /* seed random number generator */
    srand((unsigned int)time(NULL));
    secret = rand() % 20 + 1; /* 1..20 */

    printf("I have picked a number between 1 and 20. Try to guess it!\n");

    while (1) {
        printf("Enter your guess (1-20): ");

        if (scanf("%d", &guess) != 1) {
            /* clear invalid input */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            printf("Invalid input. Please enter an integer.\n");
            continue;
        }

        if (guess < 1 || guess > 20) {
            printf("Please enter a number between 1 and 20.\n");
            continue;
        }

        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempt%s.\n",
                   attempts, attempts == 1 ? "" : "s");
            break;
        }
    }

    return 0;
}