#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//my_strlen非递归
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
//strlen递归
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


//strncpy
//当num>=sizeof(src)时，拷贝正确，并在dest字符串后面加入'\0';
//当num<sizeof(src)时，只拷贝src前n - 1个字符串到dest，不会为dest字符串后面加入'\0';
char* my_strncpy(char* dest, const char* src,int num)
{
	char* cp = dest;
	assert(dest != NULL);
	assert(src != NULL);
		while (num&&(*cp++ = *src++) != '\0')
		{
			num--;
		}
		if (num)
		{
			while (--num)
				*cp++ = '\0';
		}
	return dest;
}
int main()
{
	char arr1[10] = "abcdef";
	char arr2[5] = "ABC";
	my_strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}


//strncat追加
char* my_strncat(char* dest, const char* src, int num)
{
	char* str = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*str != '\0')
	{
		str++;
	}
	while (num && (*str++ = *src++) != '\0')
	{
		num--;
	}

	return dest;
}
int main()
{
	char arr1[30] = "to be ";
	char arr2[20] = "or not to be";
	my_strncat(arr1, arr2, 4);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}


//strncmp
int strncmp(char * s1, char * s2, size_t n)
{
	if (!n)//n为无符号整形变量;如果n为0,则返回0
		return 0;
	//在接下来的while函数中
	//第一个循环条件：--n,如果比较到前n个字符则退出循环
	//第二个循环条件：*s1,如果s1指向的字符串末尾退出循环
	//第三个循环条件：*s1 == *s2,如果两字符比较不等则退出循环

	while (--n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}