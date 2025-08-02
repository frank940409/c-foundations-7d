#include<stdio.h>

float CtoF(float fahrenheit);
float FtoC(float celsius);

int main(){

    printf("temperture Coversion Program\n");

    char choice = '\0';
    float Fresult = 0.0f;
    float Cresult = 0.0f;
    do
    {
        printf("Please enter valid symbol C or F\n");
        printf("C. Celsius to Fahrenheit\n");
        printf("F. Fahrenheit to Celsius\n");
        printf("Is the temperature in Celsius(C) or Fahrenheit(F)?: ");
        scanf(" %c", &choice);
    } while (choice != 'C' && choice != 'F');

    if (choice == 'C')
    {
        Fresult = CtoF(Fresult);
        printf("%.1fF", Fresult);
    }else if(choice == 'F'){
        Cresult = FtoC(Cresult);
        printf("%.1fC", Cresult);
    }else{
        printf("Error");
    }
    return 0;
}

float CtoF(float fahrenheit){
    float celsius = 0.0f;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0f / 5.0f * celsius) + 32.0f;
    return fahrenheit;
}
float FtoC(float celsius){
    float fahrenheit = 0.0f;
    printf("Enter the Temperature in Feahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5.0f / 9.0f * (fahrenheit - 32.0f);
    return celsius;
}