#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//
////  11���ӳ���
//int main()
//{
//	int day = 0;
//	int total = 1;
//	for (day = 1; day < 10; day++)
//	{
//		total = (total + 1) * 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//// 12 ������ƻ��
//int main()
//{
//	int i = 2;
//	double money = 0;
//	int count = 0;
//	while (i <= 100)
//	{
//		money += i*0.8;
//		i *= 2;
//		count++;
//	}
//	printf("%lf\n", money/count);
//	return 0;
//}

////  13����η���������λ
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int sum = 0; 
//	int i = 0;
//	printf("������������");
//	scanf("%d", &x);
//	printf("������η���");
//	scanf("%d", &y);
//	sum = pow(x, y);
//	i = sum % 1000;
//	if (i >= 100)
//		printf("%d\n", i);
//	else if (i >= 10)
//		printf("0%d\n", i);
//	else
//		printf("00%d\n", i);
//	return 0;
//}
//
////  14����ĳ���Ǹ���ĵڼ���
//
//int leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//
//int Number(int year, int mouth, int day)
//{
//	int i = 0;
//	int n = 0;
//	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//ƽ��
//	int b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//����
//	if (leap_year(year) == 1)
//	{
//		for (i = 0; i < mouth-1; i++)
//		{
//			n += b[i];
//		}
//		return n + day;
//	}
//	else
//	for (i = 0; i < mouth - 1; i++)
//	{
//		n += a[i];
//	}
//	return n + day;
//}
//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	int day = 0;
//	int number = 0;
//	printf("�����������գ�");
//	scanf("%d%d%d", &year, &mouth, &day);
//	number = Number(year, mouth, day);
//	printf("%d %d %d����һ��ĵ�%d��\n", year, mouth, day, number);
//	return 0;
//}