  float power(float x, int y)
  {
  	if(y == 1)
		return x;
	else
		return x * power(x , y-1);
  }

  float xanterior, x, epsilon, a[100], b[100];
  int i, n, nromaximodeiteracoes, iteracoes;

  void derivada (float a[],float b[],int n){
  	int i;
  	for (i=1;i<=n;i++){
		b[i]=i*a[i+1];
  	}
  }

  float valor_polinomio(float a[],float x,int n){
  	float valor;
  	int i;  
  	valor=a[1];

 	for (i=2;i<=n+1;i++){
		valor+= a[i] * (power(x,(i-1)));
	}
	return valor;
  }
