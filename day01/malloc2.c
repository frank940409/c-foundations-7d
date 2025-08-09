#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0;
    printf("Enter how many score: ");
    scanf("%d", &n);
    
    char *score = malloc(n * sizeof(char));/*borrow some space from the heap 
    ;free(score) means clear the element in the rented space and then 
    eliminate the address by score = NULL*/

    if(score == NULL){/*Since the function malloc may return nothing or not working for 
    some reasons, we have to check the address of score is given the new address from maclloc */
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the score#%d: ", i + 1);
        scanf(" %c",&score[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Score#%d:%c \n", i + 1, score[i]);
        
    }
    
    free(score);
    score = NULL;//avoids dandling pointers
    
    

    return 0;
}