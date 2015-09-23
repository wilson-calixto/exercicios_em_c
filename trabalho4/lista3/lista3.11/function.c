/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 14 da Lista 2
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

int i = 0, j = 0, saldo[3], opr[3], valor[3]; // declara variaveis globais
char conta[6],conta2[6];		      // ---------*------*--------
char nome[20], tipo[1];			      // ---------*------*--------


void addopr(char x[6]) //adiciona operações
{
     
     if(opr[j] >= 0) 
        opr[j]++;
     else
     	j++;

     strcpy (conta, x); //copia o conteudo de 'x' para a variavel 'conta'
     printf("(c) - Credito\t(d) - Debito: \n");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", tipo); //recebe do usuario o tipo de operação
     printf("Valor da operacao: ");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%d",&valor[j]); //recebe o valor da operação
     setbuf(stdin, NULL); //limpa buffer do teclado

     main(); //invoca funçao principal
}

void addcliente() //funçao para adicionar clientes
{
     printf("digite seu nome: \n"); 
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", nome); //recebe o nome do cliente
     setbuf(stdin, NULL); //limpa buffer do teclado
     printf("digite o numero de sua conta: \n"); 
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", conta); //recebe o numero da conta
     printf("digite seu saldo: \n");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%d",&saldo[i]); //recebe o saldo da conta
     setbuf(stdin, NULL); //limpa buffer do teclado
     i++; //incrementa o numero de clientes
     
     addopr(conta); //adiciona operação
     
     main(); //invoca função principal
}

void mostrar() //mostra contas cadastradas
{
     for(i=0;i<3;i++) 
      {
         if(saldo[i] != 0) //verifica se o saldo é '0'
            printf("nome: %s\tconta: %s\tsaldo: %d\tOperacoes Realizadas: %d\n", nome, conta, saldo[i], opr[i]);
      }		//^_ mostra a conta do usuario
     
     main();  //invoca funçao principal
}

void mostraroprs() //mostra operações realizadas
{
	for(j=0;j<3;j++)
	{
		if(valor[j] != 0) // verifica se o valor é '0'
			printf("conta: %s\tOperacoes: %d\ttipo: %s\tvalor: %d\n",conta, opr[i], tipo, valor[i]);
	}		//^_ mostra as operações realizadas com o tipo e valor.

	main(); //invoca funçao principal
}
