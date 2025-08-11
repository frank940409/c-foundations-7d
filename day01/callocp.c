#include<stdio.h>
#include<stdlib.h>


int main(){

    int number = 0;
    printf("Enter the number of price: ");
    scanf("%d", &number);

    float *price = calloc(number, sizeof(float));

    if (price == NULL)
    {
        printf("Memory allocation is failed!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter the price#%d: ",i + 1);
        scanf("%f", &price[i]);
    }
    for (int i = 0; i < number; i++)
    {
        printf("$%.2f ", price[i]);
    }
    
    free(price);
    price = NULL;

    return 0;
}