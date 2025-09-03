#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((time(NULL)));

    int min = 1;
    int max  = 50;
    int tries;
    int answer;

    int random = rand() % (max - min + 1) + 1;

    printf("***** WELCOME TO NUMBER GUESSING GAME *****\n");
    do{
        printf("enter the number between %d - %d : \n",min,max);
        scanf("%d", &answer);
        if(answer == random){
            printf("your guess is correct!!\n");
            tries++;
        }
        else if(random < answer){
            printf("its too high\n");

        }
        else if(random> answer){
            printf("its too low\n");
        }
        

    }while(random != answer);

    printf("Your guessed and correct number is %d\n", answer);
    printf("You took %d tries", tries);

    return 0;
}