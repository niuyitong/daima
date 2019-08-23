#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#include <string.h>
////直接插入排序
//void insert(int arr[], int num, int sz)
//{
//	arr[sz] = num;
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i <sz-1; i++)
//	{
//		if (arr[sz - i] < arr[sz-1 - i])
//		{
//			tmp = arr[sz - i];
//			arr[sz - i] = arr[sz - 1 - i];
//			arr[sz - 1 - i] = tmp;
//		}
//		else
//			break;
//	}
//
//}
//int main()
//{
//	int arr[20] = { 1, 2, 3, 4, 6, 7, 8, 9, 10 };
//	int num = 5;
//	int i = 0;
//	int sz = 9;
//	insert(arr, num, sz);
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////希尔排序
//void shsort(int a[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int d = n/2;
//	while (d >= 1)
//	{
//		for (i = d + 1; i <= n; i++)
//		{
//			a[0] = a[i];
//			j = i - d;
//			while ((j > 0) && (a[0] < a[j]))
//			{
//				a[j + d] = a[j];
//				j = j - d;
//			}
//			a[j + d] = a[0];
//		}
//		d = d / 2;
//	}
//}
//int main()
//{
//	int a[11] = { 0 };
//	int i = 0;
//	printf("请输入十个数：");
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	shsort(a, 10);
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//
////冒泡排序
//void pupple(int a[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[10] = { 2, 4, 3, 1, 7, 5, 6, 8, 9, 0 };
//	int i = 0;
//	pupple(a, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//
////快速排序
//void qusort(int s[], int start, int end)
//{
//	int i = start;
//	int j = end;
//	s[0] = s[start];
//	while (i < j)
//	{
//		while (i < j&&s[0] < s[j])
//			j--;
//		if (i < j)
//		{
//			s[i] = s[j];
//			i++;
//		}
//		while (i < j&&s[i] <= s[0])
//			i++;
//		if (i < j)
//		{
//			s[j] = s[i];
//			j--;
//		}
//	}
//		s[i] = s[0];
//		if (start < i)
//			qusort(s, start, j - 1);
//		if (i < end)
//			qusort(s, j + 1, end);
//	}
//
//int main()
//{
//	int a[11] = { 0 };
//	int i = 0;
//	printf("请输入十个数：\n");
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//		qusort(a, 1, 10);
//		for (i = 1; i <= 10; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//}
//
////选择排序
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	int a[11] = { 0 };
//	printf("请输入十个数：\n");
//	for (i = 1; i < 11; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i <= 9; i++)
//	for (j = i + 1; j <= 10; j++)
//	{
//		if (a[i]>a[j])
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	for (i = 1; i <= 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

////归并排序
//void merge(int r[], int s[], int x1, int x2, int x3)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	i = x1;
//	j = x2 + 1;
//	k = x1;
//	while ((i <= x2) && (j<=x3))
//	if (r[i] <= r[j])
//	{
//		s[k] = r[i];
//		i++;
//		k++;
//	}
//	else
//	{
//		s[k] = r[j];
//		j++;
//		k++;
//	}
//	while (i <= x2)
//		s[k++] = r[i++];
//	while (j <= x3)
//		s[k++] = r[j++];
//}
//void merge_sort(int r[], int s[], int m, int n)
//{
//	int p = 0;
//	int t[20] = { 0 };
//	if (m == n)
//		s[m] = r[m];
//	else
//	{
//		p = (m + n) / 2;
//		merge_sort(r, t, m, p);
//		merge_sort(r, t, p + 1, n);
//		merge(t, s, m, p, n);
//	}
//}
//int main()
//{
//	int a[11] = { 0 };
//	int i = 0;
//	printf("请输入十个数：");
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	merge_sort(a, a, 1, 10);
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}

