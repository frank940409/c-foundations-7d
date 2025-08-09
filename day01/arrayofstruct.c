#include<stdio.h>


typedef struct  
{
    char model[10];
    int year;
    float price;
}Car;
//it's an array, but each elements are struct.
int main(){
    Car carbrand[] = {{"Tesla", 2021, 7999.27},
                            {"Toyota", 2023, 5000.99},
                            {"Yamaha", 2009, 1999.00}};

    for (int i = 0; i < sizeof(carbrand)/ sizeof(carbrand[0]); i++)
    {
        printf("Model: %s\n", carbrand[i].model);
        printf("Year: %d\n", carbrand[i].year);
        printf("Price: $%.2f\n", carbrand[i].price);
        printf("\n");
    }
    
    
    return 0;
}