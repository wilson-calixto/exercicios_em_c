#include <stdio.h>

int ghost_choice()
{
	int g;
	printf("Escolha o fantama:\n1.BLINKY (vermelho)\n2.PINKY (rosa)\n3.INKY (azul)\n4.CLYDE (laranja)\n");
	scanf("%d", &g);
	
	return g;
}

int position_choice(int lc)
{
	int p;
	if (lc == 0)
		printf("\nEscolha a linha: \n");
	else if (lc == 1)
		printf("\nEscolha a coluna: \n");
	else if (lc == 2)
		printf("\nEscolha a direcao: \n");
		
	scanf("%d", &p);
	
	return p;
}

void print_target(int target[2])
{
	printf("\nlinha: %d\n", target[0]);
	
	printf("\ncoluna: %d\n", target[1]);
}

void clear_screen()
{
	system("clear");
}

void print_name(int g)
{
	switch (g)
	{
		case 1:
			printf("\nBLINKY");
			break;
		case 2:
			printf("\nPINKY");
			break;
		case 3:
			printf("\nINKY");
			break;
		case 4:
			printf("\nCLYDE");
			break;
	}
}


void import_maze(char **maze)
{
	int i,j;
	
	printf("Importando matriz\n");	
	for (i = 0; i < 23; i++)
	{
		for (j = 0; j < 30; j++)
		{
			scanf("%c", &maze[i][j]);
			printf("%c", maze[i][j]);
		}
	}
	
}

void print_maze(char **maze)
{
	int i,j;
	
	printf("   ");
	
	for (i = 0; i < 30; i++)
	{
		if (i < 10)
			printf(" 0%d", i);
		else 
			printf(" %d", i);
	}	
	
	printf("\n");
	
	for (i = 0; i < 23; i++)
	{
		if (i < 10)
			printf("0%d ", i);
		else 
			printf("%d ", i);
			
		for (j = 0; j < 30; j++)
		{
			switch (maze[i][j])
			{
				case '0':
					printf("[X]");
					break;
				case ' ':
					printf("   ");
					break;
				case '7':
					printf("   ");
					break;
				case '6':
					printf("   ");
					break;
				case 'T':
					printf(" T ");
					break;
				case 'G':
					printf(" G ");
					break;
				case 'R':
					printf(" R ");	
					break;
				case '8':
					printf("   ");
					break;		
				case '+':
					printf(" + "); 
					break;
				case 'P':
					printf(" P ");
					break;
					
				default:
					printf(" ? ");
					break;
			}
		}
		printf("\n");
	}
	printf("\n");
}
