#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////函数嵌套
//void new_line()
//{
//	printf("hehe\n");
//
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	system("pause");
//	return 0;
//}
//链式访问
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));//strcat,将两个char类型连接,存到arr里
	printf("%s\n", arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
