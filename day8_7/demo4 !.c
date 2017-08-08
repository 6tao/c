#include<stdio.h>
void main()
{
	int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}},v[3];
	int sub,stu,sum,average;
	for(sub=0;sub<3;sub++)
	{
		for(stu=0;stu<5;stu++)
		{
			sum+=a[stu][sub];
		}
		v[sub]=sum/5;
		sum=0;
	}
	average=(v[0]+v[1]+v[2])/3;
	printf("Math= %d\nC language= %d\nFoxpro= %d\n",v[0],v[1],v[2]);
	printf("Total average= %d",average);
}
