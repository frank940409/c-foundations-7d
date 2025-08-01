#include<stdio.h>
#include<math.h>

int main(){

    float r = 0.0f;
    float circumference = 0.0f;
    float Surfacearea = 0.0f;
    float volume = 0.0f;
    const double PI = M_PI;//make PI constant double so compiler knows it never change

    printf("Enter the radius: ");
    scanf("%f", &r);

    circumference = 2.0 * r * PI;
    Surfacearea = pow(r,2) * PI;
    volume = (4.0/3.0) * (pow(r,3)) * PI;
    //Can't use 4/3 , 4.0/3.0 instead!
    //cuz 3 / 4 = 1. Since is int/int , the answer would be int as well, which is one 
    //but the fractional part was discarded. 
    //if a/b, a is double , b is int then the ans would be double,
    //Else if either is double the ans is double!!!
    //Else if either is float the ans is float!!!
    
    printf("circumference :%.2f\n",circumference );
    printf("Surfacearea: %.2f\n", Surfacearea);
    printf("volume :%.2f\n", volume);

    return 0;
}