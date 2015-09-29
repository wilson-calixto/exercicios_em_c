#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void back(char v1[])
{
    int tam;
    tam=strlen(v1);
    char v2[50];
    int i;
    char a =' ';

    for (i=0; i < tam ;i++)
    {
	if (v1[i] && v1[i]+1 != a)
	{
		v2[i]=v1[i];
    	}
    	else
    	{
    	    v2[i]=a;
    	}
    }

printf("%s\n", v2);
}
