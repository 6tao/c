#include<stdio.h>
void main()
{
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		temp=a;//temp������Žϴ����a 
		a=b;   //��bԭ����ֵ����a 
		b=temp;//��temp�д洢�Ľϴ����a��ֵ����b 
	}          //���ʵ��a��b��ֵ�ĶԻ� 
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
