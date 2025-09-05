#include <stdio.h>

void checkBalance (float balance);

float deposite ();

float withdraw(float balance);

int main()
{
    int choice = 0;
    do{
        printf("*** WELCOME TO BANK OF BASODA ***\n");
        printf("1.VIEW BALANCE\n");
        printf("2.DESPOSIT MONEY\n");
        printf("3.WITHDRAW\n");
        printf("4.EXIT\n");
        printf("WHATS YOUR CHOICE : \n");
        scanf("%d",choice);

            case 1:
             checkBalance = balance();
             break;
            case 2:
            balance += deposite();
            break;
            case3:
            balance -= withdraw(balance) ;
            break;
            case4:
            printf("\nTHANKS FOR USING BANK OF BASODA\n");
            break;
            default:
            printf("please choose between 1-4 ");
        }
        }
    while(4!=choice);
    return 0;
}
void checkBalance(float balance)
{
    printf("Your total balance is $%lf", balance);
}

float deposite()
{
    return 0.0f;
}

float withdraw(float balance)
{
    return 0.0f;
}
