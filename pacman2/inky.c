#include "calcula_target.h"
#include "dist2.h"
#include <stdio.h>

void inky(int pacman[3], int target[2])
{
       int red[3];
       printf("Insira a linha do Ghost Red: ");
       scanf("%d", &red[0]);
       printf("Insira a coluna do Ghost Red: ");
       scanf("%d", &red[1]);
       printf("Insira a direção do Ghost Red: ");
       scanf("%d", &red[2]);

       dist2(pacman);
       calcula_target(red, pacman, target);                         
       verifica_target(maze, target);
       
}


