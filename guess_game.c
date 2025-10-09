#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : GUESSING GAME
DATE : 6/10/2025 */
int main() {
    int secret, guess, attempts = 0;

    srand(time(0)); 
    secret = rand() % 20 + 1; 

    while (1) {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}