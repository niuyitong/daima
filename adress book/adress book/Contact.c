#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}

void LoadContact(Contact* pcon)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
		return;
	}
	//������Ϣ

	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));
	pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	//�����ļ�
	LoadContact(pcon);
}

void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}

//
//void AddContact(Contact* pcon)
//{
//	assert(pcon);
//
//	if(pcon->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//¼����Ϣ
//	printf("����������:>");
//	scanf("%s", pcon->data[pcon->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pcon->data[pcon->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pcon->data[pcon->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pcon->data[pcon->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pcon->data[pcon->sz].addr);
//
//	pcon->sz++;
//	printf("���ӳɹ�\n");
//}


void AddContact(Contact* pcon)
{
	assert(pcon);

	CheckCapacity(pcon);

	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}


static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i<pcon->sz; i++)
	{
		if (0 == strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}

void DelContact(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);

	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	//ɾ��
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ���Ĳ�����\n");
		return;
	}
	//�Ƴ�
	for (i = pos; i<pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}


void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
		return;
	}
	//������Ϣ
	for (i = 0; i<pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}

	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
	printf("����ɹ�\n");
}

void ModifyContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);

	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷��޸�\n");
		return;
	}
	printf("������Ҫ�޸��˵�������");
	scanf("%s", name);
	//����
	pos = FindByName(pcon, name);
	if (pos >= 0)
	{
		printf("�ҵ���\n");
		printf("������Ҫ�޸ĵ�������");
		scanf("%s", pcon->data[pos].name);
		printf("������Ҫ�޸ĵ����䣺");
		scanf("%d", &pcon->data[pos].age);
		printf("������Ҫ�޸ĵ��Ա�");
		scanf("%s", pcon->data[pos].sex);
		printf("������Ҫ�޸ĵĵ绰��");
		scanf("%s", pcon->data[pos].tele);
		printf("������Ҫ�޸ĵĵ�ַ��");
		scanf("%s", pcon->data[pos].addr);
	}
	printf("�޸ĳɹ�\n");
}
void SearchContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("������Ҫ���ҵ��˵�������");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
		pcon->data[pos].age,
		pcon->data[pos].sex,
		pcon->data[pos].tele,
		pcon->data[pos].addr);
}