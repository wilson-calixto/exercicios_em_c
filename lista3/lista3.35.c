/*
* Programa de Computadores e Algoritmos
* Trabalho 1
* Questao 3.33
*
* Equipe:
* Delrik
* Elisabeth
* Hermamm
* Luis
* Luana
* Richardson
*
*/

 #include <stdio.h>
 
 int main (const argc, char *argv[])
 {
 	int i , j , num , cont=0;
	
	printf("Digite um número inteiro:");
	scanf("%d", &num);

	for (i=0;i<=num;i++)
	{
		cont=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
		        { 
				cont++;
			}
		}
		if (cont==2)
		{	
			printf("Números primos:%d\n",i);
		}
	}
        return 0;
}











