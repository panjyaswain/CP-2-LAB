#include<stdio.h>
typedef struct
{
	int id;
	char name[50];
}
student;
int main()
{
	student s={1,"pranjya"};
	printf("id=%d,name=%s",s.id,s.name);
	return 0;
}
