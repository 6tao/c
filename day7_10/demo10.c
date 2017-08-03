#include <stdio.h>
int main(){
	float a ,b ,c;
	scanf("%f %f",&a,&b);
	if(a>b){
		printf("11\n");
		c = a;
	}else{
		printf("12\n");
		c = b;
	}
	printf("%f",c);
}
