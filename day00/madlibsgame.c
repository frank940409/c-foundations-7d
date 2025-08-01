#include<stdio.h>
#include<string.h>

int main(){

    char adj[50] ="";
    char noun[50]="";
    char adj1[50]="";
    char verb[50]="";
    char adj2[50]="";

    printf("Enter an adjective : ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] = '\0';

    printf("Enter a noun : ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    
    printf("Enter an adjective : ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';
    
    printf("Enter a verb : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective : ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("%s %s %s %s %s", adj, adj1, adj2, verb, noun);

    return 0;
}