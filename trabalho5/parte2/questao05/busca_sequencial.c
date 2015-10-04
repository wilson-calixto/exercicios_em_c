#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca_sequencial () 
{
   int n = 0, m = 0, x = 0;
   char *v[100][100];
   scanf("%d", &n);
   scanf("%d", &x);
   fgets(*v,100,stdin);
   while (m < n && *v[m] < x) 
   {
        ++m;
   }
   if (m < n && v[m] == x)
   {
        return m;
   }
   else 
   {
      return 1;
   }   
}


int main()
{
    busca_sequencial();
    return 0;
}










