#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数
int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num = 10;
	int ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//1010
int main()
{
	int num = 10;
	int i = 0;
	int ret = 0;
	printf("奇数列为：");
	for (i = 31; i >= 0;i-=2)//奇数列
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	printf("\n");
	printf("偶数列为：");
	for (i = 30; i >= 0; i -= 2)//偶数列
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	system("pause");
	return 0;
}

// 输出一个整数的每一位。 
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d\n", num % 10);
}
int main()
{
	int num = 5637;
	print(num);
	system("pause");
	return 0;
}

//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
int main()
{
	int m = 1999;
	int n = 2299;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}


