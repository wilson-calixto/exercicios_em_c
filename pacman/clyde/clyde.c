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

#include <stdio.h>
#include <math.h>

int main () 
{

}


float distancia (int ghost[3], int pac[3])
{
    float a;
	a = sqrt((pow((ghost[0]-pac[0]),2)) + (pow((ghost[1]-pac[1]),2)));

    return a;
}

int clayde(int ghost[3],int pac[3])
{
	int t[2];
	float d;
	d= distancia(ghost,pca);
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
	return t;
}


