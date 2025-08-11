#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 0;
    printf("Enter the number of price: ");
    scanf("%d", &n);

    float *price = malloc(n * sizeof(float));

    if (price == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    for ( int i = 0; i < n; i++)
    {
        printf("Enter the price#%d: ", i + 1);
        scanf("%f", &price[i]);
    }
    int newNumber = 0;
    printf("Enter the new number of price: ");
    scanf("%d", &newNumber);

    float *temp = realloc(price, newNumber * sizeof(float));
    if (temp == NULL)
    {
        printf("Memory reallocation failed!");
        free(temp);
        return 1;
    }
    
    price = temp;
    temp = NULL;
    
    for ( int i = n; i < newNumber; i++)
    {
        printf("Enter the price#%d: ", i + 1);
        scanf("%f", &price[i]);
    }
    for (int i = 0; i < newNumber; i++)
    {
        printf("$%.2f ", price[i]);
    }
    free(price);
    price = NULL;

    return 0;
}