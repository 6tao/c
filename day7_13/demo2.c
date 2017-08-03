#include <stdio.h>
void main()
{
	int a,b,c,d;
	unsigned u;
	a=8;
	b=46;
	u=-98;
	c=a*b+u;
	d=a/u-b;
	printf("%d*%d+%d=%d\n  %d/%d-%d=%d",a,b,u,c,a,u,b,d);
	return 0;
}
