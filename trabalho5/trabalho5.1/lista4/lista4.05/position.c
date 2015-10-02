#include <stdio.h>
#include <string.h>

int position (char a[], char b[])
{
    int *aux, ind=-1, i=0, j=0; //auxiliar, indice, i - contador, j - indice do trecho
    
    while (i < strlen(a))
    {
        if((a[i]==b[j]) && (b[j] != '\0')) //!= '\0' por ser o char delimitador
        {
            ind = i; //indice recebe indice atual, caso os chars sejam iguais
            j++; //indice do trecho incrementa para verificar se é igual
        }
        i++;//contador é incrementado
    }
      
    return ind;
}
