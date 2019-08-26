#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//3.模拟实现strcpy
char* my_strcpy(char* dest, const char* src)
{
	char* str = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)//src为'\0'时,赋给dest,dest=0,为假,退出循环,此时‘\0’已赋给dest,完美！
	{
		;
	}
	return str;
}
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
//4.模拟实现strcat 字符串追加
char* my_strcat(char* dest, const char* src)
{
	assert(dest&&src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello quan";
	char arr2[] = "ni shi sha bi";
    my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}



//
//3.实现strstr 查找子字符串
char* my_strstr(const char* arr1, const char* arr2)
{
	const char* p1 = arr1;
	const char* p2 = arr2;
	const char* start = p1;
	assert(arr1&&arr2);

	while (*p1)
	{
		p1 = start;
		p2 = arr2;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return start;
		start++;
	}
	return NULL;
}
int main()
{
	char arr[] = "abcdcdefg";
	char* str = my_strstr(arr, "cdef");
	printf("%s\n", str);
	return 0;
}
//4.实现strchr
//int main()
//{
//	//
//}
//5.实现strcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1&&str2);
	while (*str1&&*str2&&*str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	if (ret > 0)
		printf("arr1>arr2\n");
	else if (ret < 0)
		printf("arr1<arr2\n");
	else
		printf("相等\n");
}