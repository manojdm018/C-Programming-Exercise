#include <stdio.h>

int main()
{
    char DayOfTheWeek = '\0';

    printf("Enter the letter between(M,T,W,H,F,S,U) : ");
    scanf("%c", &DayOfTheWeek);

    switch (DayOfTheWeek) {
        case 'M':
        printf("Its Monday");
        break;
        case 'T':
        printf("Its Tuesday");
        break;
        case 'W':
        printf("Its Wednesday");
        break;
        case 'H':
        printf("Its Thurday");
        break;
        case 'F':
        printf("Its Friday");
        break;
        case 'S':
        printf("Its Saturday");
        break;
        case 'U':
        printf("Its Sunday");
        break;
        default:
        printf("Please enter between (M,T,W,H,F,S,U)");
    }
    return 0;
}
