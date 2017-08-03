#include<stdio.h>
int main(){
	int a,b,c=0;
	scanf("%d",&a);
	if(a==1){
		printf("是素数"); 
	} 
	for(b=2;b<a;b++){
	    c=a%b;
		if(c==0){
		   printf("不是素数");
		   break;
		}
	}
	if(c!=0){
	    printf("是素数"); 
	}
	return 0;
}
