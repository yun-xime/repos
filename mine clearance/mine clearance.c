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
	//mine array will be initialized with '0'
	//show array will be initialized with '?'
	//use '*' to represent the mines
	InitMines(mine, ROWS, COLS,'0');
	InitMines(show, ROWS, COLS,'?');
}

int main()
{
	int choice;

    do
	{
		menu();
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("You have chosen to exit\n");
			return 0;
		default:
			printf("Invalid choice\n");
			break;
		}
	}while (choice!= 0);
	return 0;
}