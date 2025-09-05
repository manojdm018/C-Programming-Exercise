#include <stdio.h>

int main(){
    int marks [5]= {0};

    for(int i=0;i<5;i++){
        printf("Whats the marks?");
        scanf("%d", &marks[i]);
    }
    for (int j=0;j<5;j++){
        printf("%d ", marks[j]);
    }
}