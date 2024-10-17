#pragma once

#include <stdio.h>

#define ROW 3
#define COL 3

//Initialize the board with the given row and column.
void InitBoard(char board[ROW][COL],int row,int col);

//Print the board on the console(screen).
void DisplayBoard(char board[ROW][COL],int row,int col);