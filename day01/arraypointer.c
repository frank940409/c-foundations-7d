#include<stdio.h>
#include<stdlib.h>

void replace(int *pA, int num, int n);

int main(){

    int a[5] = {11,33,43,52,77};
    int replacenum = 10;
    int n = 4;

    replace(a, replacenum, n);
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
void replace(int *pA, int num, int n){

    *(pA + (n - 1)) = num;
}
