#include <stdio.h>
#include<stdbool.h>


typedef struct  {
    char name[50];
    int age;
    char id[50];
    char sex;
    bool isPresent;
}employees;

void printstatement(employees employee);
int main() {
    employees employee1 = {"Manoj yadav",20,"25BTCE118",'M',true};
    employees employee2 = {"Rakesh Kumar",19,"25BTCE117",'M',false};
    printstatement(employee1);
    printstatement(employee2);

    return 0;
}

void printstatement(employees employee)
{
    printf("Name : %s\n", employee.name);
    printf("Age : %d\n", employee.age);
    printf("ID : %s \n", employee.id);
    printf("Sex : %c\n", employee.sex);
    printf("Status: %s\n", (employee.isPresent) ? "yes": "no");
    printf("\n");
}