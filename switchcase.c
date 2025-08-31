#include <stdio.h>

 //Switch - Case it is a function we use as an alternative for if-else more comfortable when using integer

int main()
{
    int DayOfTheWeek = 0;

    printf("Enter the number between (1 - 7)");
    scanf("%d", &DayOfTheWeek);

    switch(DayOfTheWeek){
        case 1:
        printf("Its Monday");
        break;
        case 2:
        printf("Its Tuesday");
        break;
        case 3:
        printf("Its Wednesday");
        break;
        case 4:
        printf("Its Thursday");
        break;
        case 5:
        printf("Its Friday");
        break;
        case 6:
        printf("Its Saturday");
        break;
        case 7:
        printf("Its Sunday");
        break;

        default:
        printf("Please pick the number between (1 - 7)");
    }
    return 0;
}