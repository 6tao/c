#include<stdio.h>
void main()
{
	double f,p,w,s,d,c;
	p=7;
	printf("请输入路程/公里\n"); 
	scanf("%lf",&s);
	printf("请输入重量/吨\n");
	scanf("%lf",&w);
	if(s<250)
	{
		c=1;
	}
	if(250<=s<500)
	{
		c=2;
	}
	if(500<=s<1000)
	{
		c=3;
	}
	if(1000<=s<2000)
	{
		c=4;
	}
	if(2000<=s<3000)
	{
		c=5;
	}
	if(3000<=s)
	{
		c=6;
	}
	switch('c')
	{
		case 1:d=0;
		case 2:d=0.02;
		case 3:d=0.05;
		case 4:d=0.08;
		case 5:d=0.10;
		case 6:d=0.15;
	}
	f=p*w*s*(1-d);
 	printf("f=%lf",f);
	
}
