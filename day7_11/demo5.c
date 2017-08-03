#include<stdio.h>
int main(){
	int a,b,c;
	for(a=1;a<=100;a++){
		if(a==1){
			printf("%d",a);
		}
		for(b=2;b<a;b++){
			if(a%b==0){
				printf("²»ÊÇËØÊý"); 
			}
		}
	}
	c=a%b;
	if(c!=0){
		printf("%d",a);
	}
	return 0;
}
