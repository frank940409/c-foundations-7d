#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0;
    printf("How many numbers u need: ");
    scanf("%d", &n);
    int *num = malloc(n * sizeof(int));

    if (num == NULL)
    {
        printf("Memory allocation fail\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number#%d:", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("number#%d = %d\n", i + 1, num[i]);
        
    }//The reason why don't need dereference is that num[i] same as *(num + i);

    
    free(num);
    num =NULL;

    return 0;
}