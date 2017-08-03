#include<stdio.h>
void main()
{
	char c='k';
	int i=1,j=2,k=3;
	float x=3e+5,y=0.85;
	printf("%d\n%d\n",!x*!y,!!!x);
	printf("%d\n%d\n",x||i&&j-3,i<j&&x<y);
	printf("%d\n%d\n",i==5&&c&&(j=8),x+y||i+j+k);
}
