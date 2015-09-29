#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[50];
    char string2[70];
    int i;

    sprintf(string1, "%d\n", -123); //converte número e armazena tudo em string1.
    puts(string1); //mostra na tela o conteúdo da string1;
    
    for(i = 0; i < 4; i++)
    {
        printf("%c\n", string1[i]);
    }

    //converte os números e armazena tudo em string2.    
    sprintf(string2, "Caractere: %c, Hex: %X, Dec: %d, Oct: %o \n", 65, 65, 65, 65);
    puts(string2); //mostra na tela o conteúdo da string2;
 
    printf("\nPressione uma tecla para finalizar...");
     
    return 0; 
}
 
