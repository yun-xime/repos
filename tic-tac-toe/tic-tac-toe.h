#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//Initialize the board with the given row and column.
void InitBoard(char board[ROW][COL],int row,int col);

//Print the board on the console(控制台).
void DisplayBoard(char board[ROW][COL],int row,int col);

//Player's turn.
char PlayerMove(char board[ROW][COL],int row,int col);

//Computer's turn.
char ComputerMove(char board[ROW][COL],int row,int col);

//player win : return X
//computer win : return O
//tie : return T 平局
//continue : return C
char CheckWin(char board[ROW][COL],int row,int col,char N);
