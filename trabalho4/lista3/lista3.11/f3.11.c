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


void addopr(char x[6]) //função add operação
{
     
     if(opr[j] >= 0) //condição para funcionar
        opr[j]++;//incrementar operação
     else
     	j++;//incrementar contador

     strcpy (conta, x); //copia o conteudo de 'x' para a variavel 'conta'.
     printf("(c) - Credito\t(d) - Debito: \n");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", tipo); //recebe do usuario o tipo de operação em char
     printf("Valor da operacao: ");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%d",&valor[j]); //recebe o valor da operação em Int
     setbuf(stdin, NULL); //limpa buffer do teclado

     main(); //invoca funçao principal depois da operação
}

void addcliente() //funçao para adicionar clientes novos
{
     printf("digite seu nome: \n"); 
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", nome); //recebe o nome do cliente em string
     setbuf(stdin, NULL); //limpa buffer do teclado
     printf("digite o numero de sua conta: \n"); 
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%s", conta); //recebe o numero da conta em string (seria melhor em inteiro)
     printf("digite seu saldo: \n");
     setbuf(stdin, NULL); //limpa buffer do teclado
     scanf("%d",&saldo[i]); //recebe o saldo da conta em Int
     setbuf(stdin, NULL); //limpa buffer do teclado
     i++; //incrementa o numero de clientes no contador
     
     addopr(conta); //adiciona operação na função 'add operação'
     
     main(); //invoca função principal depois da operação
}

void mostrar() //mostra contas cadastradas existentes
{
     for(i=0;i<3;i++) //condição de existencia
      {
         if(saldo[i] != 0) //verifica se o saldo é diferente de '0'
            printf("nome: %s\tconta: %s\tsaldo: %d\tOperacoes Realizadas: %d\n", nome, conta, saldo[i], opr[i]);
      }		//^_ mostra a conta do usuario com o nome, a conta, o saldo e as operações realizadas
     
     main();  //invoca funçao principal depois da operação
}

void mostraroprs() //mostra operações realizadas do usuario
{
	for(j=0;j<3;j++) // condição de existência
	{
		if(valor[j] != 0) // verifica se o valor é diferente de '0'
			printf("conta: %s\tOperacoes: %d\ttipo: %s\tvalor: %d\n",conta, opr[i], tipo, valor[i]);
	}		//^_ mostra as operações realizadas com o tipo e valor do usuario.

	main(); //invoca funçao principal depois da operação
}
