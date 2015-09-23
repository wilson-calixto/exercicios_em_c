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
	char aux[6]; // String de tamanho 5 

	int op = 0; //declara e inicia a variavel 'op'(opçao).
	
	printf("Escolha a operacao\n(1) - Adicionar\n(2) - Mostrar todos clientes\n(3) - Adicionar operacao\n(4) - Mostrar operacoes\n(5) - Sair\n\n-->");
	setbuf(stdin, NULL); //limpar o buffer do teclado
	scanf("%d",&op); //recebe a opçao do usuario.


	switch(op)
	{
		case 1:
			addcliente(); //adicniona cliente
			break;

		case 2:
			mostrar(); //mostra clientes ja cadastrados
			break;

		case 3:
			printf("digite o numero de sua conta: ");  
			setbuf(stdin, NULL); //limpa buffer do teclado
			scanf("%s", aux); //recebe o numero da conta
			setbuf(stdin, NULL); //limpa buffer do teclado
			addopr(aux); // para a dada conta adiciona o nº de operaçoes informados.
			break;

		case 4:
			mostraroprs(); //mostra operações realizadas.
			break;

		case 5:
			exit(0); //finaliza o loop, fechando o programa.
			break;

		default:
			printf("Operacao inválida !\n");
			break;
	}
}
