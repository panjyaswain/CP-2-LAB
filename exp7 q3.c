//a function to compare two strings using pointers. 
#include<stdio.h>
#include<string.h>
int compare(char *s1,char *s2);
void main()
{
	char s1[]="abc";
	char s2[]="abc";
	int c=compare(s1,s2);
	if(c==0)
	printf("string matched");
	else
	printf("string did not matched");
	
}
int compare(char *s1,char *s2)
{
	char *p,*q;
	p=s1;
	q=s2;
	int i,j;
	for(i=0;*(p+i)!=0 || *(q+i)!=0;i++)
	{
		if(*(p+i)!=*(q+i))
		{
			return -1;
		}
	}
	if(p==NULL && q==NULL)
	{
		return 0;
	}
}
