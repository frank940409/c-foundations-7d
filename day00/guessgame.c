#include<stdio.h>//I forgot how to generate a random number
#include<stdlib.h>
#include<time.h>


int main(){

    srand(time(NULL));
    int tries = 0;
    int guessnum = 0;
    int max = 0;
    int min = 0;
    
    printf("Enter the Maximum number: ");
    scanf("%d", &max);
    printf("Enter the minimum number: ");
    scanf("%d", &min);
    int ans = (rand() % (max - min + 1)) + min;//I don't know what's rand()
    while (ans != guessnum)
    {
        printf("Guess a number betweenn %d - %d : ", min, max);
        scanf("%d", &guessnum);
        tries ++;
        if (ans > guessnum)
        {
            printf("TOO LOW! Guess higher\n");
        }else if(ans < guessnum){
            printf("TOO HIGH! Guess lower\n");
        }
    }
    printf("The answer is %d\n", ans);
    printf("It took you %d tries", tries);

    return 0;
}