//Create a nested structure to store a student’s details (name, roll number, and address where address is another structure)//
#include <stdio.h>

struct Address {
    char city[30];
    char state[30];
};

struct Student {
    char name[30];
    int roll;
    struct Address addr;
};

int main() {
    struct Student s1;

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter City: ");
    scanf("%s", s1.addr.city);

    printf("Enter State: ");
    scanf("%s", s1.addr.state);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);

    return 0;
}
