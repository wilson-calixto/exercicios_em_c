#include<stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int *v;
	int
	int i;

	v = malloc( 10 * sizeof(int) ); // int v[10]

	for (i = 0; i<10; i++)
	{
		scanf("%d",&v[i]);	// scanf("%d",v+i);
	}

	for (i = 0; i<10; i++)
	{
		printf("%d ", *(v+i) );	//printf("%d ", v[i] );
	}

	printf("\n");
	
	free(v);

	return 0;
}
