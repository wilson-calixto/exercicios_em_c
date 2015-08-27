/* Programação de computadores
   trabalho1
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
	int n1, n2, n3, maior;

	printf("Insira o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Insira o segundo numero: \n");
	scanf("%d", &n2);
	printf("Insira o terceiro numero: \n");
	scanf("%d", &n3);

	maior = n1;
	if(n2 > maior)
	{
		maior = n2;
	}
	if(n3 > maior)
	{
		maior = n3;
	}
	printf("O maior numero é : %d \n", maior);
	return 0;
}
