/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：findmax.c
 *   author：秦超
 *   date：2022年07月18日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>
void findmax(int a[3][5],int (*p)[5])
{
	int i=0,j=0,max;	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(p[i]+j)>max)
				max=*(p[i]+j);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max==*(p[i]+j))
				printf("i=%d,j=%d\n",i,j);
		}
	
	}
	printf("%d\n",max);
}
int main(int argc, char *argv[])
{
	int a[3][5];
	int (*p)[5]=a;
	findmax(a,p);

	return 0;
}
