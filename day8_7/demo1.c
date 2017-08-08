#include<stdio.h>
void main()
{
	int a[20]={1,1},n;
	for(n=2;n<20;n++)
	{
		a[0]=a[1]=1;
		a[n]=a[n-1]+a[n-2];
	}
	for(n=0;n<20;n++)
	{
		printf("%d ",a[n]);
	}
}
