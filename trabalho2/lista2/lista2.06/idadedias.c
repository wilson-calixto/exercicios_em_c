/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
*
* Trabalho 2
* Lista 2
* Questao 6
* Equipe:
*	Andressa Moreira
*	Elizabeth Castro
*	Juliany Raiol
*	Luana Andrade
*	Wilson Neto
*/

//Definindo a funcao que calcula a idade do formato "aa/mm/dd" para "dias"
int idadedias(int anos, int meses, int dias)
{

	int m, m1, d, d1; //Declarando variaveis
	
	m = anos*12; //m recebe a multiplicacao dos anos por 12 para transformar o valor para meses
	m1 = m + meses; //m1 recebe a propria variavel com os valores de meses e adiciona ao valor do segundo parametro
	d = m1*30; //Considerando todos os meses com 30 dias; multiplica m1 por 30 para receber o valor dos dias
	d1 = d+dias; //d1 recebe o valor dos dias e adiciona aos valor do terceiro parametro

	return d1;
}
	
	
