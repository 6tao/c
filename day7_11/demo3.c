#include <stdio.h>
int main(){
	int a,i,g=0;
	scanf("%d",&a);
	if(a==1){
		printf("是素数");
	}
	for(i = 2;i<a;i++ ){
		g = a%i;
		if(g == 0){
			printf("不是素数");
			break;
		}
	}
	if(g!=0){
		printf("是素数\n");
	} 
	
	return 0;
}
