#include <stdio.h>

int add (int x,int y)
{
    int result = x + y;  
    return result;
}

// THIS PROJECT IS BASED ON GIVING EXCERSISE FOR VARIABLE SCOPE
// this means samed variables can be present in the projecct but it must be under diff functions

int sub (int x , int y)
{
    int result = x -y;
    return result;
}

int main()
{
    int result = 0;
    result = sub(2,5);
    printf("%ld",result);


    return 0;
}