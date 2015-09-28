#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void strings(char *s, int i, int j)
{
    int m,k=0;
    for(m=i;m<j;m++)
    { 
        s[k]=s[m];
        k++;
    }
    s[k]='\0';
}

