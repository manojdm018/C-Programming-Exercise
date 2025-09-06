#include <stdio.h>

int main()
{
    int time = 11;

    printf("%d %s",time,(time<12) ? "am" : "pm");
    return 0;  
}