#include<stdio.h> 
void main()
{
	int m,n,c;
	printf("������һ����\n");
	scanf("%d",&m);
	if(m>0)
	{
		for(n=2;n<m;n++){
		    c=m%n;
			if(c==0){
			   printf("��������");
			   break;
			}
		}
		if(c!=0){
		    printf("������"); 
		}
	}
	else
	{
		printf("����"); 
	}
} 
