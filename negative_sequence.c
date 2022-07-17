/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：pointer1.c
*   author：秦超
*   date：2022年07月15日
*   describption：
*
========================================================*/
#include<stdio.h>
#include<string.h>
void back(char *p,char *q,int a)
{
	q=p+a-1;
	for(int i=0;i<a;i++)
		printf("%c",*q--);
	printf("\n");
}
int main(int argc, char *argv[])
{
	char a[128]="0";
	char *p=a;
	char *q=0;
	int i;
	printf("pleasae input a string: ");
	gets(a);
	i=strlen(a);
	back(p,q,i);
	return 0;
}
