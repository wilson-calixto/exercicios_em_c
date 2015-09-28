/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.10
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
#include <math.h>
#include "derivada.h"

float xanterior, x, epsilon, a[100], b[100];
int i, n, nromaximodeiteracoes, iteracoes;

 int main(int argc, const char *argv[]){
	printf("Digite a qtde da sequencia do polinomio: \n");	
	scanf("%d",&n);
	for (i=1; i<=n+1;i++){
		printf("Digite o %d valor",i);
		scanf("%f", &a[i]);
	}
	scanf ("%f",&xanterior);
	scanf ("%f",&epsilon);
	scanf ("%d",&nromaximodeiteracoes);
	
	derivada(a,b,n);
	
        iteracoes=0;
	
	x=xanterior - ((valor_polinomio(a,xanterior,n))/(valor_polinomio(b,xanterior,n-1)));
	
	while(abs(x-xanterior)>=epsilon && iteracoes <= nromaximodeiteracoes){
			x=xanterior - ((valor_polinomio(a,xanterior,n))/(valor_polinomio(b,xanterior,n-1)));
			iteracoes=iteracoes+1;
	}
	return 0;
}
