#include <stdio.h>
int main(){
	float a,b,c,d;
	printf("����a��ֵ\n");
	scanf("%f",&a);
	printf("����b��ֵ\n");
	scanf("%f",&b);
	printf("����c��ֵ\n");
	scanf("%f",&c);
	d = a + b - c;
	printf("%.2f",d);
	return 0;
}
