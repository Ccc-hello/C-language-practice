/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：test2.c
 *   author：秦超
 *   date：2022年07月13日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>
void Compare(float *p1,float *p2,float *p3)
{
	if(*p1 != *p2 && *p2 != *p3 && *p1!=*p3)
	{
		if(*p2<*p1 && *p1>*p3)
		{
			if(*p2>*p3)
				printf("%f>%f>%f",*p1,*p2,*p3);
			else
				printf("%f>%f>%f",*p1>*p3>*p2);
		}
		if(*p2>*p1 && *p2>*p3)
		{
			if(*p1>*p3)
				printf("%f>%f>%f",*p2,*p1,*p3);
			else
				printf("%f>%f>%f",*p2,*p3,*p1);
		}
		if(*p3>*p1 && *p3>*p2)
		{
			if(*p1>*p2)
				printf("%f>%f>%f",*p3,*p1,*p2);
			else
				printf("%f>%f>%f",*p3,*p2,*p1);
		}
	}
	if(*p1==*p2 && *p2!=*p3)
	{
		if(*p2>*p3)
			printf("%f=%f>%f",*p1,*p2,*p3);
		else
			printf("%f>%f=%f",*p3,*p2,*p1);
	}
	if(*p2 ==*p3 && *p2!=*p1)
	{
		if(*p1>*p2)
			printf("%f>%f=%f",*p1,*p2,*p3);
		else
			printf("%f=%f>%f",*p3,*p2,*p1);
	}
	if(*p1==*p3 && *p2!=*p1)
	{
		if(*p2>*p3)
			printf("%f>%f=%f",*p2,*p1,*p3);
		else
			printf("%f=%f>%f",*p1,*p2,*p3);
	}

	if(*p1==*p2 && *p2==*p3 && *p1==*p3)
		printf("%f=%f=%f",*p1,*p2,*p3);
}

int main(int argc, char *argv[])
{
	float a,b,c;
	printf("please input three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	Compare(&a,&b,&c);
	return 0;
}
