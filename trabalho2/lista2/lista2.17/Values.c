#include <stdio.h>
#include "util.h"

int main(int argc, const char *argv[])
{

	int num,cont,maior,menor;

	puts("Informe um numero:");
	scanf("%d", &num);

	maior = num;
	menor = num;

	for(cont = 1; cont<=49;cont++)
	{
		puts("Informe um numero:");
		scanf("%d",&num);

		maior = greater_value(maior,num);
		menor = smaller_value(menor,num);

	}

	printf("O maior valor é %d e o menor valor é %d",maior,menor);

	return 0;
}
