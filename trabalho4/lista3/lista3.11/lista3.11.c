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
#include <string.h>

int i = 0, j = 0, saldo[3], opr[3], valor[3];
char conta[3][6],conta2[3][6];
char nome[3][20], tipo[3][1];

main()
{
	char aux[6];

	int op = 0;
	printf("Escolha a operacao\n(1) - Adicionar\n(2) - Mostrar todos clientes\n(3) - Adicionar operacao\n(4) - Mostrar operacoes\n(5) - Sair\n\n-->");
	setbuf(stdin, NULL);
	scanf("%d",&op);


	switch(op)
	{
		case 1:
			addcliente();
			break;

		case 2:
			mostrar();
			break;

		case 3:
			printf("digite o numero de sua conta: ");
			setbuf(stdin, NULL);
			scanf("%s", aux);
			setbuf(stdin, NULL);
			addopr(aux);
			break;

		case 4:
			mostraroprs();
			break;

		case 5:
			exit(0);
			break;

		default:
			printf("Operacao inválida !\n");
			break;         
