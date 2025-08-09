#include<stdio.h>
#include<stdlib.h>

void rect(float x, float y, float *pArea, float *pLength);

int main(){

    float x = 0.0f;
    float y = 0.0f;
    float Area = 0.0f;
    float *pArea = NULL;
    pArea = &Area;
    float Length = 0.0f;
    float *pLength = NULL;
    pLength = &Length;

    printf("Please enter the width: ");
    scanf("%f", &x);
    printf("Please enter the length: ");
    scanf("%f", &y);

    rect(x, y, pArea, pLength);//pass the address

    printf("The Area is :%f\n", *pArea);
    printf("The Length is :%f", *pLength);

    return 0;
}

void rect(float x, float y, float *pArea, float *pLength){
    *pArea = x * y;
    *pLength = (x + y) * 2;
}