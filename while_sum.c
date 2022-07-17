/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：while1.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,sum=0,cont=0;
	while(1)
	{
		scanf("%d",&i);
		if(i==0)
			break;
		else
		{
			sum+=i;
			cont++;
		}
	}
	printf("the average=%f\n",(float)sum/cont);
	return 0;
}
