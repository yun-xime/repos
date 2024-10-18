#include "mine clearance.h"

void InitMines(char Init[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Init[i][j] = set;
		}
	}
}