#include <stdio.h>
int main(){
	int a,i,g=0;
	scanf("%d",&a);
	if(a==1){
		printf("������");
	}
	for(i = 2;i<a;i++ ){
		g = a%i;
		if(g == 0){
			printf("��������");
			break;
		}
	}
	if(g!=0){
		printf("������\n");
	} 
	
	return 0;
}
