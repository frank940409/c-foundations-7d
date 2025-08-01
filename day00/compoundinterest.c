#include<stdio.h>
#include<math.h>

int main(){

    float principle = 0.0f;
    int times = 0;
    double rate = 0.0f;
    float years = 0.0f;
    float amount = 0.0f;
    printf("Please enter the principle:  ");
    scanf("%f", &principle);
    printf("Enter the interest rate(percentage):  ");
    scanf("%lf", &rate);
    printf("Enter How many times compounded per year:  ");
    scanf("%d", &times);
    printf("Enter the number of years(how long) :  ");
    scanf("%f", &years);

    rate = rate / 100;

    amount = principle * (pow(1 + rate/times, years * times));
    printf("The final return will be $%.2f", amount);

    return 0;
}