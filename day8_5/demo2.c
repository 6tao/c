#include<stdio.h>
void main()
{
	int a[10],i,max;
	printf("������10�����֣�\n");
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
	printf("�����Ϊ��\n%d",a[i]);
}
