/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：test3.c
*   author：秦超
*   date：2022年07月13日
*   describption：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int year,month,day,sum,flag;
	printf("please input date(year month day)");
	scanf("%d %d %d",&year,&month,&day);
	switch(month)
	{
		case 1:
			sum=0;
			break;
		case 2:
			sum=31;
			break;
		case 3:
			sum=28+31;
			break;
		case 4:
			sum=31+28+31;
			break;
		case 5:
			sum=30+31+28+31;
			break;
		case 6:
			sum=31+28+31+30+31;
			break;
		case 7:
			sum=31+28+31+30+31+30;
			break;
		case 8:
			sum=31+28+31+30+31+30+31;
			break;
		case 9:
			sum=31+28+31+30+31+30+31+31;
			break;
		case 10:
			sum=31+28+31+30+31+30+31+31+30;
			break;
		case 11:
			sum=31+28+31+30+31+30+31+31+30+31;
			break;
		case 12:
			sum=31+28+31+30+31+30+31+31+30+31+30;
			break;
		default:
			printf("error\n");
	}
	sum += day;
	if((year%4==0 && year%100!=0)||year%400==0)
		flag=1;
	else 
		flag=0;
	if(flag == 1 && month>2)
		sum++;
	printf("%d\n",sum);
	return 0;
}
