//Write a program to input an array of integers and print them using pointers.//
#include<stdio.h>
int main() 
{
    int a[5], *p,i;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

}
    p = a;
    printf("Array elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d \n", *(p+i));
}
    return 0;
}
