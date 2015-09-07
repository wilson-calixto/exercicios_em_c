/*
Programação de Computadores e Algoritmos
 Trabalho 2
 Questao 3.4
 
Equipe:
	Evandro Fernandes
	Jackson Gomes
	Jéssica Kelly
	Paulo Marinho
	Robson Borges	
	Rodrigo Oliveira
	
 */

#include <stdio.h>

float maior(float pri, float seg)//Função para comparar dois números e saber quem é o maio
{
	float resul;
	if (pri >= seg)//Se o primeiro número é maior que o segundo
	{
		resul = pri;//O resultado será o primeiro
	}
	if (seg >= pri)//Se o segundo número é maior que o primeiro
	{
		resul = seg;//O resultado será o segundo
	}
	
	return resul;//Retorna o resultado da comparação
}

int main(int argc, const char *argv[])
{
	float prime, sege, func;
	printf("Digite o primeiro valor» \n");
	scanf("%f", &prime);//Lê primeiro número
	printf("Digite o segundo valor» \n");
	scanf("%f", &sege);//Lê o Segundo Número

	func = maior(prime, sege);//Variavel para receber o retorno da função

	printf("O maior número é %.2f.\n", func);
}
