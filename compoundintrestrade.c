#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 0.00;
    double intrest = 0.00;
    double time = 0.00;
    double total = 0.00;

    printf("enter the principal: ");
    scanf("%lf",&principal);
    printf("enter the intrest rate : ");
    scanf(" %lf", &intrest);
    printf("enter the span of the loan : ");
    scanf(" %lf", &time);

    total = principal * pow((1+intrest/100),time);
    printf("the compound intrest of your loan is : %.2lf", total);
}