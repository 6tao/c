#include<stdio.h>
void main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],m,n;
	printf("%d\n",a[0][0]);
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			b[n][m]=a[m][n];
		}
	}
	printf("a[0][2]=%d\nb[2][0]=%d",a[0][2],b[2][0]);
}
