#include "mine clearance.h"

void menu()
{
	printf("*********************************************************\n");
	printf("*********************    1. p l a y    ******************\n");
	printf("*********************    0. e x i t    ******************\n");
	printf("*********************************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//store the information of the arrangment of mines
	char show[ROWS][COLS] = { 0 };//store the information of the clearance of the minefield
	//mine array will be initialized with ' '
	//show array will be initialized with '*'
	//use '!' to represent the mines
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//DisplayBoard(mine, ROW, COL);
	//set the mines
	SetMines(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//clear the mines
	FindMines(mine, show, ROW, COL);
}

int main()
{
	int choice;
	srand((unsigned int)time(NULL));
    do
	{
		menu();
		printf("Enter your choice: ");
		if (scanf("%d", &choice) != 1 || choice < 0 || choice > 1)
		{
			printf("Invalid input!\n");
			while (getchar() != '\n');
		    continue;
		}

		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("You have chosen to exit\n");
			return 0;
		}
	}while (choice!= 0);
	return 0;
}