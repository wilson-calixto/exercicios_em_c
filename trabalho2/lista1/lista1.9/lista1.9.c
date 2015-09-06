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
 *     Autor: Juliany Raiol
 *
 * / */
 
#include <stdio.h>

void inversoNumero(int num)
{
	while(num!=0)
	{
		printf("%d",num%10);
		num/=10;
	}
}

int main()
{
	int i, tam,numero
	scanf("%d",&numero);
	inversoNumero(numero);
	printf("\n");
	return 0;
} 