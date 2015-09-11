/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.11.c
 *
 * Equipe:
 *
 */

	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

/* ordena tres numeros de forma crescente */
int tri_sort(int numero1,int numero2,int numero3)
{
   int maior,menor,mediano;

  /* verifica quem e o maior numero */
     if(numero1>=numero2 && numero1>=numero3)
     {
        maior=numero1;
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
        
     }
    else
     {
            maior=numero3;      
     }

     







    return 0;
}				/* ----------  end of function main  ---------- */
