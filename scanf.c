#include <stdio.h>
#include <string.h>

int main (void)
{
    int age;
    float gpa;
    char grade;
    char name [30];

   // getchar();
    printf("What's your name? ");
    //fgets(name, sizeof(name), stdin);
    scanf("%s", &name);
   // name[strlen(name) - 1] = '\0'; // to remove the newline character from the string

    printf("What's your age? ");
    scanf(" %d",&age);
    //fgets(age, sizeof(age), stdin);

    printf("whats your grade in your recent exam? ");
    scanf(" %c", &grade);

    printf("whats your gpa? ");
    scanf(" %f", &gpa);

    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Grade : %c\n",grade);
    printf("GPA : %.2f\n",gpa);
}