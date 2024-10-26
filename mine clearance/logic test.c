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
		int i = rand() % row + 1;//generate n-m random numbers¡ª¡ª>rand()%(m-n+1)+n
		int j = rand() % col + 1;
		if (mine[i][j] != '!')
		{
			mine[i][j] = '!';
			count--;
		}
	}
	//int i = 0, j = 0;
	//for (i = 0; i < ROWS; i++)
	//{
	//	printf("%d ", i);
	//}
	//printf("\n");
	//for (i = 1; i < ROWS; i++)
	//{
	//	printf("%d ", i);
	//	for (j = 1; j < COLS; j++)
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
			if (i >= 0 && i <= row && j >= 0 && j <= col && mine[i][j] == '!')
			{
				count++;
			}
		}
	}
	return count + '0';
}

void FindMines(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win < row * col - num_mines)
	{
		printf("please enter cooordinates (x y):");
		int x, y;
		if (scanf("%d %d", &x, &y) != 2 && (x < 1 || x > row || y < 1 || y > col))
		{
			printf("invalid input!\n");
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
		else if (show[x][y] == '*')
		{
			win++;
			show[x][y] = may_mines(mine, x, y, row, col);
		}
		else
		{
			printf("Invalid input!\n");
			continue;
		}
		DisplayBoard(show, ROW, COL);
	}
	if (win == row * col - num_mines)
	{
		printf("you win!\n");
		DisplayBoard(show, ROW, COL);
	}
}//*/

