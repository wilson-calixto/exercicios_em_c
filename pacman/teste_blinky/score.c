#include <math.h>
float score(int changes[3], int y_target,int x_target )
{
	float resultado = sqrt( pow(changes[1]-x_target,2) + pow(changes[0] - y_target,2));
          
	return resultado; 
}

