#include <stdio.h>
/*
a funcao "date" consiste em transformar uma data em formato DD/MM/AAAA (DD= dia
MM= mes e AAAA= ano) em uma data do tipo DD do mes MM(por escrito e nao o
numero) do ano AAAA. dessa forma os dois primeiros elementos do vetor (elementos
de indice 0 e 1 que sao correspondentes ao dia no formado DD) sao impresos na
tela. em seguida os elementos de indice 3 e 4 sao conparados para  os valores
dos meses do ano no calendario gregoriano, e de acordo com esses numeros um dos
desvios condicionais sera escolhido, se porem o mes em quetao nao existir, ele 
entrara na condicao "else" que ao inves de exibir o nome de um mes exibira a 
mensaguem "de um mes que nao existe" entre o dia(DD) e o ano(AAAA), o ano eh
basicamente a impresao dos ultimos ultimos 4 elementos( elementos 6, 7, 8 e 9).
ao final a funcao(ou procedimento ja que apenas imprime um resultado ao final)
ira imprimir um resultado

exemplos de resultado:
entrada: 22/10/1996
  saida: "22 de outubro de 1996"

entrada: 02/01/2004
  saida: "02 de janeiro de 2004"

observacao: o procedimento nao leva em conta se os dias existem por tanto ele
ira funcionar mesmo com dias inexistentes (ex: 33, 99 entre outros)
*/
void data(char str[9])
{	

	printf("dia  %c%c", str[0], str[1]);

	if ((str[3] == '0') && (str[4] == '1'))
	{
		printf(" de janeiro");
	}
	else if ((str[3] == '0') && (str[4] == '2'))
	{
		printf(" de fevereiro");
	}
	else if ((str[3] == '0') && (str[4] == '3'))
	{
		printf(" de marco");
	}
	else if ((str[3] == '0') && (str[4] == '4'))
	{
		printf(" de abril");
	}
	else if ((str[3] == '0') && (str[4] == '5'))
	{
		printf(" de maio");
	}
	else if ((str[3] == '0') && (str[4] == '6'))
	{
		printf(" de junho");
	}
	else if ((str[3] == '0') && (str[4] == '7'))
	{
		printf(" de julho");
	}
	else if ((str[3] == '0') && (str[4] == '8'))
	{
		printf(" de agosto");
	}
	else if ((str[3] == '0') && (str[4] == '9'))
	{
		printf(" de setembro");
	}
	else if ((str[3] == '1') && (str[4] == '0'))
	{
		printf(" de outubro");
	}
	else if ((str[3] == '1') && (str[4] == '1'))
	{
		printf(" de novembro");
	}
	else if ((str[3] == '1') && (str[4] == '2'))
	{
		printf(" de dezembro");
	}
	else
	{
		printf(" de um mes que nao existe");
	}	
	printf(" de %c%c%c%c\n", str[6], str[7], str[8], str[9]);

}
