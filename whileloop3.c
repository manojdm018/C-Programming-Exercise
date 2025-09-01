#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isStudent = true;
    char currentStatus = '\0';

    printf("If you are still a student in GCU (y = yes, n = no)");
    scanf(" %c", &currentStatus);

    while(currentStatus != 'n' && currentStatus!= 'N'){
        printf("You are still a student in GCU");
        scanf(" %c", &currentStatus);

        if (currentStatus != 'y' && currentStatus != 'Y'){
            printf("Congrats on your graduation!!");
            isStudent = false;
        }
    }
    printf("You have exited");

    return 0;
}