#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////  15婚礼上的谎言
////A,B,C代表新郎，X,Y,Z代表新娘
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a <= 3; a++)
//	{
//		for (b  = 1; b <= 3; b++)
//		{
//			for (c = 1; c <= 3; c++)
//			{
//				if ((a != 1) && (c != 1) && (c != 3)&&(a!=b)&&(b!=c)&&(a!=c))
//				{
//					printf("A将与%c结婚\n", 'X'+a-1);//%c将打印X或Y或Z
//					printf("B将与%c结婚\n", 'X'+a-1);//X加0—3会得到X,Y,Z
//					printf("C将与%c结婚\n", 'X'+a-1);
//				}
//			}
//		}
//	}
//	return 0;
//}

////  16百元买百鸡
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 0; a <= 20; a++)
//	{
//		for (b = 0; b <= 33; b++)
//		{
//			for (c = 3; c <= 99; c++)
//			{
//				if ((100 == 5 * a + b * 3 + c/3)&&(100==a+b+c)&&((c%3)==0))
//				{
//					printf("%d %d %d\n", a, b, c);
//				}
//			}
//		}
//	}
//}

////  17打渔晒网问题
//int leap(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int number(int y, int m, int d)
//{
//	int i = 0;
//	int sum = 0;
//	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	for (i = 2011; i < y; i++)
//	{
//		if (leap(i) == 1)
//		{
//			sum += 366;
//		}
//		else
//			sum += 365;
//	}
//	for (i = 0; i < m-1; i++)
//	{
//		if (leap(y) == 1)
//		{
//			sum += b[i];
//		}
//		else
//		{
//			sum += a[i];
//		}
//	}
//	return sum += d;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int ret = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	ret = number(year, month, day);
//	if (ret % 5 > 0 && ret < 4)
//	{
//		printf("在打渔\n");
//	}
//	else
//	{
//		printf("在晒网");
//	}
//	return 0;
//}
//
////  18判断三角形的类型
//int judge_type(int a, int b, int c)
//{
//	if (c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a + c*c)
//		return 1;
//	else if (c*c > a*a + b*b || a*a > b*b + c*c || b*b > a*a + c*c)
//	{
//		return 0;
//	}
//	else
//		return -1;
//}
//int judge(int a, int b, int c)
//{
//	if ((a + b) > c || (a + c) > b || (b + c) > a)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 0;
//	int k = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	ret = judge(a, b, c);
//	if (ret == 1)
//	{
//		printf("能组成三角形\n");
//		k = judge_type(a, b, c);
//		if (k == 1)
//			printf("直角三角形\n");
//		else if (k == 0)
//		{
//			printf("钝角三角形\n");
//		}
//		else
//			printf("锐角三角形\n");
//	}
//	else
//	{
//		printf("不能组成三角形\n");
//	}
//
//}

