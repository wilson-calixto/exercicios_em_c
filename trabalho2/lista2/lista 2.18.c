#include <stdio.h>


void table(int n);


int main (){
	int numero;
	printf("Digite o numero\n");
	scanf("%d",&numero);
	table(numero);



  return 0;
}


void table(int n);
{

  int i;
  for (i = 1; i <= n; i++){
    printf("\t%d x %d = %d\n", i, n, i*n);

  }

}
