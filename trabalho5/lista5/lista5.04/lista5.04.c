#include <stdio.h>
#include <string.h>
#include "binary.h"
#define TAM 100000

int main()
{
	char n[TAM];
	int new;
	printf("Digite um numero binario: ");
	scanf("%s",n);
	new = binary(n);
	printf("O número %s em decimal eh: %d\n",n,new);
	return 0;
}
