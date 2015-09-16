#include <stdio.h>
#include "util.h"
int main(int argc, const char *argv[])

{
	int pont, numeros[5], i;
	for (i=0;i<5;i++)
	{
		scanf("%d", &numeros[i]);
	}
		
	select_sort(numeros);
	for (i=0;i<5; i++)
	{
		printf("%d ", numeros[i]);
	}
	printf("\n");
	return 0;
}
