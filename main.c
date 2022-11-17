#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));	
	
	printf("==============================\n");
	printf("******************************\n");
	printf("          BINGO GAME          \n");
	printf("******************************\n");
	printf("==============================\n\n\n");
	
	
	
	bingo_init();
	bingo_print();
	bingo_inputNum(24);
	bingo_print();
	
	
	//generate numbers
	//initialize bingo boards
	//while (game is not end)
	/*
	{
		//bingo board printing
		//print no. of completed lines
		//select a proper number
		//put the number on the board
		
		}
	*/
	
	
	printf("\n\n\n\n\n\n\n\n\n");
	printf("==============================\n");
	printf("******************************\n");
	printf("       CONGRATULATION!!!      \n");
	printf("      (*   BINGO!!!!  #)      \n");
	printf("          YOU WIN!!!!         \n");
	printf("******************************\n");
	printf("==============================\n\n");

	
	
	
	
	return 0;
}
