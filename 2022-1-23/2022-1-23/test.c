#include "game.h"
void mean()
{
	printf("**************************************\n");
	printf("*****  1.开始游戏    0.退出游戏  *****\n");
	printf("**************************************\n");
}

void game()
{
	//1.布置好雷的信息
	char my_Board[ROWS][COLS] = { 0 };
	//1.排查出雷的信息
	char show_Board[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(my_Board,ROWS,COLS,'0');
	InitBoard(show_Board,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(my_Board,ROW,COL);
	DisplayBoard(show_Board,ROW,COL);
	//布置雷
	estlei(my_Board,ROW,COL);
	//DisplayBoard(my_Board,ROW,COL);
	//扫雷
	Findlei(my_Board,show_Board,ROW,COL);
}
int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
	mean();
	printf("请选择->:");
	scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}	
	}while(input);
	return 0;
}