/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：sqrt.c
*   author：秦超
*   date：2022年07月12日
*   describption：求一元二次方程的根
*
========================================================*/
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	float a,b,c;
	float x1,x2;
	printf("please input three numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c>0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%f\nx2=%f\n",x1,x2);
	}
	if(b*b-4*a*c==0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=x1;
		printf("x1=x2=%f\n",x1);
	}
	if(b*b-4*a*c<0)	
		printf("error\n");
	return 0;
}
