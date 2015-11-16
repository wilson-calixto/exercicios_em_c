#include "calcula_target.h"
#include "dist.h"
void inky(int pacman[3], int target[2])
{
	int red[3], a, b;
	
	printf("insira a linha do red: ");
	scanf("%d", &red[0]);
	printf("insira a coluna do red: ");
	scanf("%d", &red[1]);
	dist(pacman);
       calcula_target(red, pacman, target);                         
}

