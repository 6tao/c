#include<stdio.h>
int main(){
	int a,b,c=0;
	scanf("%d",&a);
	if(a==1){
		printf("������"); 
	} 
	for(b=2;b<a;b++){
	    c=a%b;
		if(c==0){
		   printf("��������");
		   break;
		}
	}
	if(c!=0){
	    printf("������"); 
	}
	return 0;
}
