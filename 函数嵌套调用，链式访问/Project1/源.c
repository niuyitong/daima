#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////����Ƕ��
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
//��ʽ����
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));//strcat,������char��������,�浽arr��
	printf("%s\n", arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
