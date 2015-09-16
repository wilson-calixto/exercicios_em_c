#include <stdio.h>
#include <stdlib.h>

int comb(int a, int b) {
	//s2 return complexos
	//C(a,b)
	//fat(a) / (fat(b) * fat(a-b))
	return (fatorial(a) / (fatorial(b) * fatorial(a-b)));
}
