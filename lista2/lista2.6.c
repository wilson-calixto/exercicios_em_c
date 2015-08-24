/* Programação de computadores
   trabalho2
   questão 2.06

   equipe:
	Evandro Fernandes
	Wilson Neto
	John Lucas
	Jessica Kelly
	Fernando Antonio
	Jailson Pereira
	Juliany Raiol
	Raí Santos*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n1, n2, n3;

	printf("Insira o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Insira o segundo numero: \n");
	scanf("%d", &n2);
	printf("Insira o terceiro numero: \n");
	scanf("%d", &n3);

	if(n1 > n2 && n1 > n3)
	{
		printf("O maior numero é: %d \n", n1);
	}
	else
	{
		if(n2 > n1 && n2 > n3)
		{
			printf("O maior numero é: %d \n", n2);
		}else
		{
		printf("O maior numero é: %d \n", n3);
		}
	}
	return 0;
}
