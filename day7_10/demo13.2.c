#include <stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d ",&a,&b,&c);
	if(a<b){
		d=a;
		if(d<c){
			e=d; 
		}else{
			e=c; 
		}
	}else{
		d=b;
		if(d<c){
			e=d;
		}else{
			e=c;
		}
	}
	printf("%d",e);
	return 0;
}
	
