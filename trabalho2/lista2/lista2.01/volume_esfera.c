
/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Trabalho 2
Lista 2
Questao 1

Equipe: Andressa Moreira
	Elizabeth Castro
	Juliany Raiol
	Luana Andrade
	Wilson Neto
*/

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


float volume (float raio)
{ 
	float V;
	float r;
	r = power(raio,3);
	V = (4*3.14*r)/3;
	return V;
}

