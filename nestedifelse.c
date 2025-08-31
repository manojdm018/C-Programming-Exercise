#include <stdio.h>
#include <stdbool.h>

int main()
{    
    bool isStudent = false;
    bool isSenior = false;
    double price = 0.00;
    double totalPrice = 0.00;

    printf("Whats the price of the product?? : ");
    scanf("%lf", &price);


    if (isStudent){
        if(isSenior){
            totalPrice = price*0.7;
            printf("You are a student and senior \n");
            printf("Your total discount is : 30%\n");
            printf("Your total price would be %.2lfrs \n", totalPrice);
        }
        else{
            totalPrice = price * 0.9;
            printf("You are a student \n");
            printf("Your total discount is : 10%\n");
            printf("Your total price would be %.2lfrs \n", totalPrice);
        }
    }
    else{
        if (isSenior){
            totalPrice = price * 0.8;
            printf("You are a Senior \n");
            printf("Your total discount is : 20%\n");
            printf("Your total price would be %.2lfrs \n", totalPrice);
        }
        else{
            totalPrice = price;
            printf("You are NOT student \n");
            printf("You are NOT a senior \n");
            printf("Your total discount is : 0%\n");
            printf("Your total price would be %.2lfrs \n", totalPrice);
        }
    }
    return 0;
}