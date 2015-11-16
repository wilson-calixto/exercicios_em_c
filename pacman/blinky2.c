#include <stdlib.h>

int * blinky(int pac[3])
{
	int *t = (int *) malloc(sizeof(int)*2);
	t[0] = pac[0];
	t[1] = pac[1];
	
	return t;
}
