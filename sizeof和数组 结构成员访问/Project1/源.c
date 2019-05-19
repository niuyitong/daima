#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//sizeof和数组
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	system("pause");
	return 0;
}



//访问结构体成员
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 18;//结构成员访问
}
int main()
{
	struct Stu stu;
	struct  Stu* pStu = &stu;//结构成员访问

		stu.age = 20;//结构成员访问
		set_age1(stu);

		pStu->age = 20;//结构成员访问
		set_age2(pStu);
		system("pause");
		return 0;
}