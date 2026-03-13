//Write a program to create a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable.//
#include<stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;
    *p = 20;

    printf("Value of a = %d", a);

    return 0;
}
