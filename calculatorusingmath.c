#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int power;
    int result;
    int angle;
    float root;

//------------square root ----------

printf("enter the number: ");
scanf("%d",&number);

root = sqrt(number);
printf("the square root of %d is  %.2f\n",number,root);

//--------power -----------//
printf("give the power value for %d to calculate : ", number);
scanf("%d",&power);
result = pow(number, power);
printf("the power of %d with power value of %d is : %d\n",number,power,result);


//-------Trignometry---------//
printf("enter the angle to get values of sin(),cos(),tan()");
scanf("%d",&angle);

int sint = sin(angle);
int cost = cos(angle);
int tant = tan(angle);

printf("the value of sin (%d) is %d\n", angle,sint);
printf("the value of cos (%d) is %d\n", angle,cost);
printf("the value of tan (%d) is %d\n", angle,tant);

}