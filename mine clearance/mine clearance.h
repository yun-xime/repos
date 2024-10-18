#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define num_mines 10

void InitBoard(char mine[ROWS][COLS], int row, int col,char set);

void DisplayBoard(char show[ROWS][COLS], int row, int col);

void SetMines(char mine[ROWS][COLS], int row, int col);

void FindMines(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);