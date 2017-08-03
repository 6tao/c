#include<math.h>
void main()
{
	double a,b,c,disc,x1,x2,p,q,M;
	scanf("%lf %lf %lf",&a,&b,&c);
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/2*a;
	x1=p+q;
	x2=p-q;
	if(disc>=0)//修改 
	{
		printf("x1=%5.2lf\nx2=%5.2f\n",x1,x2);
	}else
	{
		printf("此方程无实数解"); 
	}
}
