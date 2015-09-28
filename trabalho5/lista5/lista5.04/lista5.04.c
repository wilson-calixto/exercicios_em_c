#include <stdio.h>
#include "binario.h"
#define TAM 10000000

int main()
{
	char n[TAM];
	int new;
	printf("Digite um numero binario: ");
	scanf("%s",n);
	new = binary(n);
	printf("O número %s em decimal eh: %d\n",new);
	return 0;
}
