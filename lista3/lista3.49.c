#include <stdio.h>

int main (int argc, const char *argv[])
{
	int n;
	float soma,i;

	soma=0;

	printf("informe um valor: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		soma=soma+(1/i);
	}
	
	printf("O valor da soma dos termos é: \t %.2f \n", soma);

	return 0;
}
