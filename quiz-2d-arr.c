#include <stdio.h>

int main()
{
    char quizQuestions[1][60] = {"which team won the ipl last year "};

    char options [4][45] = {"A. Royal challengers banglore\n",
                            "B. Chennai Super Kings\n",
                            "C. Mumbai Indians\n",
                            "D. Punjab Kings\n"};
                        
    char answer = 'A';

    char guess = '\0';

    
    do{
        printf("%s\n", quizQuestions[0]);
        for(int i = 0;i<4;i++){
            printf("%s", options[i]);
        }
        scanf(" %c", &guess);   
        
        if(guess != answer){
           printf("OOPS You hater try again!!\n");
        }
    }while(answer!=guess);

    printf("Hurray!... RCB is indeed the winner of last ipl\n");

    return 0;
}