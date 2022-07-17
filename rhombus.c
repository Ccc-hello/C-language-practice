/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：test5.c
 *   author：秦超
 *   date：2022年07月13日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j,k;
	for(i=0;i<8;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<8-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
