/*programação de computadores  e algoritmos
trabalho 1
questão 3.08
Equipe:
     Evandro fernandes
     Wilson neto
     John Lucas
     Jessica Kelly
     Fernando Antonio
     Jailson Pereira
     Juliany Raiol
     Raí santos*/
#include<stdio.h>

int main(int argc,const char *argv[])
 {
   int num,media,soma,i;
   soma=0;
     
   for(i=0;i<5;i++)
     {
       printf("digite um número:\n");
       scanf("%d",&num);
       soma=soma+num;
       media=soma/5;
     }
 

  printf("A soma  %d\n",soma);
  printf("a media %d\n",media);
  return 0;
 }



