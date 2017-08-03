#include<stdio.h>
int main() 
{
	int a,b,c=0;
	for(a=1;a<=100;a++)
	{
		if(a==1||a==2){
			printf("%d\n",a);
		}
	
		for(b=2;b<a;b++)
		{
			c=a%b;
			if(c==0)
			{ 
				break;				
			}
		}
		if(c!=0)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
