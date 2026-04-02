//Write a program to rotate the elements of an array to the left by one position using pointers.//
#include<stdio.h>

int main()
 {
    int a[5], i, temp;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
	 {
        scanf("%d", &a[i]);
    }

   
    temp = *a;

    for(i = 0; i < 4; i++) 
	{
        *(a + i) = *(a + i + 1);
    }

    *(a + 4) = temp;

    printf("After left rotation:\n");
    for(i = 0; i < 5; i++)
	 {
        printf("%d ", a[i]);
    }

    return 0;
}
