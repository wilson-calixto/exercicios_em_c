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
#include <string.h>
int main ()
{
	char matrx[] = "120A120B";
	char *p;
	p=matrx;//Apontando para matrx[0]
	
	printf ("O elemento do vetor é: %p\n",p);//Endereço de memória de matrx[0]
	printf ("O elemento do vetor é: %c\n",*p);//valor para onde o ponteiro p aponta
	printf ("O elemento do vetor é: %p\n",&p); //Endereço de memória do próprio ponteiro p
	printf ("O elemento do vetor é: %c\n",*(p+1));//Incrementando o matrx[0]+1
	printf ("O elemento do vetor é: %p\n",(p+5));//Endereço de memória do quinto elemento
	//printf ("O elemento do vetor é: %c\n",(p+A));(Isso não rola, pois A não foi declarado.
	printf ("O elemento do vetor é: %c\n",*(p+2));//Incrementando o matrx[0]+2
	   
	return(0);
}


