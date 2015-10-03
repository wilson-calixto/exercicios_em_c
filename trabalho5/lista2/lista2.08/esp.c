#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void back(char v1[100])
{
    int tam, i, cont=0;
    tam=strlen(v1);
    char a =' ';

    for (i=0; i < tam ;i++)
    {
        if(v1[i] != a)
        {
            printf("%c",v1[i]);
        }
        if(v1[i] == a)
        {
            cont=cont+1;
        }
        if(cont==1)
        {
            printf("%c",a);
        }
        if(v1[i] ==a && v1[i+1] != a)
        {
            cont=0;
        }
    }
}
