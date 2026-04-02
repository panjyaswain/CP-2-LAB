//Write a program to find the frequency of a given element in an array using pointers.//
#include<stdio.h>

int main()
 {
    int a[5], i, x, count = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
	 {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &x);
    for(i = 0; i < 5; i++) 
	{
        if(*(a + i) == x)
		 {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}
