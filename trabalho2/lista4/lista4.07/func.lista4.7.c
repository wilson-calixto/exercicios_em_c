/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * func.lista4.7.c
 *
 * Equipe:
 *
 *          Jackson Kelvin
 *          Sergio Alexandre
 *          Grabriel Faraco
 *          Manoel Florencio
 *          Rai Santos
 *          Delrick Oliveira 
 */

float f1 (int x, int y)     // a função recebe dois valores inteiros
{                          
      float res;   //float res sendo declarado
      if (y != 0)   // se o y for diferente de zero execute:
      {             
         res = (float) x / y; // res recebe a divisão de x por y em float (observe o cast entre parentes "(float)")
      }
      else
      {
         res = (float) 1 / x; // senão res recebe 1 sobre x em float 
      }
      while (x > y) // enquanto x for maior que y
      {
         res = res + (float) y / x; // res acumula ele mesmo mais adivisão de y por x em float
         x = x - 1; // x é decrementado em 1
      }
      return res; // retorna o res 
}



