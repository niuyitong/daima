#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
////1.��д������
////unsigned int reverse_bit(unsigned int value);
////��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
////
////�磺
////��32λ������25���ֵ�������и�λ��
////00000000000000000000000000011001
////��ת�󣺣�2550136832��
////10011000000000000000000000000000
////���������أ�
////2550136832
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int j = 0;
//	unsigned int ret = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (value != 0)
//		{
//			j = value & 1;
//			value = value >> 1;
//			ret += j*pow(2, i);
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int x = 25;
//	int ret = reverse_bit(25);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}

////2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int c = x + (y - x) / 2;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
////3.���ʵ�֣�
////һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
////���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int i = 0;
//	int arr[7] = { 0, 3, 4, 3, 5, 0, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
void change(char *arr, int sz)
{
	int i = 0;
	int j = sz-1;
	while (i < j)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
void change_inside(char* arr)
{
	int i = 0;
	while (*arr != ' ')
	{

	}
}
int main()
{
	char arr[] = "student a am i";
	int ret = strlen("student a am i");
	change(arr, ret);
	change_inside(arr,)
	printf("%s\n", arr1);
	system("pause");
	return 0;
}