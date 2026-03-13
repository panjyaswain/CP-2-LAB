//Create a program where a pointer to a pointer (e.g., **p) is used to access and modify a variable of type short.//
#include<stdio.h>

int main()
{
    short a = 5;
    short *p;
    short **pp;

    p = &a;
    pp = &p;

    **pp = 15;

    printf("Value = %d", a);

    return 0;
}
