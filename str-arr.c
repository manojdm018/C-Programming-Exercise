#include <stdio.h>
#include <string.h>


int main()
{
    char friends[5][45]={};

    for (int i=0;i<5;i++){
            printf("enter your friends names :");
            fgets(friends[i],sizeof(friends[i]), stdin);
            friends[i][strlen(friends[i]) - 1] = '\0';
        }

    int size = sizeof(friends) / sizeof(friends[0]) ;
    for (int j=0;j<size;j++){
        printf("%s ", friends[j]);
    }
    
    return 0;
}