#include <stdio.h>
#include <string.h>

int main()
{
    char name [50] = "";

    printf("Whats your name? ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    if (strlen(name) == 0)
    {
        printf("you have not provided your name");
    }
    else
    {
        printf("Hello, %s", name);
    }
}