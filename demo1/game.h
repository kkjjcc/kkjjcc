#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
//��û�������λ���������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж��Ƿ�ʤ��
char Iswin(char board[ROW][COL], int row, int col);