#include <stdio.h>
#include <string.h>

struct students
{
    char names[20];
    int age;
    int min_score;
};

int main()
{
    struct students students1;
    struct students students2;
    struct students students3;

    students1.age = 20;
    students2.age = 19;
    students3.age = 29;

    strcpy(students2.names, "Shem Murimi");
    students2.min_score = 80;

    printf("%s of age ", students2.names);
    printf("%d with a minimum score of ", students2.age);
    printf("%d.", students2.min_score);
    return 0;
}