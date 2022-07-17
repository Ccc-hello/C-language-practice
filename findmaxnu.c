/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：arr3.c
*   author：秦超
*   date：2022年07月14日
*   describption：
*
========================================================*/
#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[3][5];
    int i,j,max;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 5 ; j++)
            scanf("%d",&a[i][j]);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }

    max = a[0][0];
    
    for(i = 0; i < 3; i++)
        for(j = 0 ; j < 5; j++)
            if(a[i][j] > max)
                max = a[i][j];
    
    for(i = 0; i < 3; i++)
        for(j = 0 ; j < 5; j++)
            if(a[i][j] == max)
            {
                printf("x = %d,y = %d\n",i,j);
            }

    printf("max = %d\n",max);
    return 0;
} 
