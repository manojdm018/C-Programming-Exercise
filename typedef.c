#include <stdio.h>

typedef char *String;


int main(){

    String friends [3][25] = {"Rakesh","Harsha","Rahul"};

    for(int i=0;i<3;i++){
        printf("%s ",friends[i]);
    }


    return 0;
}