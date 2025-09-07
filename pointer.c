#include <stdio.h>

void addMoney(int *pMoney,int new)
{
    (*pMoney)+=new;
}

int main() {
    int money = 200;
    int *pMoney = &money;
    int newMoney = 120;

    addMoney(pMoney,newMoney);
    printf("%d",money);
    return 0;
}