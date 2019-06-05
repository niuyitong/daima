#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//my_strlen�ǵݹ�
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
//strlen�ݹ�
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
//��num>=sizeof(src)ʱ��������ȷ������dest�ַ����������'\0';
//��num<sizeof(src)ʱ��ֻ����srcǰn - 1���ַ�����dest������Ϊdest�ַ����������'\0';
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


//strncat׷��
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
	if (!n)//nΪ�޷������α���;���nΪ0,�򷵻�0
		return 0;
	//�ڽ�������while������
	//��һ��ѭ��������--n,����Ƚϵ�ǰn���ַ����˳�ѭ��
	//�ڶ���ѭ��������*s1,���s1ָ����ַ���ĩβ�˳�ѭ��
	//������ѭ��������*s1 == *s2,������ַ��Ƚϲ������˳�ѭ��

	while (--n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}