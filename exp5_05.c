//How would you use a pointer to change the value of a variable of type long? Create a program to showcase this concept.//
#include<stdio.h>

int main()
{
    long a = 100;
    long *p;

    p = &a;
    *p = 500;

    printf("Value = %ld", a);

    return 0;
}
