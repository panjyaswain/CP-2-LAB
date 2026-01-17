//function to multiply a scalar to an array
#include<stdio.h>
int scalar(int[],int,int);
main()
{
     int a[]={1,2,3,4,5};
     scalar(a,5,2);
     system("pause");
}
int scalar(int b[],int size,int scalar)
{
    int i;
    for(i=0;i<size;i++)
    b[i]=b[i]*scalar;
    printf("%d\n",b[i]);
}

     
