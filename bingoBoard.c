#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

#define BINGONUM_HOLE    -1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE];

void bingo_init(void)
{
	int i,j;
	int cnt=1;
	
	
	for (i=0;i<N_SIZE;i++)
		for (j=0;j<N_SIZE;j++)
			{
				if(cnt==15) 
				{
	
					bingoBoard[i][j]=BINGONUM_HOLE;
					numberStatus[cnt-1]=BINGONUM_HOLE;
					cnt++;
				}
				else
				{
			
					numberStatus[cnt-1]=N_SIZE*i+j;
					bingoBoard[i][j]=cnt++;
				}
			}
}


void bingo_print(void){

		int i,j;
		printf("===================================\n");
		for (i=0;i<N_SIZE;i++){
			for(j=0;j<N_SIZE;j++)
			{	
				if (bingoBoard[i][j]==BINGONUM_HOLE)
					printf("x\t");
				else
				printf("%i\t",bingoBoard[i][j]);
			}
			printf("\n");
		}
		
	printf("===================================\n\n");
}


void bingo_inputNum(int sel){
	int i,j;
	/*printf("select a number : ");
	scanf("%i",sel);*/
	i = numberStatus[sel-1]/N_SIZE;
	j = numberStatus[sel-1]%N_SIZE;
	bingoBoard[i][j]=BINGONUM_HOLE;
}

int bingo_countCompletedLine(void){
	
}

	
/*
int main(int argc, char *argv[]) {
	
bingo_init();
bingo_print();
	
	
	return 0;
}*/
