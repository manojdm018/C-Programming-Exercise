#include <stdio.h>
#include <stdbool.h>

struct studentDetails {
    char name[50];
    int rollno;
    char section;
    int age;
    bool isStudent;
};

int main() {
    
    struct studentDetails student1 = {"Manoj",118,'B',20,true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.rollno);
    printf("%c\n", student1.section);
    printf("%d\n", student1.age);
    printf("%d\n", student1.isStudent);

    struct studentDetails student2 ={"rakesh",117,'b',18,false};
    printf("%s\n", student2.name);
    printf("%d\n", student2.rollno);
    printf("%c\n", student2.section);
    printf("%d\n", student2.age);
    printf("%d\n", student2.isStudent);


    return 0;
}