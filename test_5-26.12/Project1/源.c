#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int j = 0;
	unsigned int ret = 0;
	for (i = 31; i >= 0; i--)
	{
		if (value != 0)
		{
			j = value & 1;
			value = value >> 1;
			ret += j*pow(2, i);

		}
	}
	return ret;
}
int main()
{
	int x = 25;
	int ret = reverse_bit(25);
	printf("%u\n", ret);//�޷�����
	system("pause");
	return 0;
}


//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
int main()
{
	int x = 10;
	int y = 20;
    //int c = x + (y - x) / 2;
    int c = (x&y) + (x^y) / 2;
	printf("%d\n", c);
	system("pause");
	return 0;
}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
int main()
{
	int i = 0;
	int arr[7] = { 0, 3, 4, 3, 5, 0, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		arr[0] = arr[0] ^ arr[i];//0���κ�����򶼵����κ���
	}
	printf("%d\n", arr[0]);
	system("pause");
	return 0;
}

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
#include<assert.h>
void reverse_str(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char *str)
{
	//1.���������ַ���
	int len = my_strlen(str);
	assert(str != NULL);
	reverse_str(str, str + len - 1);//i ma a tneduts
	printf("%s\n", str);
	//2.����ÿ������
	while (*str!='\0')
	{
		char* start = str;
		while (*str != ' '&&*str!='\0')
		{
			str++;
		}
		reverse_str(start, str - 1);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}