#include<stdio.h>
void main()
{
	int a,b,max;
	scanf("%d %d",&a,&b);
	max=a;
	if(max<b)
	{
		max=b;
	}
	printf("%d",max);
}
