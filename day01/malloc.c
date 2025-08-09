#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int *ptr;
    ptr = (int * ) malloc(3 * sizeof(int));
    *ptr = 9;
    *(ptr + 1) = 12;
    *(ptr + 2) = 10;
    printf("%d\n%d\n%d\n",*ptr, *(ptr + 1),*(ptr + 2));
    printf("\n");
    
    struct studentinfo
    {
        char name[10];
        float gpa;
    }*pss;
    int n = 0;
    printf("Enter how many students: ");
    scanf("%d", &n);

    pss = (struct studentinfo* ) malloc(n * sizeof(struct studentinfo));

    for (int i = 0; i < n; i++)
    {   
        getchar();
        printf("student%d. name: ", i + 1);
        fgets((pss + i )->name, sizeof((pss + i)->name), stdin);
        
        printf("student%d. gpa: ", i + 1);
        scanf("%f", &(pss + i) -> gpa);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("name for student%d.: %s\n", i + 1, (pss + i)->name);
        printf("gpa: %f\n", (pss + i)->gpa);
    }
    free(pss);
    
    


    return 0;
}