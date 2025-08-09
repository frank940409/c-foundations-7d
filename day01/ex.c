#include<stdio.h>
//33984/tuition
//30000/y
int main(){
    int UCLA = 53502 * 2;//per year
    int smctuition = 33984;
    int living = 30000 * 4; 
    int USC = 73260 * 2;

    printf("uscl:%d\n",31*(smctuition + living + UCLA));
    printf("usc:%d",31*(smctuition + living + USC));

    return 0;
}