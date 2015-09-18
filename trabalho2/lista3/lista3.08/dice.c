/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.08.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas Botinelly
 *          Richardson
 *          Wilson Calisto 
 */
#include<stdio.h>
#include<stdlib.h> /*para utilizar a função rand() */
#include<time.h> /*para usar o srand, enviando com "semente" o horário do sistema, para os valores não se repetirem*/
int dice()
{
	srand(time(NULL));
	return ("%d\n", 1+ (rand() % 6));	
}

