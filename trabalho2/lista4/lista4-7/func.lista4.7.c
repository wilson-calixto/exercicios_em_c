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

float f1 (int x, int y)
{
      float res;
      if (y != 0)
      {
         res = (float) x / y;
      }
      else
      {
         res = (float) 1 / x;
      }
      while (x > y)
      {
         res = res + (float) y / x;
         x = x - 1;
      }
      return res;
}



