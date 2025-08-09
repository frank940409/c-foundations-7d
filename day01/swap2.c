#include<stdio.h>
#include<stdlib.h>

void swap(int *n1, int *n2);

int main(){
    int a = 120;
    int b = 20;
    int *pA = NULL;
    int *pB = NULL;
    pB = &b;
    pA = &a;

    printf("Before swap a =%d ,b = %d\n",*pA, *pB);

    swap(pA, pB);

    printf("After swap a =%d ,b = %d\n",*pA, *pB);

    return 0;
}

void swap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}