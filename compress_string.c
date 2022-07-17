/*=======================================================
 *   Copyright (C) 2022 秦超 All rights reserved.
 *   
 *   filename：pointer2.c
 *   author：秦超
 *   date：2022年07月15日
 *   describption：
 *
 ========================================================*/
#include<stdio.h>
void cal(char *p,char *q)
{
	int count=1,i=0,a,b;
	do
	{	if(*p==*(p+1))
			count++;
		else
		{
			if(count==1)
				*q++=*p;
			else if(count<10)
			{
				*q++=*p;
				*q++=count+48;
			}
			else
			{
				b=count%10;
				a=(count-b)/10;
				*q++=*p;
				*q++=a+48;
				*q++=b+48;
			}
			count=1;
		}
	}while(*p++);
}
int main(int argc, char *argv[])
{
	char a[128]="0",b[128]="0";
	char *p=a;
	char *q=b;
	printf("please input a string: ");
	gets(a);
	cal(p,q);
	puts(b);
	return 0;
}
