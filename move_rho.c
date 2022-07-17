/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：test6.c
 *   author：秦超
 *   date：2022年07月13日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	for(k=0;k<80;k++)
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10-1-i+k;j++)
				printf(" ");
			for(j=0;j<2*i+1;j++)
				printf("*");
			printf("\n");
		}
		for(i=8;i>=0;i--)
		{
			for(j=0;j<=10-1-i+k;j++)
				printf(" ");
			for(j=0;j<2*i+1;j++)
				printf("*");
			printf("\n");
		}
		if(y==79)
			y=-1;
		usleep(150000);
		system("clear");
	}
	return 0;
}
