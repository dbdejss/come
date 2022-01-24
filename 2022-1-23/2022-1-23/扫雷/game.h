#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_count 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InitBoard(char Board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char Board[ROWS][COLS],int row,int col);
void estlei(char Board[ROWS][COLS],int row,int col);
void Findlei(char Board[ROWS][COLS],char show_Boardint[ROWS][COLS],int row,int col);