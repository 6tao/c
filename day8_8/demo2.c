#include<stdio.h>
void main()
{
	int a[3][4]={65,4,6,9,16,8,241,9,95,9,16,569};
	int max,m,n,x,y;
	max=a[0][0];
	for(m=0;m<3;m++)
	{
		for(n=0;n<4;n++)
		{
			if(a[m][n]>max)
			{
				max=a[m][n];
				x=m;
				y=n;
			}
		}
	}
	printf("最大:%d\n行数:%d\n列数:%d",max,x,y);
}
