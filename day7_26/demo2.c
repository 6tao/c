#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			for(c=1;c<=4;c++)
			{
				if(a!=b&&a!=c&&b!=c)
				{
					printf("%d%d%d\n",a,b,c);
				}
			}
		}
	}
}
