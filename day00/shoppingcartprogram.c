//Day00 enviornment check and foundamental practice
#include<stdio.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantities = 0;
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each ?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantities);

    total = price * quantities;
    
    printf("You've ordered %d %s", quantities, item);
    printf("The total is: $%.2f ", total);

    return 0;
}