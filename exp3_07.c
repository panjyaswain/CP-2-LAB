//Write a program to store details of multiple employees and count the number of employees in a specific department using nested structures//
#include <stdio.h>
#include <string.h>

struct Department {
    int dept_id;
    char dept_name[20];
};

struct Employee {
    int id;
    char name[30];
    struct Department dept;
};

int main() 
{
    int n, i, count = 0;
    char search_dept[20];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Department ID: ");
        scanf("%d", &emp[i].dept.dept_id);

        printf("Enter Department Name: ");
        scanf("%s", emp[i].dept.dept_name);
    }

    printf("\nEnter department name to count employees: ");
    scanf("%s", search_dept);

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].dept.dept_name, search_dept) == 0) {
            count++;
        }
    }

    printf("\nNumber of employees in %s department: %d", search_dept, count);

    return 0;
}
