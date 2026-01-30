#include<stdio.h>
#include <string.h>
int main ()
{
char str[100];
char reversestr[100];
int length, i;
printf("enter a string");
gets(str);
length = strlen(str);
for (i=0; i<length/2; i++)
{
	char ch=str[length-1-i];
	str[length-1-i]=str[i];
	str[i]=ch;
}
printf("reverse string %s ",str);
return 0;
	
	
}

