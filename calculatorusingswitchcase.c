#include <stdio.h>

int main()
{
    double num1 = 0.00;
    double num2 = 0.00;
    char operator = '\0';
    double result = 0.00;

    printf("Enter the value of First number : ");
    scanf("%lf", &num1);

    printf("Enter the Operator (+ - * /) : ");
    scanf(" %c",&operator);

    printf("Enter the value of Second number : ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result : %.2lf\n",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result : %.2lf\n", result);
            break;
        case '*':
            result = num1*num2;
            printf("Result : %.2lf\n",result);
            break;
        case '/':
            if(num2 == 0){
                printf("any number cannot be divided by zero");
            }
            else{
                result = num1 / num2;
                printf("Result : %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, * or /\n");
            break;

    }
    return 0;
}