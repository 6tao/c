#include<stdio.h>
void main()
{
	int a,b=0;
	a=1;
	c: if(a<=100){
		b+=a;
		a++;
		goto c;
	}
	printf("%d",b);
}
