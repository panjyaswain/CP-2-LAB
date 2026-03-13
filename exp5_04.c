//Write a program demonstrating pointer arithmetic with a double array. Show how to iterate through the array using a pointer.//
#include<stdio.h>

int main()
{
    double arr[3] = {1.1,2.2,3.3};
    double *p;
    int i;

    p = arr;

    for(i=0;i<3;i++)
    {
        printf("%lf\n", *(p+i));
    }

    return 0;
}
