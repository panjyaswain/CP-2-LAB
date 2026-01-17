#include <stdio.h>
int greatest(int,int,int);
void main()
{
	int x,y,z,a;
	printf("enter x,y,z");
	scanf("%d %d %d",&x,&y,&z);
	a=greatest(x,y,z);
	printf("%d is greater",a);
	system("pause");
}
int greatest(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
			return x;
		else
		    return z;
	}
	else
	{
		if(y>z)
			return y;
		else
			return z;
	}
		
}
