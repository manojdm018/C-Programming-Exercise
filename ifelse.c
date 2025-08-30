#include <stdio.h>

int main()
{
    int x = 0;

    printf("enter you age (in numbers):");
    scanf("%d",&x);

    if (x>=65){
        printf("You are a senior");
    }
    else if (x >= 18) {
        printf("You are an adult");
    
    }
    else if (x < 18) {
        printf("You are a child");
    }

    else if (x<-1){
        printf("You have not born yet");
    }
    else if (x=0){
        printf("You are just a newborn");
    }
}