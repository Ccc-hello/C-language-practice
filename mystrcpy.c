/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：mystrcpy.c
*   author：秦超
*   date：2022年07月13日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	char *p,*q;
	int i;
	char arr[128],brr[128]="asdfg";
	gets(arr);
	p=arr;
	q=brr;
	for(i=0;brr[i]!='\0';i++)
		*(p+i) = *(q+i);
	*(p+i)='\0';
	puts(p);
	

	return 0;
}
