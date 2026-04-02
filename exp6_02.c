//Implement a function to find the largest element in an array using pointers.//
#include<stdio.h>
int largest(int *p, int n)
{
    int max = *p;
    int i;
    for(i=0;i<n;i++)
	{
        if(*(p+i) > max)
		{
            max = *(p+i);
		}
        
    }
    return max;
}

int main(){
    int a[5],i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++){
	 scanf("%d",&a[i]);
}
    printf("Largest = %d", largest(a,5));
    return 0;
}
