#include<stdio.h>
#include<math.h>

int main(){

    float r = 0.0f;
    float circumference = 0.0f;
    float Surfacearea = 0.0f;
    float volume = 0.0f;
    double PI = 3.1415926;

    printf("Enter the radius: ");
    scanf("%f", &r);

    circumference = 2.0 * r * PI;
    Surfacearea = pow(r,2) * PI;
    volume = (4.0/3.0) * (pow(r,3)) * PI;//Can't use 4/3 , 4.0/3.0 instead!
    
    printf("circumference :%.2f\n",circumference );
    printf("Surfacearea: %.2f\n", Surfacearea);
    printf("volume :%.2f\n", volume);

    return 0;
}