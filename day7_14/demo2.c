#include <stdio.h>
void main()
{
	int a=5,b=5,p,q;
	p=(a++)+(a++)+(a++);
	q=(++b)+(++b)+(++b);
	printf("%d\n%d\n%d\n%d",p,q,a,b);
}
