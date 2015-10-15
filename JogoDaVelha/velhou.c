#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Funcao que verifica se uma o jogo acabou*/

// Programador: wilson calisto

int velhou(char *vet) //recebe o vetor de jogadas e retorna: 1 pra velhou e 0 para falso
{
   int len;
   len=strlen(vet);
   if(len=9)
   {
        return 1;
   }else{
   
        return 0;
    }
   
}

