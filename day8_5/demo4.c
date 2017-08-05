#include<stdio.h>
void main()
{
	int a[10],i,m,n=10,x,y;
	printf("请输入10个数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(m=1;m<=10;m++)
	{
		for(i=0;i<10-m;i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i],a[i]=a[i+1],a[i+1]=x;
			}
		}
	}
	printf("从小到大为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
