#include<stdio.h>
int minarray(int a[],int size);
int main()

{
	int b[]={2,3,5,6};
	int min;
	min= minarray(b,4);
	printf("smallest element is: %d",min);
}
int minarray (int a [],int size)
{
	int min,i;
	min =a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
