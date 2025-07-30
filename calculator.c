#include<stdio.h>

int main(){

    float firstnum = 0.0f;
    float secondnum = 0.0f;
    char opterator = '\0';
    float result = 0.0f;
    
    printf("This is a calculator \n");
    printf("First number:  ");
    scanf(" %f", &firstnum);
    printf("Enter the operator(+,-,*,/):  ");
    scanf(" %c", &opterator);
    printf("Enter the second number:  ");
    scanf(" %f", &secondnum);
    
    switch (opterator)
    {
    case '+':
        result = firstnum + secondnum;
        printf("%g %c %g = %g", firstnum, opterator, secondnum, result);
        break;
    case '-':
        result = firstnum - secondnum;
        printf("%g %c %g = %g", firstnum, opterator, secondnum, result);
        break;
    case '*': 
        result = firstnum * secondnum;
        printf("%g %c %g = %g", firstnum, opterator, secondnum, result);
        break;
    case '/':
        if (secondnum == 0)
        {
            printf("The denominator can not be 0\n");//numerator
        }
        else{
            result = firstnum / secondnum; 
            printf("%g %c %g = %g", firstnum, opterator, secondnum, result);
        }
        break;
        
        
    default:
        printf("Please put the right operator! \n");
        break;
    }

    return 0;
}