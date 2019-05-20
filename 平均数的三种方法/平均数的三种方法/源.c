#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//四种方法
int main()
{
	int a = 10;
	int b = 5;
	int c = a + b;
	printf("%d\n", c);
	system("pause");
	return 0;
}

int main()
{
	int a = 10;
	int b = 5;
	int c = a + (b - a) / 2;
	system("pause");
	return 0;
}
int main()
{
	int a = 10;
	int b = 5;
	int c = (a&b) + (a^b)/2;
	system("pause");
	return 0;
}
int main()
{
	int a = 10;
	int b = 5;
	int c = (a&b) + (a^b>>1);
	system("pause");
	return 0;
}