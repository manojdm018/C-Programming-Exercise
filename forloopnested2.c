#include <stdio.h>

int main()
{
    int rows = 0;
    int coloums = 0;
    char symbol = '\0';

    printf("Make rectangle using any symboml or numbers your want \n");
    printf("enter the row : ");
    scanf("%d",&rows);
    printf("enter the coloumn : ");
    scanf("%d", &coloums);
    printf("enter the symbol: ");
    scanf(" %c", &symbol);

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=coloums;j++){
            printf(" %c", symbol);
        }
        printf("\n");
    }
    return 0;
}