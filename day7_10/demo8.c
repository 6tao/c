#include <stdio.h>
int main(){
	float a,b,c,d,e;
	printf("输入a\n");
	scanf ("%f",&a);
	printf("输入b\n");
	scanf ("%f",&b);
	printf("输入c\n");
	scanf ("%f",&c);
	printf("输入d\n");
	scanf ("%f",&d);
	e=(a*b+c)/d;
	printf("%.2f",e);
	return 0;
}
