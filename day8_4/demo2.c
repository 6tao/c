#include<stdio.h>
void main()
{
	long int F1,F2; 
	int i,n;
	printf("请输入Fibonacci数列的范围/个数\n");
	scanf("%d",&n);
	if(n>=0)
	{	
		printf("请输入Fibonacci数列的前两个数\n");
		scanf("%ld %ld",&F1,&F2);
		for(i=1,n=n/2;i<=n-1;i++)
		{
			F1=F1+F2;
			F2=F2+F1;	
			printf("%ld\n%ld\n",F1,F2);
		}
	}
	else
	{
		printf("错误");
	}
}
