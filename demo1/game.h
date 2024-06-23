#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
//找没有下棋的位置随机下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断是否胜利
char Iswin(char board[ROW][COL], int row, int col);