#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int min = 0, max = 0;

    printf("Enter the minimum number: ");
    if (scanf("%d", &min) != 1) return 1;

    printf("Enter the maximum number: ");
    if (scanf("%d", &max) != 1) return 1;

    if (min > max) { int t = min; min = max; max = t; }

    srand((unsigned)time(NULL));

    int range = max - min + 1;
    int ans = min + rand() % range;

    int guess = 0, tries = 0;

    do {
        printf("Guess a number between %d and %d: ", min, max);
        if (scanf("%d", &guess) != 1) { puts("Invalid input."); return 1; }

        if (guess < min || guess > max) {
            puts("Out of range. Try again.");
            continue;
        }

        tries++;
        if (guess < ans) puts("TOO LOW! Guess higher");
        else if (guess > ans) puts("TOO HIGH! Guess lower");
    } while (guess != ans);

    printf("The answer is %d\n", ans);
    printf("It took you %d %s\n", tries, tries == 1 ? "try" : "tries");
    return 0;
}
