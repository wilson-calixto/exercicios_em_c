/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 2.23
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Paulo Henrique 
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *    
 *  */


#include        "iterate_number.h"
#include	<stdio.h>

int main ( int argc, char *argv[] )
{
	int qtdseq;
	printf ( "Digite a quantidade de seq..\n" );
	scanf ( "%d", &qtdseq );
	printf("Somatorio da sequencia = %.2f\n", iterate_number(qtdseq));
	return 0;
}				/* ----------  end of function main  ---------- */

