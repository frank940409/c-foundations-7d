#include<stdio.h>

int main(){

    float Firstnum = 0.0f;
    float Secondnum = 0.0f;
    char opterator = '\0';
    float result = 0.0f;

    printf("Please enter the first number: ");
    scanf("%f", &Firstnum);
    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &opterator);
    printf("Please enter the second number:  ");
    scanf("%f", &Secondnum);

    switch (opterator)
    {
    case '+':
        result = Firstnum + Secondnum;
        printf("Result: %g", result);
        break;
    case '-':
        result = Firstnum - Secondnum;
        printf("Result: %g", result);
        break;
    case '*':
        result = Firstnum * Secondnum;
        printf("Result: %g", result);
        break;
    case '/':
        if (Secondnum == 0)
        {
            printf("The denominator can't be 0");
        }else{
            result = Firstnum / Secondnum;
            printf("Result: %g", result);
        }
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}