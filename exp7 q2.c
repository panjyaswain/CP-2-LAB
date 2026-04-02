//to copy one string to another using pointer.
#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="abc";
	char s2[100];
	char *p,*q;
	int i;
	p=s;
	q=s2;
	for(i=0;*(p+i)!=NULL;i++)
	{
		*(q+i)=*(p+i);
	}
	*(q+i)=NULL;
	printf("the string s2 is %s",s2);
}
