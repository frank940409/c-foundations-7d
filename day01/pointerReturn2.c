#include<stdio.h>
#include<stdlib.h>


int *maxreturn(int *n1, int *n2);
int main(){

    int a = 10;
    int b = 3;
    int *pA = &a;
    int *pB = &b;
    int *pReturn = NULL;
    pReturn = maxreturn(pA, pB);
    printf("%d is the biggest", *pReturn);

    return 0;
}
int *maxreturn(int *n1, int *n2){
    if (*n1>*n2)
    {
        return n1;
    }else{
        return n2;
    }

}