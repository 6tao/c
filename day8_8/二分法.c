#define M 10
#include <stdio.h>
void main()
{
	int a[M]={-9,5,23,46,85,98,105,118,121,130};
	int n,low,mid,high,found;
	low=0;
	high=M-1;
	found=0;
	printf("Input a number to be searched:\n");
	scanf("%d",&n);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(n==a[mid])
		{
			found=1;
			break;
		}
		if(n>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(found==1)
	{
		printf("Yes!The number is %d.",n);
	}
	else
	{
		printf("Sorry!There isn't %d.",n);
	}
}
