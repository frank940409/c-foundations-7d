#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[3] = {3, 5, 7};//the first element is address for array a;

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += *(a + i);
    }
    printf("%d", sum);
    

    return 0;
}