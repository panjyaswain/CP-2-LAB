#include<stdio.h>
#include<string.h>
void main()
{
	char s1[]="hello";
	char s2[]="abc";
	char r=strstr(s1,s2);
	if(r!=0)
	{
		printf("substring exist");
	}
	else
	printf("no substring present");
}
