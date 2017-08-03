#include<stdio.h>
void main()
{
	double a,b;
	char c;
	scanf("%lf%c%lf",&a,&c,&b);
	switch(c)
	{
		case'+':printf("%lf",a+b);
				break;
		case'-':printf("%lf",a-b);
				break;
		case'*':printf("%lf",a*b);
				break;
		case'/':printf("%lf",a/b);
				break;
		default:printf("´íÎó£¡");
				break; 
	}
}
