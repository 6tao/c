#include<stdio.h>
void main()
{
		int a,b; 
		scanf("%d %d",&a,&b);
/*1*/	if(a!=b)				   //if的嵌套  此句与4配对 
/*2*/	if(a>b)printf("%d>%d",a,b);//此句与3配对
/*3*/	else   printf("%d<%d",a,b);//此句与2配对
/*4*/	else   printf("%d=%d",a,b);//此句与1配对
} 
