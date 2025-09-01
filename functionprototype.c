#include <stdio.h>
#include <stdbool.h>

void intro (char x [],int y );
bool ageCheck(int age);

int main (){

    intro("Manojyadav", 20);

    bool age = ageCheck(20);
    if(age){
        printf("You are an adult");
    }
    else{
        printf("Growup Kid");
    }

    return 0;
}


void intro (char x [],int y ){
    printf("Hello %s\n", x);
    printf("You are %d years old\n", y);
}

bool ageCheck(int age){
    if (age >= 18){
    return true;}

    else{
        return false;
    }
}