#include <stdio.h>

int main()
{
    int choice = 0;
    double pounds = 0.00;
    double kiloGrams = 0.00;

    printf("enter your choice 0-1 0 for pounds and 1 for kilograms : ");
    scanf("%d", &choice);
    
    if (choice == 0)
    {
        printf("enter the weight (in pounds : )");
        scanf("%lf",&pounds);

       float poundsTokilo = (pounds * 0.453592);
        printf("Your weight in pounds is %.1lf and in kilo its %.1lf ",pounds,poundsTokilo);
    }
    else if (choice == 1)
    {
        printf("enter the weight (in kilo grams : )");
        scanf("%lf",&kiloGrams);

       float KiloToPound = (kiloGrams * 2.20462);
        printf("Your weight in kilograms is %.1lf and in pound its %.1lf ",kiloGrams,KiloToPound);
    }
    else{
        printf("Kindly choose between 0 and 1");
    }
}