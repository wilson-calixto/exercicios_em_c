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

#include	"../../util.c/util.h"
#include	<stdio.h>
/*
int qtd_num(int num)
{
	int contador;
	if ( num != 0  )
	{
		if ( num < 0 ) 
		{
			num = num*(-1);
		}
		for ( contador = 0; num >  0 ;  contador++  ) 
		{
			num = num / 10;
		}
		return contador;
	}else
	{
		return 1;
	}
}
*/
int main ( int argc, char *argv[] )
{	
	int num;
	scanf ( "%d", &num );
	printf("Quantidades de  numeros é = %d\n", qtd_num(num));
	return 0;
}				/* ----------  end of function main  ---------- */
