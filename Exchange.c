/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：Exchange.c
*   author：秦超
*   date：2022年07月09日
*   describption：
*
========================================================*/
#include<stdio.h>
void Swap(int *p1,int *p2);
int main(int argc, char *argv[])
{
	printf("please input two numbers: ");
	int a,b;
	scanf("%d %d",&a,&b);
	Swap(&a,&b);
	printf("%3d%3d\n",a,b);
	return 0;
}
void Swap(int *p1,int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
