#include<stdio.h>
void main()
{
	int a[10],i,max;
	printf("请输入10个数字：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}	
	}
	printf("最大数为：\n%d",a[i]);
}
