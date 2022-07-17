/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：arr2.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("old\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	printf("new\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%3d",a[j][i]);
		printf("\n");
	}
	return 0;
}
