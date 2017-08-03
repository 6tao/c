#include<stdio.h>
void main()
{
	int a=15;
	float b=123.456789;
	double c=12345678.1234567;
	char d='p';
	printf("a=%d\n%5d\n%o\n%x\n",a,a,a,a);
	printf("b=%f\n%lf\n%5.4lf\n%e\n",b,b,b,b);
	printf("c=%lf\n%f\n%8.4lf\n",c,c,c);
	printf("d=%c\n%8c\n",d,d);
	printf("12345678");
}
