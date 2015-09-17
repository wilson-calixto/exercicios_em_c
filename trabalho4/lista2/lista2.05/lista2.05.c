#include <stdio.h>
int main(int argc, const char *argv[])
{
	int x, y, n;
	printf("informe a coordenada x: ");
	scanf("%d", &x);
	printf("informe a coordenada y: ");
	scanf("%d", &y);
	printf("informe um valor para n :");
	scanf("%d", &n);
	if (n < 100 && n > 1)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("O numero informado para n deve ser 1 < n < 100\n");
	}
	return 0;
}

