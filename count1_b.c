/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：while3.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i=0,count=0;
	printf("please input a number: ");
	scanf("%d",&i);
	while(1)
	{
		if(i%2)
			count++;
		i/=2;
		if(i==0)break;
	}
	printf("%d\n",count);
	return 0;
}
