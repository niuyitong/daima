#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void OddEven(int* str,int len)
{
	int tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		//��ż��
		if ((left < right)&&str[left] % 2 != 0)
		{
			left++;
		}
		//������
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
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1��2��3
//4��5��6
//7��8��9
void FindNum(int arr[3][3], int k, int* prow, int* pcol)
 { 
 	int x = 0; 
 	int y = *pcol-1; //x,yΪ���Ͻǵ��Ǹ����ֵ�����
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
 			return; //�ҵ��ˣ���������
 		} 
 	} 
 	*prow = -1; 
 	*pcol = -1; //�Ҳ���
 } 
  
 int main() 
 { 
 	int arr[3][3] = {1,2,3,4,5,6,7,8,9}; 
 	int x = 3; 
 	int y = 3; 
 	//�����Ͳ��� 
 	FindNum(arr, 7, &x, &y); //7ΪҪ�ҵ���
 	if(x == -1) 
 	{ 
 		printf("�Ҳ���\n"); 
 	} 
 	else 
 	{ 
 		printf("%d %d\n", x, y); 
 	} 
 	system("pause"); 
 	return 0; 
 } 




