#include<stdio.h>
#include<stdlib.h>


int main(){

    //realloc = reallocation    
                //resize the previously allocated memory 
                //realloc(ptr, bytes)
    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed");
        return 1; 
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter the price#%d: ", i + 1);
        scanf(" %f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter the extra number of price: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("Memory reallocation failed");
    }else{
        for (int i = number; i < newNumber; i++)
        {
            printf("Enter the new number of price#%d: ", i + 1);
            scanf("%f ", &temp[i]);
        }
        prices = temp;
        temp = NULL;

    }

    for (int i = 0; i < newNumber; i++)
    {
        printf("$%.2f ",prices[i]);
        
    }
    free(prices);
    prices = NULL;

    return 0;
}