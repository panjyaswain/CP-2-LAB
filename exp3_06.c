//Demonstrate: How to use typedef with structures to simplify code readability?//
#include <stdio.h>

typedef struct {
    int id;
    char name[20];
} Student;

int main() 
{
    Student s1;

    s1.id = 1;
    printf("ID: %d", s1.id);

    return 0;
}

