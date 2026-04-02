// function to count the number of words in a string using pointers. 
#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="welcome to silicom university";
	char *p;
	int i,c=0;
	p=s;
	if(*(p+0)!=32&&*(p+0)!=NULL)
	{
		c++;
	}
	for(i=0;*(p+i)!=NULL;i++)
	{
		if(*(p+i)==32)
		{
			c++;
		}
	}
	printf("words:%d",c);
}
