#include<stdio.h>
 int main ()
 {
 	char ch;
 	char *p;
 	p=&ch;
 	printf("enter a character:");
 	scanf("%c",p);
 	printf("character=%c",*p);
 	return 0;
 }
