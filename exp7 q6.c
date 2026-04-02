// to find the frequency of a given character in a string using pointers. 
#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="misellaneous";
	int i,c=0;
	char *p,a;
	p=s;
	printf("enter the character to search:");
	scanf("%c",&a);
	for(i=0;*(p+i)!=NULL;i++)
	{
		if(*(p+i)==a)
		{
			c++;
		}
	}
	printf("the frequency of %c is %d",a,c);
}
