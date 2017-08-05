#include<stdio.h>
void main()
{
	int a,b,c;
	for(a=100;a<=200;a++)
	{
		for(b=2;b<a;b++)
		{
			c=a%b;
			if(c==0)
			{
				break;
			}
		}
		if(c!=0)
		{
			printf("%d\n",a);
		}
	}
} 
