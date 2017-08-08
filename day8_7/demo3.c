#include<stdio.h>
void main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int n,m;
	for(n=0;n<3;n++)
	{
		for(m=0;m<4;m++)
		{
			printf("%d ",a[n][m]);
		}
	}
}
