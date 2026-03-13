//Write a program that passes an integer variable by reference to a function using a pointer. Modify the value in the function and print it in the main program.//
#include<stdio.h>

void change(int *x)
{
    *x = 50;
}

int main()
{
    int a = 10;

    change(&a);

    printf("Value = %d", a);

    return 0;
}
