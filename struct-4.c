#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char company[60];
    int cost;
    char coreChip[30];
    bool isAvailable;
}laptops;

void printstmt(laptops laptop[],int size);

int main() {
    
    laptops laptop1[]={{"Chuwi",22000,"intel-Celeron",true},
                        {"HP",45000,"i2",true},
                        {"Lenovo",32000,"intel-i3",false}};

    int size = sizeof(laptop1)/sizeof(laptop1[0]);
    printstmt(laptop1,size);
    return 0;
}

void printstmt(laptops laptop[],int size){
    for (int i=0;i<size;i++){
        printf("Company :%s\n",laptop[i].company);
        printf("Cost :%d\n",laptop[i].cost);
        printf("Core Chip :%s\n",laptop[i].coreChip);
        printf("The availability in India :%s\n",(laptop[i].isAvailable) ? "Yes":"NO");
        printf("\n");
    }
}