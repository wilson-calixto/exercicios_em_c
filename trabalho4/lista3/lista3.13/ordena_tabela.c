void insertionSort(int ntimes, char ***tabela) 
{
   int i, j, eleito;
   for (i = 1; i < ntimes; i++)
   {
      eleito = numeros[i];
      j = i - 1;
      while ((j>=0) && (eleito < numeros[j])) {
         numeros[j+1] = numeros[j];
         j--;
      }
      numeros[j+1] = eleito;
   }
}
