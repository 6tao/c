#include<stdio.h>
void main()
{
	int a[10],n,i,max;
	printf("input 10 numbers:\n");
	for(n=0;n<10;n++)
	{
		scanf("%d",&a[n]);
	}
	for(i=0;i<9;i++)
	{
		for(n=0;n<9-i;n++)
		{
			if(a[n]>a[n+1])
			{
				max=a[n];
				a[n]=a[n+1];
				a[n+1]=max;
			}
		}
	}
	for(n=0;n<10;n++)
	{
		printf("%d ",a[n]);
	}
}
