#include<stdio.h>
void main()
{
	int score;
	scanf("%d",&score);
	if(score<60)
	{
		printf("E");
	}else if(60<=score<=70)//Ò²¿ÉÐ´Îª  ((score>60||score==60)&&score<70)
	{
		printf("D");
	}else if(70<=score<=80)
	{
		printf("C");
	}else if(80<=score<=90)
	{
		printf("B");
	}else if(score>=90)
	{
		printf("A");
	}
}
