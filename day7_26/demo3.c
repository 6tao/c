#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	for( ; ; )
	{
		a=getch();
		if(a==27)
			break;
		if(a==13)
			continue;
		putch(a);
	}
	getch();
}
