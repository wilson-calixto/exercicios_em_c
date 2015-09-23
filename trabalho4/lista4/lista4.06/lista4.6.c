/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 6 da Lista 4
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/

#include <stdio.h>
#include <stdlib.h>

/*
O programa tem como principal funcao receber o uma matriz 8x8 (64 
elementos), nessa matriz estao contidas somente strings. apos a entrada
dos valores uma funcao chamada "tabela" converte as strings em inteiros
sendo que cada string correspnde a um valor que esta determinado na questao, a funcao "tabela" retorna um valor inteiro que eh somado a um 
acumulador (no caso de nome "ac") q soma os valores das pecas, e ao
final o resultado eh impresso na tela.
os valores devem ser inseridos no arquivo "teste_de_programa".
*/

int main(int argc, const char *argv)
{
	char v1[8][8][10];//na matriz "v1" o "[8][8]" corresponde ao tamanho da matriz e o "[10]" a quantidade de caracteres das strings
	int i, j, ac = 0;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
            printf ( "insira o nome da peça na posição |%d|%d| \n", i+1, j+1 );
			scanf("%s", v1[i][j]);
		}
	}
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			ac = ac + tabela(v1[i][j]);
		}
	}
	printf("O somatório do valor das peças é:%d\n", ac);
}
