/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 1.8
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Paulo Henrique 
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *    
 *  */



#include	"include ../../util.c/util.h"
#include	<include stdio.h>

int iterate_number(int num)
{	
	int aux=1;
	for (i=1,impar=1;i<num;i++,impar+2)
	{
		printf ( "%d/%d\n", aux+impar );
		aux = aux+impar
	}
		return aux;
}

int main ( int argc, char *argv[] )
{
	iterate_number(3);
	return 0;
}				/* ----------  end of function main  ---------- */

