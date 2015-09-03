/*
* Programa de Computadores e Algoritmos
* Trabalho 1
* Questao 2.17
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

 int main (int argc, const char *argv[])
 {
	int ano;
	
	printf("Digite um ano:");
	scanf("%d",&ano);

	if(ano%4 == 0 && ano%100 != 0)
	{
		printf("O ano é bissexto.\n");

	}
	else if (ano == 2000)
	{
		printf("o ano é bissexto.\n");
	}
	else 
	{
		printf("O ano não é bissexto.\n");
	}

	return 0;
}









