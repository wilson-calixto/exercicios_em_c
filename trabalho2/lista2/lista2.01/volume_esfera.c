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

//Chamando a funcao power do utilDreka.h
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

//Definindo a funcao para calcular o volume de uma esfera e seus parametros
float volume (float raio)
{ 
	//Variavel principal
	float V;
	//Variavel auxiliar para guardar o valor do raio elevado a 3
	float r;
	//Chamndo a funcao power() e definindo seus parametros
	r = power(raio,3);
	//Calculo do volume de uma esfera
	V = (4*3.14*r)/3;
	return V;
}

