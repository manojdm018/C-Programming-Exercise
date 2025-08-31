#include <stdio.h>
#include <string.h>


//so whats are functions??
//According to its definations its function where you can store the code and call it as many times as you want 
//its makes your work easy


void birthdayBoi (char name[50],int age);

int main ()
{
    char name [50] = "";
    int age = 0;

    printf("Whats your name? ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';

    printf("Whats your age? ");
    scanf("%d", &age);

    birthdayBoi(name,age);
    return 0;
}














void birthdayBoi (char name[50],int age){
    printf("\nHappy birthday to you!!");
    printf("\nHappy birthday to you!!");
    printf("\nHappy birthday to dear %s", name);
    printf("\nHappy birthday to you....");
    printf("\nCongrats!! You are %d years old!!",age);
}