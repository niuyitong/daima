#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

   //strlen
int my_strlen(char const * str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char const * arr= "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}

//  strcpy
char* my_strcpy(char* arr1, const char *arr2)//����char*��Ϊ��ʵ����ʽ����
{
	char* ret = arr1;
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);
	while (*arr1 = *arr2)//*arr2='0'ʱΪ�٣��Զ�����ѭ��
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "aaaaaa";
    char arr2[] = "hehe";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}

//  const
int main()
{
	int a = 10;
	const int* p = &a;//��*p���ܱ��ı��� ��*p=20�Ǵ����
	int* const p = &a;//��p���ܱ��ı��� ��p=&b�Ǵ����
}