/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 09 da Lista 2
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/


#include <stdio.h>
#include <stdlib.h>
#include"f2.9.h"

/*O programa tem como funcao receber um numero determinado pelo usuario (no caso esse programa recebe os numeros por meio de um arquivo do
tipo .txt, para testa-lo basta compilar o programa pelo terminal, e ao executar escrever no shell "./lista2.9 <teste_de_programa" e pressionar
enter, para fazer alteracoes nos valores de teste basta muda-los diretamente no arquivo "teste_de_programa.txt", uma vez q a primeira linha 
desse arquivo corresponde ao numero de elementos em cada vetor, se o numero colocado na primeira linha for por exemplo "3", seis valores 
terao que ser colocados em baixo, separados por uma quebra de linha é claro, desses seis, tres sao do primeiro vetor e os demais sao do
segundo) os numeros estaram em suas respectivas lista desse modo o programa ira transformar os numeros dos vetores em um unico numero e
soma-los, se no primeiro vetor os numeros forem {2, 4, 5} e no segundo forem {3, 2, 4} eles virarao 245 e 324, e o resultado final sera a soma
deles, de modo que o resultado seria 569.
*/

int main(int argc, const char *argv)
{
	int n, c, ac1 = 0, ac2 = 0,cd1, cd2, *v1, *v2;
    printf ( "Digite o tamanho dos vetores a serem somados:" );
	scanf("%d", &n);
	v1 = (int*) malloc(sizeof(int) * n); //essa linha e a de baixo indicam o tamanho do vetor
	v2 = (int*) malloc(sizeof(int) * n);
    printf ( "lendo o primeiro vetor...\n" );
	for (c = 0; c < n; c++)// essa linha prenche o primeiro vetor 
	{
		int n1;
        printf ( "Digite o valor número %d\n",c+1 );
		scanf("%d", &n1);
		v1[c] = n1;
	}
    printf ( "lendo o segundo vetor...\n" );
	for (c = 0; c < n; c++)// essa linha prenche o segundo vetor
	{
		int n2;
        printf ( "Digite o valor número %d\n",c+1 );
		scanf("%d", &n2);
		v2[c] = n2;
	}

	for (c = 0; c < n; c++)// nessa linha os valores do vetor 1 sao tranformados em um unico valor
	{
		ac1 = ac1 + (v1[c] * (pot(10,(n -1 -c))));
	}
	for (c = 0; c < n; c++)// nessa linha os valores do vetor 2 sao tranformados em um unico valor
	{
		ac2 = ac2 + (v2[c] * (pot(10,(n -1 -c))));
	}
	
	printf("O resultado da soma é: %d\n", ac1 + ac2);// resultado final

	free(v1);
	free(v2);
}
