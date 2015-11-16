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

int * clyde(int ghost[3],int pac[3])
{
	int *t = (int *) malloc(sizeof(int)*2);
	int d;
	d = dist(ghost, pac);
	if (d > 8)
	{
		t[0]= pac[0];
		t[1]= pac[1];
	}
	else
	{
		t[0]= 22;
		t[1]= 0;
	}
	
	//maze[t[0]][t[1]] = 'T';
	
	return t;
}


