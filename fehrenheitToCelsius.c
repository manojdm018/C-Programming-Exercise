#include <stdio.h>

int main()
{
    char choice = '\0';
    double ferhenheit = 0.00;
    double celsius = 0.00;

    printf("This is temperature convertor program\n");
    printf("f.For Ferhenheit\n");
    printf("c.For Celsius\n");

    printf("Enter 'f' for Fehrenheit and 'c' for Celsius : ");
    scanf("%c",&choice);

    if (choice == 'f')
    {
        printf("Enter the temperature in ferhenheit :");
        scanf("%lf",&ferhenheit);
        double fToC = (ferhenheit - 32) * 5.0/9.0;

        printf("The %.2lf ferhenheit  is converted into %.2lf celsius  ", ferhenheit,fToC);
    }
    else if (choice == 'c')
    {
        printf("Enter the temperature in celsius to convert into ferhenhiet : ");
        scanf(" %lf",&celsius);

        double fToC = (celsius* 9.0/5.0) + 32;
        printf("the %.2lf celsius is converted into %.2lf ferheniet ", celsius,fToC);
    }
    else{
        printf("the choice is not valid !! please use between in 'f' and 'c'" );
    }
    return 0;
}