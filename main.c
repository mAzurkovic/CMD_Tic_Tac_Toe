#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_LEN 100

void disp(void)
{
	printf("Welcome to Command-Line TIC TAC TOE!\n");       
        printf("To choose where you want to put your X / O, at your turn just press the quadrant number.");
	printf("\n");
	printf("  1  |  2  |  3  \n");
	printf("-----|-----|-----\n");
	printf("  4  |  5  |  6  \n");
	printf("-----|-----|-----\n");
        printf("  7  |  8  |  9  \n");
}

int board(int pos)
{
	if (pos == 1)
	{
        	printf("  X  |     |     \n");
        	printf("-----|-----|-----\n");
        	printf("     |     |     \n");
      		printf("-----|-----|-----\n");
        	printf("     |     |     \n");
	}

}

int usrTurn(char *resp)
{

	if (strcmp(resp, "1") == 0)
	{
		board(1);	
	}

}

int main(int argc, char *argv[])
{
	char cmd[MAX_LEN];

	disp();
	printf("Begin Game [y / n]: ");
	scanf("%s", cmd);

	if (strcmp(cmd, "y") == 0)
	{
		printf("Where would you like to place your X?: ");
  		scanf("%s", cmd);
		usrTurn(cmd);
	}

}

