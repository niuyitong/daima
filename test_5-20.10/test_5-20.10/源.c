#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//дһ���������ز����������� 1 �ĸ���
int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num = 10;
	int ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//1010
int main()
{
	int num = 10;
	int i = 0;
	int ret = 0;
	printf("������Ϊ��");
	for (i = 31; i >= 0;i-=2)//������
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	printf("\n");
	printf("ż����Ϊ��");
	for (i = 30; i >= 0; i -= 2)//ż����
	{
		ret = (num >> i) & 1;
		printf("%d ", ret);
	}
	system("pause");
	return 0;
}

// ���һ��������ÿһλ�� 
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d\n", num % 10);
}
int main()
{
	int num = 5637;
	print(num);
	system("pause");
	return 0;
}

//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
int main()
{
	int m = 1999;
	int n = 2299;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}


