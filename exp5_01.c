#include<stdio.h>
int main()
{
	int a =10;
	int*p;
	p=&a;
	*p=25;
	printf("value of a=%d",a);
	return 0;

}
