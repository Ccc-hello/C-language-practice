/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：arr1.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	float a[10],max,min,sum;
	int i;
	printf("please input 10 score: ");
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	for(i=0;i<10;i++)
	{
		sum+=a[i];
		if(a[i]<a[i+1])
			max=a[i+1];
		else
			min=a[i];
	}
	printf("max=%7.2f,min=%7.2f\n",max,min);
	printf("average=%7.2f\n",(sum-max-min)/8);

	return 0;
}
