#include<stdio.h>
#include<stdlib.h>

int *max(int *a, int *b);

int main(){
    int a = 3;
    int b = 5;

    int *pA = &a;
    int *pB = &b;
    int *prt = NULL;
    prt = max(pA, pB);

    printf("The max number is :%d", *prt);
  
    return 0;
}

int *max(int *a, int *b){

    if (*a>*b)
    {
        return a;
    }else{
        return b;//Since the functiom type is int*, not int, can't use *a(value:int)
                 //you have to return the same type.
    }
    
}


  