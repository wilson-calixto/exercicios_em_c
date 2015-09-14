/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.11.c
 *
 * Equipe:
 *      Paulo Marinho
 *      Evandro Fernandes
 *      Jackson Gomes
 *      Jessica Kely
 *
 */

	

#include <stdio.h>

/* ordena tres numeros de forma crescente */
int tri_sort(int numero1,int numero2,int numero3)
{
   int maior,menor,mediano;

  /* verifica quem e o maior numero */
     if(numero1>=numero2 && numero1>=numero3)
     {
        maior=numero1;

	/* verifica se o numero2 e maior que o numero3 */
            if(numero2>=numero3)
            {
                mediano=numero2;
                menor=numero3;
            }
            else
            {
             mediano=numero3;
             menor=numero2;
             
            }
            

     } 
     else if(numero2>=numero1 && numero2>=numero3 )
     {
            maior=numero2;
	    
	/* verifica se o numero1 e maior que o numero3 */
	    if(numero1>=numero3)
            {
                mediano=numero1;
                menor=numero3;
            }
            else
            {
             mediano=numero3;
             menor=numero1;
             
            }
                    
     }
    else
     {
            maior=numero3; 
	/* verifica se o numero2 e maior que o numero1 */

            if(numero2>=numero1)
            {
                mediano=numero2;
                menor=numero1;
            }
            else
            {
             mediano=numero1;
             menor=numero2;
             
            }
            


     
     }

     	printf("menor: %d",menor);
	printf("mediano: %d",mediano);
	printf("maior: %d",menor);
	return 0;
}
