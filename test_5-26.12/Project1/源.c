#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
////1.编写函数：
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值value的二进制位模式从左到右翻转后的值。
////
////如：
////在32位机器上25这个值包含下列各位：
////00000000000000000000000000011001
////翻转后：（2550136832）
////10011000000000000000000000000000
////程序结果返回：
////2550136832
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int j = 0;
//	unsigned int ret = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (value != 0)
//		{
//			j = value & 1;
//			value = value >> 1;
//			ret += j*pow(2, i);
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int x = 25;
//	int ret = reverse_bit(25);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}

////2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int c = x + (y - x) / 2;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
////3.编程实现：
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
//int main()
//{
//	int i = 0;
//	int arr[7] = { 0, 3, 4, 3, 5, 0, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）
void change(char *arr, int sz)
{
	int i = 0;
	int j = sz-1;
	while (i < j)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
void change_inside(char* arr)
{
	int i = 0;
	while (*arr != ' ')
	{

	}
}
int main()
{
	char arr[] = "student a am i";
	int ret = strlen("student a am i");
	change(arr, ret);
	change_inside(arr,)
	printf("%s\n", arr1);
	system("pause");
	return 0;
}