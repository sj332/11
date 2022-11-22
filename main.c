#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.c"
#define BINGO_RES_UNFINISHED	-1
#define BINGO_RES_FINISHED	0


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_number(void)
{
	int selNum=0;
	
	do{
		printf("select a number: ");
		scanf("%d",&selNum);
		fflush(stdin);
		
		if (selNum<1||selNum>N_SIZE*N_SIZE||bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n",selNum);
		}
	} while(selNum<1||selNum>N_SIZE*N_SIZE||bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT);

		return selNum;
	}
	
int check_gameEnd(void)
{
	int res=BINGO_RES_UNFINISHED;
	if(bingo_countCompletedLine()>=N_LINE) //
		res=BINGO_RES_FINISHED;
	return res;
}

int main(int argc, char *argv[])  {
	
	srand((unsigned)time(NULL));	
	 
	printf("==============================\n");
	printf("******************************\n");
	printf("          BINGO GAME          \n");
	printf("******************************\n");
	printf("==============================\n\n\n");
	
	int selNum;
	
	bingo_init();
	/*
	selNum=get_number();
	bingo_inputNum(selNum);
	bingo_print();*/
	
	while(check_gameEnd()==BINGO_RES_UNFINISHED)
	{
		bingo_print();
		
		printf("No. of completed line: %i\n",bingo_countCompletedLine());
		
		selNum=get_number();
		
		bingo_inputNum(selNum);
	}
	
/*
	selNum=get_number();
	bingo_inputNum(selNum);*/
	
	//bingo_print();
	

	
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
	
	bingo_print();
	
	return 0;
}
