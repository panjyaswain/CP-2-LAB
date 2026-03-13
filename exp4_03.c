//Write a C program that uses an enumeration to implement a menu-driven application.//
  #include <stdio.h>

enum menu {ADD=1, SUB, EXIT};

int main() {
    int a, b, choice;

    printf("1. Add\n2. Subtract\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == ADD) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum = %d", a + b);
    }
    else if(choice == SUB) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Difference = %d", a - b);
    }
    else if(choice == EXIT) {
        printf("Exit");
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}
