#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

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

void usrTurn(void)
{
	char *resp;	

	printf("Where would you like to place you X?: ");
	scanf("%s", resp);
}

int main(int argc, char *argv[])
{
	char *cmd;

	disp();
	printf("Begin Game [y / n]: ");
	scanf("%s", cmd);

	if (strcmp(cmd, "y") == 0)
	{
		usrTurn();
	}

}

