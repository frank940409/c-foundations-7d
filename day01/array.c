#include<stdio.h>
#include<string.h>

void printname(char pName[][50]){
    printf("%s\n", pName[0]);
    printf("%s\n", pName[1]);
    printf("%s\n", pName[2]);
}

int main(){

    char name[3][50] = {0};
    
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {
        printf("Enter a name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }
    
    printname(name);





    int twoDArray [][3] = {{1,2,3},
                           {4,5,6},
                           {7,8,9}};

    printf("%d\n", twoDArray[1][0]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", twoDArray[i][j]);
        }
        printf("\n");
    }
    char fruit[][10] = {"Apple", "Banana", "Grape", "Guava"};

    int size = sizeof(fruit) / sizeof(fruit[0]);
    
    for (int i = 0; i < size; i++)
    {
            printf("%s\n", fruit[i]);
    }
    

    
    
    
    
    
    
    
    
    
    
    
    int score[5] = {0};//means this array has 5 element which is int type

    for (int i = 0; i < 5; i++)
    {
        int ii = i + 1;
        printf("%d.Enter the number you like: ", ii);
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", score[i]);
    }
    
    
    

    return 0;
}