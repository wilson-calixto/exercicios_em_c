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
char conta[3][6],conta2[3][6];
char nome[3][20], tipo[3][1];

void addcliente()
{
     printf("digite seu nome: \n");
     scanf("%s", nome);
     printf("digite o numero de sua conta: \n");
     scanf("%s", conta);
     printf("digite seu saldo: \n");
     scanf("%d",&saldo[i]);
     i++;
     
     addopr(conta[i]);
     
     main();
}

void mostrar()
{
     for(i=0;i<3;i++)
      {
         if(saldo[i] != 0)
            printf("nome: %s\tconta: %s\tsaldo: %d\tOperacoes Realizadas: %d\n", nome[i], conta[i], saldo[i], opr[i]);
      }
     
     main();  
}

void addopr(char x[6])
{
     
     if(opr[j] >= 0)
        opr[j]++;
     else
        j++;
           
     strcpy (conta2[j], x);
     printf("(c) - Credito\t(d) - Debito: \n");
     scanf("%s", tipo);
     printf("Valor da operacao: ");
     scanf("%d",&valor[j]);
     
     main();
}

void mostraroprs()
{
    for(j=0;j<3;j++)
      {
         if(valor[j] != 0)
            printf("conta: %s\tOperacoes: %d\ttipo: %s\tvalor: %d\n",conta2[j], opr[j], tipo[j], valor[j]);
      }
      
      main();
}

