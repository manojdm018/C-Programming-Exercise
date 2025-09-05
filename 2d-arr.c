#include <stdio.h>

int main(){
    char number_pad [4][3] = {{'1' ,'2' ,'3'},
                            {'4' ,'5' ,'6'},
                            {'7' ,'8' ,'9'},
                            {'*' ,'0' ,'#'}};

    for (int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%c ", number_pad[i][j]);
        }
        printf("\n");
    }

    return 0;
}