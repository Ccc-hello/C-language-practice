/*=======================================================
*   Copyright (C) 2022 秦超 All rights reserved.
*   
*   filename：mystring.c
*   author：秦超
*   date：2022年07月22日
*   describption：
*
========================================================*/

char *mystrcpy(char *__dest,const char *__src)
{
	char *p=__dest;
    while(*__dest++=*__src++);
	return p;
}

int mystrcmp(const char *__dest,const char *__src)
{
	signed int recv=0;
	while(1)
	{
		if(*__dest != *__src)
		{
			recv = *__dest - *__src;
			break;
		}
		__dest++,__src++;
	}
	return recv;
}

int mystrlen(const char *__dest)
{
	int count=0;
	while(*__dest)
	{
		count++;
		__dest++;
	}
	return count;
}

char *mystrcat(char *__dest,const char *__src)
{
	char *p = __dest;
	while(*__dest++);
	__dest--;
	while(*__dest++==*__src++);
	return p;
}

char *mystrstr(const char *__src,const char *__dest)
{
	while(1)
	{
		if(*__dest==*__src)	
			break;
		__src++;
	}
	return __src;
}
