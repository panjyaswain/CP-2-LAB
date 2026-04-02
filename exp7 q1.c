// to calculate the length of a string using pointers. 
#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="hello world";
	char *p;
	int c=0,i;
	p=s;
	for(i=0;*(p+i)!=NULL;i++)
	{
		c++;
	}
	printf("length of the string is %d",c);
}
