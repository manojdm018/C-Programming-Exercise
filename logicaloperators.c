#include <stdio.h>

// logical operators include
// && --- and operator both conditions must be true
// || --- or operator one of the two conditions must me true
// ! --- this is not equal to commonly used for example in bool

int main()
{
    int num1 = 6;
    int num2 = 7;
 
    // this is and example of AND a.k.a && logical operator
   /* if (num1<7 && num2== 7){
        printf("True");
    }
    else{
        printf("False");
    } */

    // this is an example of OR a.k.a || logical operator 
    // in the example you can see that first condition is true but second is not.
    //So what we learn is that in OR LO just one condition must be true

  /*  if (num1<7 ||num2==70){
        printf("True");
    }
    else{
        printf("False");
    } */

    // finally the example for not equal to a.k.a != is used 
    // basically its the opposite of equal 
    if (num1 != 3)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}