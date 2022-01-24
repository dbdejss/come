#include "game.h"
void InitBoard(char Board[ROWS][COLS],int rows,int cols,char set)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			Board[i][j] = set;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS],int row,int col)
{
	int i,j;
	//��ӡ�к�
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{	//��ӡ�к�
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",Board[i][j]);
		}
		printf("\n");
	}	
}

void estlei(char Board[ROWS][COLS],int row,int col)
{
	int count = easy_count;
	while(count)
	{
	int x = rand()%row+1;
	int y = rand()%col+1;
	if(Board[x][y]=='0')
		{
			Board[x][y]='1';
			count--;
		}	
	}
}
int get_mine_count(char my_Board[ROWS][COLS],int x,int y)
{
	return	my_Board[x-1][y-1]+
			my_Board[x][y-1]+
			my_Board[x+1][y-1]+
			my_Board[x+1][y]+
			my_Board[x+1][y+1]+
			my_Board[x][y+1]+
			my_Board[x-1][y+1]+
			my_Board[x-1][y]-8*'0';
}
void Findlei(char my_Board[ROWS][COLS],char show_Board[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int win = row*row-easy_count;
	while(win)
	{
	printf("����������->:");
	scanf("%d%d",&x,&y);
	if(x>=1&&x<=row && y>=1&&y<=col)
	{
		//1.����
		if(my_Board[x][y]=='1')
		{
			printf("���ź����㱻ը����\n");
			DisplayBoard(my_Board,row,col);
			break;
		}
		else//2.������
		{
			//��Ҫ����x��y������Χ�м�����
			int count = get_mine_count(my_Board,x,y);
			show_Board[x][y] = count +'0';
			DisplayBoard(show_Board,row,col);
			win--;
		}
	}
	else
		printf("������Ƿ�����������������:");	
	}
	if(win==0)
		printf("��ϲ�㣬���׳ɹ�\n");
}