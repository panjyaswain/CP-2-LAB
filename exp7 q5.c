//a function to convert all lowercase characters in a string to uppercase using pointers.
#include<stdio.h>
#include<string.h>
char uppercase(char *st);
void main()
{
	char st[]="silicon university";
	printf("actual string:%s\n",st);
	uppercase(st);
	printf("new uppercase string:%s",st);
}
char uppercase(char *st)
{
	char *p=st;
	while(*st!=NULL)
	{
		if(*st>='a'&& *st<='z')
		{
			*st=*st-32;
		}
		*st++;
	}
}
