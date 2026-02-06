#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter a first string:");
gets (str1);
printf("enter a second string:");
gets (str2);
if(strcmp(str1,str2)==0)
   printf("string are equal");
else
   printf("string are not equal");
return 0;
}
