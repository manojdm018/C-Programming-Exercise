#include <stdio.h>
#include <string.h>

int main (void)
{
    char name [50] = "";
    float price = 0.0f;
    int quantity = 0;

    printf("Which food would you like to buy? ");
    fgets(name, sizeof(name),  stdin);
    name[strcspn(name, "\n")] = '\0';


    
    printf("Whats the price of the %s: rs", name);
    scanf("%f", &price);


    printf("How many portions of %s would you like:", name);
    scanf("%d", &quantity);

    int total = price * quantity;
    printf("Your total would be rs%d", total);
}