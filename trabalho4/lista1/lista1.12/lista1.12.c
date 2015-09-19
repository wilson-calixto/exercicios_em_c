/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista1.12
 *
 * Equipe:
 *
 *          Jackson Gomes
 *          Paulo Marinho
 *          Hermann
 *          Elizabeth
 *          Jailson
 */

#include <stdio.h>
int main ()
{
	int matrx [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p;
	p=&matrx[0];//Apontando para matrx[0]
	
	printf ("O elemento do vetor e: %p\n",p);//Endereço de memória de matrx[0]
	printf ("O elemento do vetor e: %d\n",*p);//valor para onde o ponteiro p aponta
	printf ("O elemento do vetor e: %p\n",&p); //Endereço de memória do próprio ponteiro p
	printf ("O elemento do vetor e: %d\n",*(p+1));//Incrementando o matrx[0]+1
	printf ("O elemento do vetor e: %p\n",(p+5));//Endereço de memória do quinto elemento
	//printf ("O elemento do vetor e: %p\n",(p+A));
	printf ("O elemento do vetor e: %d\n",*(p+2));//Incrementando o matrx[0]+2
	

   
	return(0);
}


