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
	char ret = 0;
	char N;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		N = PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL,N);
		if (ret != 'C')
		{
			break;
		}
		N = ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL, N);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("Congratulations! You win!\n");
	}
	else if (ret == 'O')
	{
		printf("Sorry, you lose.\n");
	}
	else if (ret == 'T')
	{
		printf("It's a tie.\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));//Seed the random number generator.seed,种子；generator，生成器。
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