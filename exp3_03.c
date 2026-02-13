#include<stdio.h>
struct complex
{
int real,image;
};
int main()
{
	struct complex c1,c2,sum;
	printf("enter the first complex number");
	scanf("%d%d",&c1.real,&c1.image);
	printf("enter the second complex number");
	scanf("%d%d",&c2.real,&c2.image);
	sum.real=c1.real+c2.real;
	sum.image=c1.image+c2.image;
	printf("sum=%d=%di",sum.real,sum.image);
	return 0;
}
