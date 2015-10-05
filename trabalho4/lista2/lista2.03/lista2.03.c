/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.03
 *
 * Equipe:
 *
 *          Jackson Gomes
 *          Paulo Marinho
 *          Hermann
 *          Elizabeth
 *          Jailson
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    int  n, l, i;
    int p[6]; 
    
    printf("informe quantas jogadas: \n");
    scanf("%d", &n);

    printf("informe os valores de cada lancamento: \n");

    for (i=0;i<6;i++){ 
	p[i]=0;	
	}

    for (i=0; i<n; i++)
    {
        scanf("%d", &l);
		if (l==1){ 
			p[0]++;
		}	
		if (l==2){ 
			p[1]++;
		}
		if (l==3){ 
			p[2]++;	
		}
		if (l==4){ 
			p[3]++;	
		}
		if (l==5){ 
			p[4]++;	
		}
		if (l==6){ 
			p[5]++;	
		}

	}
	for (i=0;i<6;i++){ 
		printf("%d ",p[i]);
	
	}
    
    return 0;
}

