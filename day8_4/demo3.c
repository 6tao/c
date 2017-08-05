#include<stdio.h> 
void main()
{
	int m,n,c;
	printf("请输入一个数\n");
	scanf("%d",&m);
	if(m>0)
	{
		for(n=2;n<m;n++){
		    c=m%n;
			if(c==0){
			   printf("不是素数");
			   break;
			}
		}
		if(c!=0){
		    printf("是素数"); 
		}
	}
	else
	{
		printf("错误"); 
	}
} 
