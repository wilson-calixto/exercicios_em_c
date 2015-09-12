/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 2
 *     Questão 1.3
 *     Equipe: Benjamin Borges
 *     Davi Tavares
 *     Paulo Henrique
 *     Fernando Calderaro  ??
 *     Lucas Frota
 *     Luiz Fernando
 *    
 *   

 */

#include         "soma.h"
#include	<stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: lista1.3.c 
 *  Description: Somatorio de argumentos 
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	float num1, num2, num3;
	printf ( "Digite o primeiro numero\n");
	scanf ( "%f", &num1 );
	printf ( "Digite o segundo numero\n" );
	scanf ( "%f", &num2 );	
	printf ( "Digite o terceiro numero\n" );
	scanf ( "%f", &num3 );
	printf ( "A soma dos tres numeros  = %.2f\n", soma(num1,num2,num3) );
	return 0;
}				/* ----------  end of function main  ---------- */
