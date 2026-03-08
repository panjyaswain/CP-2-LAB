//Write a program to define a structure for a car (make, model, and year) and use nested structures to include the owner's details//
#include <stdio.h>

struct Owner {
    char name[30];
    char city[30];
};

struct Car {
    char make[20];
    char model[20];
    int year;
    struct Owner owner;
};

int main() {
    struct Car c1;

    printf("Enter Car Make: ");
    scanf("%s", c1.make);

    printf("Enter Car Model: ");
    scanf("%s", c1.model);

    printf("Enter Manufacturing Year: ");
    scanf("%d", &c1.year);

    printf("Enter Owner Name: ");
    scanf("%s", c1.owner.name);

    printf("Enter Owner City: ");
    scanf("%s", c1.owner.city);

    printf("\nCar Details:\n");
    printf("Make: %s\n", c1.make);
    printf("Model: %s\n", c1.model);
    printf("Year: %d\n", c1.year);

    printf("\nOwner Details:\n");
    printf("Name: %s\n", c1.owner.name);
    printf("City: %s\n", c1.owner.city);

    return 0;
}
