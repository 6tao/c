#include <stdio.h>
int main(){
	float a,b,c,d;
	printf("输入a的值\n");
	scanf("%f",&a);
	printf("输入b的值\n");
	scanf("%f",&b);
	printf("输入c的值\n");
	scanf("%f",&c);
	d = a + b - c;
	printf("%.2f",d);
	return 0;
}
