#define _CRT_SECURE_NO_WARNINGS

#include "tic-tac-toe.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

char PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("Enter the position (x,y) for your move: ");
		scanf("%d %d", &x, &y);//记得要在循环里更新输入的值啊猪比。
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = 'X';
			DisplayBoard(board, ROW, COL);
			break;
		}
		else
		{
			printf("Invalid move. Please try again.\n");//invalid：无效的
		}
	}
	return 'X';
}

char ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("Computer's turn.\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			DisplayBoard(board, ROW, COL);
			break;
		}
	}
	return 'O';
}

char CheckWin(char board[ROW][COL], int row, int col,char N)
{
	//row
	int i = 0;
	int j = 0;
	int R = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == N)
			{
				R++;
			}
			if (R == col)//不能把这个if语句放在for外面，因为这里的j最大值为col，而数组边界是col-1，从而导致越界访问。
			{
				return board[i][j];
				break;
			}
		}
		R = 0;
	}
	//col
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[j][i] == N)
			{
				R++;
			}
			if (R == row)
			{
				return board[j][i];
				break;
			}
		}
		R = 0;
	}
	//diagonal
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && board[i][j] == N)
			{
				R++;
				if (R == row)
				{
					return board[i][j];
				}
				break;
			}

		}
	
	}
	R = 0;
	for (i = row - 1; i > 0; i--)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && board[i][j] == N)
			{
				R++;
				if (R == row)
				{
					return board[i][j];
				}
				break;
			}
		}
		
	}
	R = 0;
	//tie
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				R++;
			}
		}
		if (R == row * col)
		{
			return 'T';
		}
	}
	return 'C';
}