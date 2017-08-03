#include<stdio.h>
void main()
{
	int a;
	for(a=100;a<=200;a++)
	{
		if(a%3==0)
		{
			continue;
		}
		printf("%d\n",a);
	}
}
