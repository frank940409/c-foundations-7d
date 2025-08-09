#include<stdio.h>

typedef char String[10];
typedef char Initials[3];

typedef enum{
    SUCCESS = 1, PENDING = 2, FAILURE = 3
}Status;
void connectStatus(Status status);

int main(){

    Status status = 3;
    
    connectStatus(status);

    Initials name0 = "Li";
    Initials name1 = "KJ";
    Initials name2 = "GG";
    Initials name3 = "FJ";

        printf("%s", name0);
        printf("%s", name1);
        printf("%s", name2);
        printf("%s", name3);
    
    return 0;
}
void connectStatus(Status status){
    switch (status)
    {
    case SUCCESS:
        printf("Connection successful\n");
        break;
    case PENDING:
        printf("Still Pending\n");
        break;
    case FAILURE:
        printf("Unavailiable connection\n");
        break;
    default:
        printf("Error\n");
        break;
    }
}