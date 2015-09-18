#include <stdio.h>
#include <stdlib.h> 

int process(char resp[],char gabarito[])
{
	int pontos;
	int i;
	for (i= 0; i < 10; ++i)
	{
		if (resp[i] == gabarito[i])
	        pontos = pontos + 1;
	}
	return pontos;
}
