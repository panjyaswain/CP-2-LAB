#include<stdio.h>
#include<string.h>
void main()
{
	char s[]= "apple";
	char b[100];
	strcpy(b,s);
    if(strcmp(b,strrev(s))==0)
    {
    	printf("the string is pallindrome");
    }
    else
    {
    	printf("its not a pallindrome");
    }
}
