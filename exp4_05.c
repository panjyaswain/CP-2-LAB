//How can you initialize an array of structures? Show an example//
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
};

int main() {

    struct Student s[3] = {
        {1, "payal"},
        {2, "radhika"},
        {3, "pranjya"}
    };

    int i;

    for(i = 0; i < 3; i++) {
        printf("Roll: %d  Name: %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
