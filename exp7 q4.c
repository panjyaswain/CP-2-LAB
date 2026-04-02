//function to count the number of vowels in a string using pointers. 
#include<stdio.h>
#include<string.h>
int vowel(char *s1);
void main()
{
	char s1[]="hello";
	printf("the no. of vowels in a string is %d",vowel(s1));
	
}
int vowel(char *s1)
{
	int i,c=0;
	char *p;
	p=s1;
	for(i=0;*(p+i)!=NULL;i++)
	{
		if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
		{
			c++;
		}
	}
	return c;
}
