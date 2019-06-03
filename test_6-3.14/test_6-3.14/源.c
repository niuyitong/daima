#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//ABCDABCD
void reverse_str(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		* left = *right;
        * right = tmp;
		left++;
		right--;
	}
 }


 void left_move(char* str, int k)
 {
	 	int len = 0;
	 	assert(str != NULL);
	 	len = strlen(str);//6
	 	reverse_str(str, str + k - 1);//BACDEF
	 	reverse_str(str + k, str + len - 1);//BAFEDC
	 	reverse_str(str, str + len - 1);//CDEFAB
	 }

int main()
{
	char arr[10] = "ABCDEF";
	left_move(arr, 2);//��ת����
	printf("%s\n", arr);
	system("pause");
	return 0;

}

//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
//AABCDAABCD


 int is_left_move(char* str1, char* str2)
 {
	 	char* ret = NULL;
	 	int len1 = strlen(str1);
	 	int len2 = strlen(str2);
	 	if (len1 != len2)
		 		return 0;
	 	//�Ӵ�׷�� 
		 	strncat(str1, str1, len1);//AABCDAABCD
	 	//�������ַ��� 
		 	ret = strstr(str1, str2);
	 	if (ret == NULL)
		 		return 0;
	 	else
		 		return 1;
	 }


 int main()
 {
	 	char arr1[20] = "AABCD";
	 	char arr2[] = "CDAAB";
	 	int ret = is_left_move(arr1, arr2);
	 	if (ret == 1)
		 	{
		 		printf("yes\n");
		 	}
	 	else
		 	{
		 		printf("no\n");
		 	}
	 	system("pause");
	 	return 0;
	 }
