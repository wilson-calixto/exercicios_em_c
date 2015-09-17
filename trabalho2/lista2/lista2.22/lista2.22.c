/*
Programaçao de Computadores e Algoritmos

Trabalho 3

Equipe:
	Delrick Oliveira
	Gabriel Faraco
	Jackson Kelvin
	Manoel Victor
	Rai Santos
	Sergio Pinheiro

*/

#include <stdio.h>
#include "Fatorial_Inverso.h"

int main(int argc, const char *argv[])
{
	int n; //numero

	puts("Informe um numero:");
	scanf("%d",&n); //pede ao usuario o ultimo 'n' da sequencia s = 1 + 1/1! + 1/2! +...+ 1/n!

	printf("O resultado é %1.2f\n",(float) calc_num(n));//Informa ao usuario o resultado do calculo mostrado acima.	
	return 0;
}
