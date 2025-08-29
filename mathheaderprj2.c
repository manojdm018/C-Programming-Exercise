#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius = 0.00;
    double area = 0.00;
    double surfaceArea = 0.00;
    const double PI = 3.14159;
    double Volume = 0.00;

    printf("Enter the the value of radius: ");
    scanf("%lf",&radius);

    double areaOfCircle = PI * pow(radius,2);
    printf("The area of dimensional sphere is : %.2lf\n", areaOfCircle);

    double areaOfSurface = 4*PI*pow(radius,2);
    printf("The surface area of three dimensional is : %.2lf\n", areaOfSurface);

    Volume = (4.0/3.0) * PI * pow(radius,3);
    printf("the volume of the sphere is :%.2lf", Volume);

    
}