/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.07.c
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

int perfect(int num)
{
	int num, cont=1, comp;
	while(num-1>cont);/*percorre até o próprio número -1, pois o próprio numero não conta para a verificação do número perfeito*/
	{
		if (num%cont==0)
		{
			comp+=cont;		
		}
	cont++
	}		
	if(comp==num)/*se o comp, que seria a soma dos divisores for igual ao numero, retorne TRUE*/
	{
		return 1;
	}
	else/*Se não, retorne Falso*/
	{
		return 0;
	}
}
