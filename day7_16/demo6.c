#include<stdio.h>
void main()
{
		int a,b; 
		scanf("%d %d",&a,&b);
/*1*/	if(a!=b)				   //if��Ƕ��  �˾���4��� 
/*2*/	if(a>b)printf("%d>%d",a,b);//�˾���3���
/*3*/	else   printf("%d<%d",a,b);//�˾���2���
/*4*/	else   printf("%d=%d",a,b);//�˾���1���
} 
