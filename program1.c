
#include<stdio.h>
void display (int a[],int size);
int main ()
{
	int b[] = {2,4,7,8};
	display(b,4);


}
void display (int a[],int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
			

