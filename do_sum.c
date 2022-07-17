/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：while2.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,sum=0,cont=0;
	do{
		scanf("%d",&i);
		sum+=i;
		cont++;
	}while(i);
	printf("average=%f",(float)sum/(cont-1));
	return 0;
}
