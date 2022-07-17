#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=30;i++)
	{
	j=30-i;
	if(2*i+4*j==90)
		printf("chickin:%d,rabbit:%d",i,j);
	}
	return 0;
}
