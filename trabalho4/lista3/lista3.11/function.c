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

int i = 0, j = 0, saldo[3], opr[3], valor[3];
char conta[6],conta2[6];
char nome[20], tipo[1];

void addcliente();
void mostrar();
void addopr(char x[6]);
void mostraroprs();


void addcliente()
{
     printf("digite seu nome: \n");
     setbuf(stdin, NULL);
     scanf("%s", nome);
     setbuf(stdin, NULL);
     printf("digite o numero de sua conta: \n");
     setbuf(stdin, NULL);
     scanf("%s", conta);
     printf("digite seu saldo: \n");
     setbuf(stdin, NULL);
     scanf("%d",&saldo[i]);
     setbuf(stdin, NULL);
     i++;
     
     addopr(conta);
     
     main();
}

void mostrar()
{
     for(i=0;i<3;i++)
      {
         if(saldo[i] != 0)
            printf("nome: %s\tconta: %s\tsaldo: %d\tOperacoes Realizadas: %d\n", nome, conta, saldo[i], opr[i]);
      }
     
     main();  
}

void addopr(char x[6])
{
     
     if(opr[j] >= 0)
        opr[j]++;
     else
	     j++;

     strcpy (conta, x);
     printf("(c) - Credito\t(d) - Debito: \n");
     setbuf(stdin, NULL);
     scanf("%s", tipo);
     printf("Valor da operacao: ");
     setbuf(stdin, NULL);
     scanf("%d",&valor[j]);
     setbuf(stdin, NULL);

     main();
}

void mostraroprs()
{
	for(j=0;j<3;j++)
	{
		if(valor[j] != 0)
			printf("conta: %s\tOperacoes: %d\ttipo: %s\tvalor: %d\n",conta, opr[i], tipo, valor[i]);
	}

	main();
}
