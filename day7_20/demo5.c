#include<stdio.h>
void main()
{
	int a,b;
	for(a=1;a<7;a++)
	{
		for(b=6;b>=a;b--)
		{
			putchar('*');
		}
		printf("\n");
	}
}
