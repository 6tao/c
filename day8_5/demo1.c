#include<stdio.h>
void main()
{
	int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	/*for(i=0;i<=9;i++)
	{
		a[i]=i;
	}*/
	for(i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
