#include<stdio.h>
#include<stdlib.h>

void Switch(int *a, int *n, int *cn);

int main(){

    int array[5] = {10, 23, 44, 22, 43};
    int n = 5;
    int changenum = 15;
    int *pN = &n;
    int *pChangenum = &changenum;

    Switch(array, &n, &changenum);
    
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
void Switch(int *a, int *n, int *cn){
    int temp = *cn;
    *(a + (*n - 1)) = *cn;
}
