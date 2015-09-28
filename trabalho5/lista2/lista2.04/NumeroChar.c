#include <stdio.h>
#include <string.h>

int verifica(char ch, char vch[])
{
    int i, ver = 1;

    for(i = 0; i < strlen(vch); i++)
    {
        if(ch == vch[i])
            ver = !ver;
    }

    return ver;
}

void geraCh(char copia[], char ch[])
{
    int i, j;

    for(i = 0; i < strlen(copia); i++)
    {
        for(j = 0; j < strlen(copia); j++)
        {
            if(verifica(copia[i] ,ch) && (copia[i] != '\0'))
                ch[i] = copia[i];
        }
    }
}

void printS(char s[])
{
    int i;

    for(i = 0; i < strlen(s) - 1; i++)
    {   
        printf("%c ", s[i]);
    }
}

void Lista(char s[], char ch[], char copia[])
{
    int i, j, conta;

    for(i = 0; i < strlen(s) - 1; i++)
    {
        conta = 0;

        for(j = 0; j < strlen(s) - 1; j++)
        {
            if(ch[i] == copia[j])
                conta++;
        }
        if(conta != 0)
            printf("%c\t%d\n",ch[i], conta);
    }
}


