#include <stdio.h>
#include <stdbool.h>

/*in this program you learn diffrent types of format symbols used 
to reprsent in the print option*/

int main(void)
{
    int age = 20; //has 2 bit capacity
    float weight = 85.650; 
    double pi = 3.1432108903999334;
    char blood = 'b';
    char friend []= "rakesh";
    bool isOnSale= false;

    printf("iam %d years old\n",age);
    printf("i weight about %.2fkg\n",weight);
    printf("my blood type is %c+\n",blood);
    printf("my friends name is %s\n",friend);
    if (isOnSale)
    {
        printf("is your car on sale?");
    }
    else
    {
        printf("no my car is not on sale!!");
    }

}