/*================================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   文件名称：p_arr1.c
*   创 建 者：秦超
*   创建日期：2022年07月07日
*   描    述：
*
================================================================*/
#include<stdio.h>
#include<string.h>
int main()
{
	char *p[10]={"hello","world","good","morning","chengdu","hi","farsight","huaqing","china","study"};
	int i,j;
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(strlen(p[j])<strlen(p[j+1]))
			{
				char *temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
			}
		}
	}
//	p[i]=p[0];
	for(i=0;i<10;i++)
		puts(p[i]);
	return 0;
}
