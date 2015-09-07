/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 5
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 * * / */
 
#include <stdio.h>

int main()
{
	//Declaração de variáveis
	int i, tam,numero;
	
	//Recebendo os valores de entrada
	printf("Digite um Numero: ");
	scanf("%d",&numero);
	
	//Imprimindo o reverso do numero digitado
	printf("Inverso do numero %d eh: ",numero);
	inversoNumero(numero);
	
	printf("\n");
	return 0;
} 