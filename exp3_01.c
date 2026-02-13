#include<stdio.h>
struct student
{
	char name[100];
	int rollno;
	int marks;
};
int main()
{
struct student s;
printf("enter name:");
scanf("%s",&s.name);
printf("enter rollno:");
scanf("%d",&s.rollno);
printf("enter marks:");
scanf("%d",&s.marks);

printf("\nstudent details:\n");
printf("name :%s\n",s.name);
printf("rollno :%d\n",s.rollno);
printf("mark :%d\n",s.marks);
return 0;
}
