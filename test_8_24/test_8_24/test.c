#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int binary_search(int key, int a[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (key > a[mid])
			left=mid+1;
		else if (key < a[mid])
			right = mid - 1;
		else
			break;
	}
	if (left <= right)
	{
		return mid;
	}
	else
		return -1;
}
int main()
{
	int i = 0;
	int key = 11;
	int a[10] = { 2, 3, 5, 6, 7, 8, 9, 12, 13, 35 };
	int sz = sizeof(a) / sizeof(a[0]);
	int ret = 0;
	ret = binary_search(key, a, sz);
	if (ret >= 0)
	{
		printf("找到了，下标为%d", ret);
	}
	else
		printf("找不到");
	return 0;
}