#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//ջ�� ��ʹ�øߵ�ַ��ʹ�õ͵�ַ�����������±�ĵ��������ʵ�i�ĵ�ַ����i=0������
//��--------------->��
//�͵�ַ----------->�ߵ�ַ
//arr                i=0
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("�Ǻ�\n");
	}
	return 0;
}