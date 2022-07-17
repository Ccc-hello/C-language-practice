/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：for1.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,average,sum=0,cont;
	for(cont =0;;cont++)
	{	
		scanf("%d",&i);
		if(i==0)break;
		sum+=i;
	}
	printf("%f",(float)(average=sum/(cont)));
	return 0;
}
