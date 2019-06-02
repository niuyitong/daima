#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.调整数组使奇数全部都位于偶数前面。
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void OddEven(int* str,int len)
{
	int tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		//找偶数
		if ((left < right)&&str[left] % 2 != 0)
		{
			left++;
		}
		//找奇数
		if ((left < right)&&str[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = str[left];
			str[left] = str[right];
			str[right] = tmp;
		}
		
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1, 6, 8, 3, 7, 2, 9, 4, 5, 0 };
	OddEven(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}


//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1，2，3
//4，5，6
//7，8，9
void FindNum(int arr[3][3], int k, int* prow, int* pcol)
 { 
 	int x = 0; 
 	int y = *pcol-1; //x,y为右上角的那个数字的坐标
 	while(x<*prow && y>=0) 
 	{ 
 		if(arr[x][y] > k) 
 		{ 
 			y--; 
 		} 
 		else if(arr[x][y] < k) 
 		{ 
 			x++; 
 		} 
 		else 
 		{ 
 			*prow = x; 
 			*pcol = y; 
 			return; //找到了，结束函数
 		} 
 	} 
 	*prow = -1; 
 	*pcol = -1; //找不到
 } 
  
 int main() 
 { 
 	int arr[3][3] = {1,2,3,4,5,6,7,8,9}; 
 	int x = 3; 
 	int y = 3; 
 	//返回型参数 
 	FindNum(arr, 7, &x, &y); //7为要找的数
 	if(x == -1) 
 	{ 
 		printf("找不到\n"); 
 	} 
 	else 
 	{ 
 		printf("%d %d\n", x, y); 
 	} 
 	system("pause"); 
 	return 0; 
 } 




