#include <stdio.h>
#include <stdlib.h>

void change (int *p, int *q)
{
   int temp;
   temp = *p; *p = *q; *q = temp;
}

void troca (int i,int j,int matriz[m][n])
{
	int a;
	for ( i=0; i < 3; i++)
		for ( j=0; j<3; j++)
		{
			a=change(matriz[ i ][ j ]);
		}
	printf("%d",a);
}


/*
int main(int argc, const char *argv[])
{
	int i;
	int j;
	int *p;
	int *q;

	p = &i;
	q = &j;

	printf("i= %d\n", i);
	printf("j= %d\n", j);


	printf("trocando i por j...\n");

	trocar(p,q);

	printf("i= %d\n", i);
	printf("j= %d\n", j);


	return 0;
}
*/
