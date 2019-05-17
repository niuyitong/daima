#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//栈区 先使用高地址再使用低地址，随着数组下标的递增，访问到i的地址，被i=0覆盖了
//左--------------->右
//低地址----------->高地址
//arr                i=0
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("呵呵\n");
	}
	return 0;
}