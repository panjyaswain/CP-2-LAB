//Write a program to define a structure for a student containing fields for name,roll number, and marks. Input the details of 10 students and display the details of the student who has secured highest mark.//
#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[10];
    int i, max = 0;

    for(i = 0; i < 10; i++) {
        printf("Enter Name, Roll and Marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", s[max].name);
    printf("Roll: %d\n", s[max].roll);
    printf("Marks: %.2f\n", s[max].marks);

    return 0;
}
