#include<stdio.h>
void main()
{
	char c;
	c=getchar();
	if(c<32)
	{
		printf("This is a control character");	
	}else if(c>='0'&&c<='9')
	{
		printf("This is a digit");
	}else if(c>='A'&&c<='Z')
	{
		printf("This is a capital letter");
	}else if(c>='a'&&c<='z')
	{
		printf("This is a small letter");
	}else
	{
		printf("This is an other character");
	}
}
