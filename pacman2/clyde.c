/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 
 * clyde.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Elisabeth castro
 *      Ewerton Petillo
 *      Richardson Souza
 *      Lucas Frota
 */

//#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dist (int ghost[3], int pac[3])
{
    int a;
	a = sqrt((pow((ghost[0]-pac[0]),2)) + (pow((ghost[1]-pac[1]),2)));

    return a;
}

void  clyde(int ghost[3],int pac[3], int target[2])
{
	int d;
	d = dist(ghost, pac);
	if (d > 8)
	{
		target[0]= pac[0];
		target[1]= pac[1];
	}
	else
	{
		target[0]= 21;
		target[1]= 1;
	}
	
	//maze[t[0]][t[1]] = 'T';
	
}


