#include<stdio.h>
void printaddress( int a[],int size);
int main ()
{
	int arr[4]={10,20,30,40};
	printaddress(arr,4);
}
void printaddress(int a[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("element=%d\t address=%d\n", a[i],&a[i]);
}
}
