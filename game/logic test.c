#define _CRT_SECURE_NO_WARNINGS
#include "game1.h"

void menu()
{
	printf("*********************************************************\n");
	printf("*********************    1. p l a y    ******************\n");
	printf("*********************    0. e x i t    ******************\n");
	printf("*********************************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input;
	do
	{
		menu();
		printf("Enter your choice: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("You have chosen to exit.\n");
			break;
		default:
			printf("Invalid input. Please try again.\n");
			break;
		}
    }while (input!= 0);

	return 0;
}