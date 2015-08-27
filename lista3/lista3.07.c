/*
Programação de computadores e Algoritmos
Trabalho 1
Questão 3.07

Equipe:
Evandro Fernandes
Wilson Neto
John Lucas
Jessica Kelly
Fernando Antonio
Jailson Pereira
Juliany Raiol
Raí Santos*/

#include<stdio.h>

int main ( int argc, const char* agrv[])
{
        int i,numeros[5],maior;

        for(i=1;i<6;i++)
        {
           printf("Digite o %d° número: \n",i);
           scanf("%d",&numeros[i]);
        }

        maior=numeros[1];

        for(i=1;i<6;i++)
        {
              if(numeros[i]>maior)
                {
                 maior=numeros[i];
                }
        }

        printf("O maior numero: %d \n",maior);
        return 0;
}

