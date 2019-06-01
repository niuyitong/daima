#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//static用法
//static int j;
//void fun1(void)
//{
//	static int i = 0;
//	i++;
//}
//void fun2(void)
//{
//	j = 0;
//	j++;
//}
//int main()
//{
//	int k = 0;
//	for (k = 0; k < 10; k++)
//	{
//		fun1();//10
//		fun2();//10
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//255
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	int sum = i + j;
//	printf("%d\n", sum);//-10
//	printf("%u", sum);//42亿
//	system("pause");
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//会进入死循环，因为i是无符号整型，永远大于等于0，
//	}
//	system("pause");
//	return 0;
//}

//判断机器大小端
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}
