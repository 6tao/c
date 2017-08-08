#include <stdio.h>
void main()
{
	int a[3][3],m,n;
	printf("Please input 9 numbers:\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("a[%d][%d]=",m,n);
			scanf("%d",&a[m][n]);
		}
	}
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			if(m==1||n==1)
			{
				printf("%-6d",a[m][n]);
			}
			else
			{
				printf("%-6c",' ');
			}
		}
		printf("\n");
	}
}
