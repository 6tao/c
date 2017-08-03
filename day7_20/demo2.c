#include<stdio.h>
void main()
{
	int a,b=0;
	a=1;
	while(a<=100)
	{
		b+=a;
		a++;
	}
	printf("%d",b);
}
