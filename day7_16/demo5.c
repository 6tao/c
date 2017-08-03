#include<stdio.h>
void main()
{
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		temp=a;//temp用来存放较大的数a 
		a=b;   //将b原来的值赋给a 
		b=temp;//将temp中存储的较大的数a的值赋给b 
	}          //最后实现a，b的值的对换 
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d %d %d",a,b,c);
}
