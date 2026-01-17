// pow of x to the power y
#include<stdio.h>
int power(int,int);
void main()
{
	int x,y,c;
	printf("enter x and y:");
	scanf("%d %d",&x,&y);
	c=power(x,y);
	printf("%d",c);
	system("pause");
}
int power(int n,int m)
{
	int pow=1,i;
	for(i=1;i<=m;i++)
	{
		pow=pow*n;
	}
	return pow;
}
