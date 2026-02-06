#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter a first string:");
gets (str1);
printf("enter a second string:");
gets (str2);
strcat(str1,str2);
printf("concantenated:%s",str1);
return 0;
}
