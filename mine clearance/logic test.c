#include "mine clearance.h"

void InitBoard(char Init[ROWS][COLS], int row, int col,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Init[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("-----mine clear-----\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");
}

void SetMines(char mine[ROWS][COLS], int row, int col)
{
	int count = num_mines;
	while (count)
	{
		int i = rand() % row + 1;//generate n-m random numbers����>rand()%(m-n+1)+n
		int j = rand() % col + 1;
		if (mine[i][j] != '!')
		{
			mine[i][j] = '!';
			count--;
		}
	}
	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++)
	//	{
	//		printf("%c ", mine[i][j]);
	//	}
	//	printf("\n");
	//}
}

char may_mines(char mine[ROWS][COLS], int x, int y, int row, int col)
{
	int i = 0, j = 0, count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i >= 0 && i < row && j >= 0 && j < col && mine[i][j] == '!')
			{
				count++;
			}
		}
	}
	return count + '0';
}
void FindMines(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	while (1)
	{
		printf("please enter cooordinates (x y):");
		int x, y;
		if (scanf("%d %d", &x, &y) != 2)
		{
			printf("invalid input!\n");
			while (getchar() != '\n');
			continue;
		}
		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("out of range!\n");
			while (getchar() != '\n');
			continue;
		}
		if (mine[x][y] == '!')
		{
			show[x][y] = '!';
			printf("you lose!\n");
			DisplayBoard(show, ROW, COL);
			break;
		}
		else
		{
			show[x][y] = may_mines(mine, x - 1, y - 1, row, col);
		}
		DisplayBoard(show, ROW, COL);
	}
}