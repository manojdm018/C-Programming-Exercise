#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    char anime[50];
    char name[50];
    int age;
    int kids;
    bool isMarried;
} superheroes;

void printstmt(superheroes hero[], int size);
int main()
{

    superheroes hero1[] = {{"One Peice", "Luffy", 19, 0, false},
                           {"Naruto", "Naruto", 35, 2, true},
                           {"Bleach", "Ichigo", 20, 0, false}};
    int size = sizeof(hero1) / sizeof(hero1[0]);
    printstmt(hero1, size);
    return 0;
}

void printstmt(superheroes hero[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Anime : %s\n", hero[i].anime);
        printf("Hero : %s\n", hero[i].name);
        printf("Age : %d\n", hero[i].age);
        printf("No. of Kids : %d\n", hero[i].kids);
        printf("Is he married?? : %s\n", (hero[i].isMarried) ? "Yes" : "NO");
        printf("\n");
    }
}