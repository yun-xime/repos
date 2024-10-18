#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void InitMines(char mine[ROWS][COLS], int row, int col,char set);