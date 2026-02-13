#include<stdio.h>
struct date
{
int day,month,year;
};
int main()
{
	struct date d;
	printf("enter day,month,year");
	scanf("%d %d %d",&d.day,&d.month,&d.year);
	printf("day:%d/%d/%d", d.day,d.month,d.year);
	return 0;
}
