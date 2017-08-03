#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	c=(c>='A'&&c<='Z')?(c+32):c;//先运算 (c>='A'&&c<='Z')然后运算 (c+32)，最后将二者的结果放到？：中运算 
	printf("%c",c);
}
