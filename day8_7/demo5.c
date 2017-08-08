#include<stdio.h>
void main()
{
	int a[2][3]={{1,2,3},{4,5,6}},b[3][2];
	int m,n,x,y;
	printf("%d\n",a[1][1]);
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			for(x=0;x<3;x++)
			{
				for(y=0;y<2;y++)
				{
					a[m][n]=b[x][y];
				}
			}
		}
	}
	printf("%d",b[2][1]);
	
}
