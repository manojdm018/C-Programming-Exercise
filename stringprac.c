#include <stdio.h>
#include <string.h>

int main (void)
{
    char name [30] = "";
    int age = 0;
    char grade;
    float gpa = 0.0f;

    printf("Whats your name? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("whats your age? ");
    scanf("%d", &age);

    printf("whats your recent grade in CS exam? ");
    scanf(" %c", &grade);
    //grade[strlen(grade) - 1] = '\0';

    printf("Whats your last sems gpa? ");
    scanf(" %f", &gpa);

    printf("name : %s\n", name);
    printf("age : %d\n", age);
    printf("grade : %c\n", grade);
    printf("gpa : %.2f\n", gpa);
}