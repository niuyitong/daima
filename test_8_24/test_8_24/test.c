#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////二分查找
//int binary_search(int key, int a[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (key > a[mid])
//			left=mid+1;
//		else if (key < a[mid])
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//	{
//		return mid;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int i = 0;
//	int key = 11;
//	int a[10] = { 2, 3, 5, 6, 7, 8, 9, 12, 13, 35 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int ret = 0;
//	ret = binary_search(key, a, sz);
//	if (ret >= 0)
//	{
//		printf("找到了，下标为%d", ret);
//	}
//	else
//		printf("找不到");
//	return 0;
//}
//
////分块查找
//struct Index
//{
//	int key;
//	int start;
//	int end;
//}Index_table[4];
//int block_search(int key, int a[])
//{
//	int i = 0;
//	int j = 0;
//	i = 1;
//	while (i <= 3 && key > Index_table[i].key)
//		i++;
//	if (i > 3)
//	{
//		return 0;
//		j = Index_table[i].start;
//		while (j <= Index_table[i].end&&a[j] != key;
//		j++;
//		if (j > Index_table[i].end)
//			j = 0;
//		return j;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int key = 0;
//	int a[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 15, 16, 17, 18 };
//	for (i = 1; i <= 3; i++)
//	{
//		Index_table[i].start = j + 1;
//		j = j + 1;
//		Index_table[i].end = j + 4;
//		j = j + 4;
//		Index_table[i].key = a[j];
//	}
//	printf("请输入要查找的数字：");
//	scanf("%d", &key);
//	k = block_search(key, a);
//	if (k != 0)
//		printf("查找成功\n");
//	else
//		printf("查找失败\n");
//}

//哈希查找
#define MAX 11
#define N 8
int hashtable[Max]
int fanc(int value)
{
	return value%Max;
}
int search(int key)
{
	int pos = 0;
	int t = 0;
	pos = func(key);
	t = pos;
	while (hashtable[t] != key&&hashtable != -1)
	{
		t = (t + 1) % Max;
		if (pos == t)
			return -1;
	}
	if (hashtable[t] == -1)
		return NULL;
	else
		retur t;
}
void creathash(int key)
{
	int pos = 0;
	int t = 0;
	pos = func(key);
	t = pos;
	while (hashtable[t] != -1)
	{
		t = (t + 1) % Max;
		if (pos == t)
		{
			printf("哈希表已满\n");
			return;
		}
	}
	hashtable[t] = key;
}
int main()
{
	int flag[50];
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i < Max; i++)
		hashtable[i] = -1'
	for (i = 0; i < 50; i++)
		flag[i] = 0;
	srand((unsigned long)time(0));
	i = 0;
	while (i != N)
	{
		t = rand() % 50;
		if (flag[t] == 0)
		{
			creathash(t);
			printf("%2d:", t);
			for (j = 0; j < Max; j++)
				printf("(%2d)", hashtable[j]);
			printf("\n");
			flag[t] = 1;
			i++;
		}
	}
	printf("请输入要查找的元素：");
	scanf("%d", &t);
	if (t>0 && t < 50)
	{
		i = search(t);
		if (i != -1)
		{
			printf("查找成功其位置是：%d\n", i);
		}
		else
			printf("查找失败\n");
	}
	else
		printf("输入有误\n");
	return 0;
}