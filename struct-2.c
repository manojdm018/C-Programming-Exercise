#include <stdio.h>
#include <stdbool.h>

typedef struct{
    char company[50];
    int cost;
    int year;
    bool availableIndia;
} mobiles;
void printstatement (mobiles phone);
int main() {
    
    mobiles phone1={"Vivo",15000,2019,true};
    printstatement(phone1);
    return 0;
}

void printstatement (mobiles phone){
    printf("Company : %s\n",phone.company);
    printf("Total : %d\n",phone.cost);
    printf("Year : %d\n",phone.year);
    printf("Is available in India : %s\n", (phone.availableIndia) ? "Yes":"No");
    printf("\n");
}