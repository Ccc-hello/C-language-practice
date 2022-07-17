/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：test4.c
*   author：秦超
*   date：2022年07月13日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,k;
	for(i=3;i<=300;i++)
	{
		for(int j=2;j<i;j++)
		{
			k=0;
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
			printf("%4d",i);
	}
	return 0;
}
