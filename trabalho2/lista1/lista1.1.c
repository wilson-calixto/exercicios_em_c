/*
*
*
*/


#include<stdio.h>

int imprimirNumeros(){
   int qtdeNumeros, i, j;
   printf("Numero: ");
   scanf("%i",&qtdeNumeros);

  
  for(i = 1; i <= qtdeNumeros; i++){
      for(j = 1; j <= i; j++){
        printf("%i ",i);
     }
     printf("\n");
   }
}





int main(){
   imprimirNumeros(); 
   return 0;
}
