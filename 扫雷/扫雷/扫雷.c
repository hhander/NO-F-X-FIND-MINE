#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	/*DisplayBoard(mine, ROW, COL);*/
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
	//DisplayBoard(show, ROW, COL);
}






void menu()
{
	printf("************************\n");
	printf("******  1 .play  *******\n");
	printf("******  0. quit  *******\n");
	printf("************************\n");
}



void test()
{
	int input = 0;
	do
	{
	    srand((unsigned int)time(NULL));
		menu();
		printf("«Î—°‘Ò\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("ÕÀ≥ˆ”Œœ∑");
			break;
		}
		default:
		{
			printf("error");
			break;
		}
		}	
	} while (input);
}

int main()
{
	test();
	return 0;
}