#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	c=(c>='A'&&c<='Z')?(c+32):c;//������ (c>='A'&&c<='Z')Ȼ������ (c+32)����󽫶��ߵĽ���ŵ����������� 
	printf("%c",c);
}
