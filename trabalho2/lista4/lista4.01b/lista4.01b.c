/*
 *  *  Programação de Computadores e Algoritmos
 *   * Trabalho 2
 *    *Questão 2.23
 *     Equipe: Benjamin Borges
 *     Davi Tavares
 *     Paulo Henrique
 *     Lucas Frota
 *     Luiz Fernando
 *     
 */

#include <stdio.h>

int main ( int argc, char *argv[] )
{
	int num1, num2;
	printf ( "Digite o primeiro numero\n" );
	scanf ( "%d", &num1 );
	printf ( "Digite o segundo numero\n" );
	scanf ( "%d", &num2 );
	
	if (eh_permut(num1,num2)  && (qtd_num(num1) == qtd_num(num2)))
	{
		printf ( "É permutação\n" );
	}else
	{
		printf ( "Não é permutação\n" );
	}

	return 0;
}
