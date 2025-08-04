#include<stdio.h>

float deposit(float balance){
    float deposit = 0.0f;
    printf("How much u wanna deposit: ");
    scanf("%f", &deposit);
    balance += deposit;
    printf("You have deposit $%.2f\n", deposit);
    return balance;
};
float withdra(float balance){
    float withdraw = 0.0f;
    printf("How much u wanna withdraw: ");
    scanf("%f", &withdraw);
    if (withdraw > balance)
    {
        printf("Insufficient balance!\n");
        balance -= 0;
    }else{
        balance -= withdraw;
        printf("You have withdraed $%.2f\n", withdraw);
    }
    return balance;
    
};
void checkBalance(float balance){
    printf("The current balance is :$%.2f\n", balance);
};

int main(){

    float balance_in_main = 0.0f;
    int userOp =0;

    do
    {
        do
        {
            printf("\nSlect an option: \n");
            printf("\n1.Check balance\n");
            printf("2.Deposit Money\n");
            printf("3.Withdrw Money\n");
            printf("4.Exit(All the balance will be reset to 0)\n");
            scanf("%d", &userOp);
        } while (userOp != 1 && userOp != 2 && userOp != 3 && userOp != 4);
        
        switch (userOp)
        {
        case 1:
            checkBalance(balance_in_main);
            break;
        case 2:
            balance_in_main = deposit(balance_in_main);
            /*will the function automatically return the 
            balance back to balance in main? 
            or we need another variable to store the new balance, returned from function */
            break;
        case 3:
            balance_in_main = withdra(balance_in_main);
            break;
        case 4:
            printf("You have exited, Thansks for using it!");
            break;
        default:
            printf("Error");
            break;
        }
    } while (userOp != 4);
    
return 0;
}