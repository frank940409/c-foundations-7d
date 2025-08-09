#include<stdio.h>
#include<stdlib.h>

void swap(int *A, int *B);

int main(){

    int a = 20;
    int b = 100;
    int *pA = &a;
    int *pB = &b;

    printf("Before swap a = %d, b = %d\n",*pA,*pB);

    swap(pA, pB);

    printf("After swap a = %d,b = %d", *pA, *pB);
    return 0;
}
void swap(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp;
}