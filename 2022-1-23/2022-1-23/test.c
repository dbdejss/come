#include "game.h"
void mean()
{
	printf("**************************************\n");
	printf("*****  1.��ʼ��Ϸ    0.�˳���Ϸ  *****\n");
	printf("**************************************\n");
}

void game()
{
	//1.���ú��׵���Ϣ
	char my_Board[ROWS][COLS] = { 0 };
	//1.�Ų���׵���Ϣ
	char show_Board[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(my_Board,ROWS,COLS,'0');
	InitBoard(show_Board,ROWS,COLS,'*');
	//��ӡ����
	//DisplayBoard(my_Board,ROW,COL);
	DisplayBoard(show_Board,ROW,COL);
	//������
	estlei(my_Board,ROW,COL);
	//DisplayBoard(my_Board,ROW,COL);
	//ɨ��
	Findlei(my_Board,show_Board,ROW,COL);
}
int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
	mean();
	printf("��ѡ��->:");
	scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
		}	
	}while(input);
	return 0;
}