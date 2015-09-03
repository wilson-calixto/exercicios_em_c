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
   float media, num, soma;
   int i;
   soma = 0;
   printf("Digite 5 numeros: \n");
   for(i=0;i<5;i++)
   {
       scanf("%f",&num);
       soma=soma+num;
       media=soma/5;
   }
 
   printf("A soma eh: %.2f\n",soma);
   printf("A media eh: %.2f\n",media);
   return 0;
 }




