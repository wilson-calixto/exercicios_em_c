/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
*
*Trabalho 2
*Lista 2
*Questao 1
*
*Equipe:
*	Andressa Moreira
*	Elizabeth Castro
*	Juliany Raiol
*	Luana Andrade
*	Wilson Neto
*/

//Definir uma funcao que encontre o volume de uma esfera

//Chamando a funcao power do util.c
float power(float x,float y)
{
	int i;
	float k=1;
	for(i=1;i<=y;i++)
	{
		k=k*x;
	}
	return k;
}

//Definindo funcao para encontrar o volume da esfera
float volume (float raio)
{ 
//Variavel principal
	float V;
//Variavel auxiliar para guardar o valor da potenciacao
	float r;
	r = power(raio,3);
//Resolucao da formula do volume de uma esfera
	V = (4*3.14*r)/3;
	return V;
}

