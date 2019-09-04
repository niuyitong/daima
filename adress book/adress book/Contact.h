//1000���˵���Ϣ
//���֣��Ա����䣬��ַ���绰
//
//1. ����
//2. ɾ��
//3. ����
//4. �޸�
//5. ��ʾ
//6. ����
//

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

#define DEFAULT_SZ 3
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25

//�˵���Ϣ
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//ͨѶ¼�ṹ��

//typedef struct Contact
//{
//	PeoInfo data[MAX];//�����ʵ���ݵĿռ�
//	int sz;//��¼��Ч���ݵĸ���
//}Contact;

typedef struct Contact
{
	PeoInfo* data;
	int sz;//��ЧԪ�صĸ���
	int capacity;//����
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SortContact(Contact* pcon);
void ModifyContact(Contact* pcon);
void SearchContact(Contact* pcon);
void DestroyContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);
