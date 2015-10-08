#include <stdio.h>

int contador = 0;

int expo(int k, int n)
{
    if (n == 0)
    {
        contador++;
        return 1;
    }
    else if (n == 1)
    {
        return k;
    }
    else
    {
        contador++;
        return (k*expo(k,n-1));
    }
}

int main()
{
    int k, n;
    printf("Informe numeros positivos nao nulos (Z*).\n");
    scanf("%d %d", &k,&n);    
    printf("%d\n", expo(k,n));
    printf("%d\n", contador);
   
    return 0;
}
