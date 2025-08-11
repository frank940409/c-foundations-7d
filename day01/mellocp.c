#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0;
    printf("Enter the number of score: ");
    scanf("%d", &n);
    int *score = malloc(n * sizeof(score));

    if (score == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the score#%d: ",i + 1 );
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", score[i]);
    }

    free(score);
    score = NULL;

    return 0;
}