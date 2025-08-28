#include <stdio.h>
#include <string.h>

int main (void)
{
    char name [50] = "";
    char friends [50] = "";
    char enemy [50]= "";
    char enemy1 [50]= "";

    printf("whats your name? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("whats your freinds name? ");
    fgets(friends, sizeof(friends), stdin);
    friends[strlen(friends) - 1] = '\n';

    printf("Whats your enimes name? ");
    fgets(enemy, sizeof(enemy), stdin);
    enemy[strlen(enemy) - 1] = '\0';

    printf("Whats your second enimes name? ");
    fgets(enemy1,sizeof(enemy1),stdin);
    enemy1[strlen(enemy1) - 1] = '\0';

    printf("Your name is %s\n", name);
    printf("Your Friends name is %s\n", friends);
    printf("Your enemys name is %s\n", enemy);
    printf("Your second enemies name is %s\n", enemy1);

}