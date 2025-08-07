#include<stdio.h>

void printage(int *pAge){
    printf("The age is %d",*pAge );
}

int main(){
    
    int age = 22;
    int *pAge = NULL;
    pAge = &age;
    *pAge += 1;
    //The datatype of pointer should be same as the origin variable u pointed
    printf("The address of age is: %p\n", &age);
    printf("The value of age is: %d\n", *pAge);

    printf("The size of age is: %lu bytes\n", sizeof(age));
    printf("The size of Pointer of age is: %lu bytes\n", sizeof(pAge));

    printage(pAge);

    return 0;
}