#include<stdio.h>
void main()
{
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		max=a;
		min=b;
	}else
	{
		max=b;
		min=a;
	}
	if(max<c)
	{
		max=c;
	}else
	{
		min=c;
	}
	printf("max=%d\nmin=%d",max,min);
}
