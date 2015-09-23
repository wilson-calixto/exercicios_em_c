/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 11 da Lista 3
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/

#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <string.h>


main()
{
	char aux[6]; // String de tamanho 6

	int op = 0; //declara e inicia a variavel 'op'(opção).
	
	printf("Escolha a operacao\n(1) - Adicionar\n(2) - Mostrar todos clientes\n(3) - Adicionar operacao\n(4) - Mostrar operacoes\n(5) - Sair\n\n-->");
	setbuf(stdin, NULL); //limpar o buffer do teclado
	scanf("%d",&op); //recebe a opçao do usuario entre os números escolhidos.


	switch(op) //escolha da opção
	{
		case 1:
			addcliente(); //chamar função adicniona cliente
			break; // parar

		case 2:
			mostrar(); //chamar função mostra clientes ja cadastrados
			break; // parar

		case 3:
			printf("digite o numero de sua conta: ");  
			setbuf(stdin, NULL); //limpa buffer do teclado
			scanf("%s", aux); //recebe o numero da conta em string
			setbuf(stdin, NULL); //limpa buffer do teclado (dados recebidos no teclado)
			addopr(aux); // para a conta dada adiciona o nº de operaçoes informados. Chamar função add operação
			break; // parar

		case 4:
			mostraroprs(); //chamar função mostra operações realizadas.
			break; // parar

		case 5:
			exit(0); //finaliza o loop de opções, fechando o programa.
			break; // parar

		default:
			printf("Operacao inválida !\n"); // caso nenhuma opção seja valida
			break; // parar
	}
}
