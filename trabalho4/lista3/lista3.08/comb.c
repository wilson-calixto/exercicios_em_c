/*
* Programacao de Computadores e Algoritmos
* Trabalho 4
* Questao 3.08
* Equipe: 	Wilson Neto
* 		Sergio Pinheiro
* 		Andressa Moreira
* 		Benjamim Borges
*		Gabriel Faraco
*
* */

#include <stdio.h>
#include <stdlib.h>
#include "../../util.c/util.h"


int comb(int a, int b)
{
	//s2 return complexos
	//C(a,b)
	//fat(a) / (fat(b) * fat(a-b))
	return (fatorial(a) / (fatorial(b) * fatorial(a-b)));
}
