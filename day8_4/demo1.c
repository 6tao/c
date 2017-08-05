#include<stdio.h>
void main()
{
	int i,F1,F2;
	F1=1;F2=1;
	for(i=1;i<=20;i++)
	{
		F1=F1+F2;
		F2=F2+F1;	
		printf("%d\n%d\n",F1,F2);
	}
}
