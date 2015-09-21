#include <stdio.h>
int main()
{
   int vet[] = {4,9,1,2}; // declara o vetor com os numeros
   int i,*ptr; // cria um ponteiro que aponta para o valor do vetor
   ptr = vet; // o ponteiro recebe o valor de vetor
   for(i=0;i < 4;i++)
   {
     printf("%d",*ptr++); // imprime o valor do vetor a cada interacao
   } // no fim do programa transforma cada valor do vetor em um so valor
}

