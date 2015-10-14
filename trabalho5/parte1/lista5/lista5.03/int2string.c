#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *int2binary (int n) {
   int k,i;
   char *rascunho, *str;
   rascunho = malloc (8 * sizeof (int)); //Reserva memória
   for (k = 0; n > 0; n /= 2) { //Executa até n for maior que zero. o n vai decrementando a metade a cada rodada.
      if (n % 2 == 0){
	 rascunho[k] = '0';     
	}else{               //Armazena dígitos binários em rascunho na ordem inversa
		 rascunho[k] = '1';
		}
      k++;
   }
   if (k == 0){
	 rascunho[k++] = '0'; //se n é zero armazena 0
	}
   str = malloc (k+1); //str que irá retornar
   for (i = 0; i < k; i++){ //Depois inverte rascunho e insere no vetor str
      	str[i] = rascunho[k-i-1];
	}
   str[k] = '\0';
   free (rascunho);
   return str;
}
