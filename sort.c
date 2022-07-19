/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：sort.c
 *   author：秦超
 *   date：2022年07月18日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>
#include<time.h>

void sort(int a[5][5],int (*p)[5]);
int main(int argc, char *argv[])
{
	int a[5][5];
	int i,j;
	int (*p)[5]=a;
	srand(time(NULL));
	printf("-------the old-------\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=rand()%1000;
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}

	sort(a,p);
	printf("-------the new--------\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	return 0;
}

void sort(int a[5][5],int (*p)[5])
{
	int i=0,j=0,temp;
	for(int k=0;k<5;k++)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4-i;j++)
			{
				if((*p)[j]<(*p)[j+1])
				{
					temp=(*p)[j];
					(*p)[j]=(*p)[j+1];
					(*p)[j+1]=temp;
				}
			}
		}
		p++;
	}
}
