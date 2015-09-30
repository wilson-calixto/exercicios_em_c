#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cont_str()
{
	char stri[100], c = ' ';
	int cont = 0, maior = 0, i, a;
	printf("digite sua string com ate 100 caracteres: ");
	scanf("%s", stri);
	stri[strlen(stri) + 1] = 'c';

	for (i = 0; i < (strlen(stri) + 1); i++)
	{
		if (stri[i] == c)
		{
			cont++;
			printf("%d", cont);
		}	
		else
		{
			if (cont > maior)
			{
				maior = cont;
				cont = 0;
			}
		}
	}
	printf("%d\n", maior);
}
