#include <stdio.h>

int main(void)
{
    int num1= 3;
    int num2 = 4;

    int sum = num1+num2;
    int diffrence = num1-num2;
    int product = num1*num2;
    int division = num1/num2;
    int module = num1%num2;

    printf("the sum of num1 and num2 is %d\n", sum);
    printf("the diffrence of num1 and num2 is %d\n", diffrence);
    printf("the product of num1 and num2 is %d\n", product);
    printf("the division of num1 and num2 is %d\n", division);
    printf("the reminder of num1 and num2 is %d\n", module);
}