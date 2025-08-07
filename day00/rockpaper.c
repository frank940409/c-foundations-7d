#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getUserChoice();
int getComputerChoice();
void checkwinner(int userchoice, int compuchoice);

int main(){
    srand(time(NULL));
    printf("*** ROCK PEPPER SCISSORS ***\n");
    int userchoice = getUserChoice();
    int compuchoice = getComputerChoice();
    /*Q.I for got How to pass the paramater getUserChoice() and getComputerChoice() 
    to checkwinner? But I figure it out later*/
    switch (userchoice)
    {
    case 1:
        printf("You choose Rock!\n");
        break;
    case 2:
        printf("You choose Papper!\n");
        break;
    case 3:
        printf("You choose Scissors!\n");
        break;
    default:
        printf("Error");
    }
    switch (compuchoice)
    {
    case 1:
        printf("Computer choose Rock!\n");
        break;
    case 2:
        printf("Computer choose Papper!\n");
        break;
    case 3:
        printf("Computer choose Scissors\n!");
        break;
    default:
        printf("Error\n");
    }
    checkwinner(userchoice,compuchoice);
    return 0;
}

int getUserChoice(){
    int userchoice = 0;
    do
    {
        printf("Choose an option:  \n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        scanf("%d", &userchoice);
    } while (userchoice != 1 && userchoice != 2 && userchoice != 3);
    return userchoice;
}
int getComputerChoice(){
    int compuchoice = 0;
    
    compuchoice = rand() % 3 + 1;
    return compuchoice;
}
void checkwinner(int userchoice, int compuchoice){
    if (userchoice == compuchoice)
    {
        printf("It's a TIE!");
    }else if(userchoice == 1 && compuchoice == 3){
        printf("You WIN!");
    }else if (userchoice == 2 && compuchoice ==1)
    {
        printf("You WIN!");
    }else if(userchoice == 3 && compuchoice ==2){
        printf("You WIN!");
    }else{
        printf("You lose");
    }
}
