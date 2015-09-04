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

/*float iterate_number(int num)
{	
	float aux=1, impar, i;
	float acumulador = 0;
	for (i=1,impar=1;i<=num;i++)
	{
		printf ( "%.0f/%.0f\n", aux+impar,i+3);
		acumulador = acumulador + ((aux+impar)/(i+3));
		
		aux = aux+impar;
		impar = impar+2;
	}
		return acumulador;
}
*/
int main ( int argc, char *argv[] )
{
	int qtdseq;
	printf ( "Digite a quantidade de seq..\n" );
	scanf ( "%d", &qtdseq );
	printf("Somatorio da sequencia = %.2f\n", iterate_number(qtdseq));
	return 0;
}				/* ----------  end of function main  ---------- */

