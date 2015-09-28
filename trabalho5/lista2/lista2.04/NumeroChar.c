#include <stdio.h>
#include <string.h>

int verifica(char ch, char vch[]) //verifica se o char 'ch' esta no vetor de chars
{
    int i, ver = 1; // i - contador, ver inicia como verdadeiro

    for(i = 0; i < strlen(vch); i++)
    {
        if(ch == vch[i]) 
            ver = !ver; //se o char 'ch' já estiver no vetor de chars 'ver' recebe falso
    }

    return ver;
}

void geraCh(char copia[], char ch[]) //funçao para gerar vetor de chars
{
    int i, j; // i - contador1, j - contador2

    for(i = 0; i < strlen(copia); i++)
    {
        for(j = 0; j < strlen(copia); j++)
        {
            if(verifica(copia[i] ,ch) && (copia[i] != '\0')) 
                ch[i] = copia[i];
        }
    }
}

void printS(char s[]) //funçao para mostrar uma string
{
    int i; // i - contador

    for(i = 0; i < strlen(s) - 1; i++)
    {   
        printf("%c ", s[i]);
    }
}

void Lista(char s[], char ch[], char copia[])
{
    int i, j, conta; // i - contador1 , j - contador2, conta - contador de ocorrencias

    for(i = 0; i < strlen(s) - 1; i++)
    {
        conta = 0; // contador inicia como 0

        for(j = 0; j < strlen(s) - 1; j++)
        {
            if(ch[i] == copia[j])
                conta++; // se o char 'ch[i]' for igual a copia na posiçao 'j' , 'conta' é incrementado em 1
        }
        if(conta != 0)
            printf("%c\t%d\n",ch[i], conta); //mostra o char 'ch[i]' e o numero de ocorrencias na string 
    }
}
