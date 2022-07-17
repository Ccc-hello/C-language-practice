/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：del.c
*   author：秦超
*   date：2022年07月10日
*   describption：
*
========================================================*/
#include<stdio.h>
void Del(char a,char *p);
int main(int argc, char *argv[])
{
	char a;
	char s[100]="hello world hello chendgu welcome";
	printf("please input what char are you want deliete: ");
	a=getchar();
	Del(a,s);
	puts(s);
	return 0;
}
void Del(char a,char *p)
{
	char *q=p;
	while(*p != '\0')
	{
		if(*p!=a)
		{
			*q++ = *p;
		}
		p++;
	}
	*q='\0';
}
