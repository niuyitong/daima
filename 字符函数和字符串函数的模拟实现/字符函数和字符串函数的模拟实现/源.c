#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//my_strlen·ÇµÝ¹é
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//strlenµÝ¹é
int Strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + Strlen(++str);
	}
}


//strcpy
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
}


//strcat
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
}


//strcmp
int my_strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}
