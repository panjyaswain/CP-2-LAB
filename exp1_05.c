#include<stdio.h>
int main()
{ 
char str[200];
int i,words=1;
printf("enter a sentence");
gets(str);
for(i=0;str[i]!='\0';i++)
    {
	if (str[i] == ' ')
	words++;
	}
printf("total number of words:%d",words);
return 0;
}
