#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("*****     1.play     ******\n");
	printf("*****     0.exit     ******\n");
	printf("***************************\n");

}


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);

	//չʾ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		//չʾ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		char ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
		break;
		}
		//������
		ComputerMove(board, ROW, COL);
		//չʾ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		 ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
		break;
		}
	}
		if (ret == '*')
		{
		printf("���Ӯ\n");
		}
		if (ret == '#')
		{
		printf("����Ӯ\n");
		}
		if (ret == 'Q')
		{
		printf("ƽ��\n");
		}

}

int main()
{
	int input = 0;
	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
