#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
	left_move(arr, 2);//旋转两个
	printf("%s\n", arr);
	system("pause");
	return 0;

}

//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//AABCDAABCD


 int is_left_move(char* str1, char* str2)
 {
	 	char* ret = NULL;
	 	int len1 = strlen(str1);
	 	int len2 = strlen(str2);
	 	if (len1 != len2)
		 		return 0;
	 	//子串追加 
		 	strncat(str1, str1, len1);//AABCDAABCD
	 	//查找子字符串 
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
