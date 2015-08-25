// =====================================================================================
//
//       Filename:  q14.c
//
//    Description:  
//
//        Version:  1.0
//        Created:  25-08-2015 12:30:55
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Benjamin Borges (bsb), borges.bnjamin@gmail.com
//   Organization:  
//
// =====================================================================================


#include	<stdio.h>

int main ( int argc, char *argv[] )
{
	int i, num, cpar = 0, cimp = 0;
	for (i = 0; i <= 9; i++) {
		printf("Digite o %d numero\n", i+1);
		scanf("%d", &num);
		if (num % 2 == 0){
			cpar++; 
		}else{
			cimp++;
		}
	}
	printf("Quantidade de numeros pares: %d\n", cpar);	
	printf("Quantidade de numeros impares: %d\n", cimp);	
	return 0;
}				// ----------  end of function main  ----------

