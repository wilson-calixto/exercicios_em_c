int contadigitos (int n, int d){
    int resto = 0, cont = 0;
    while (n != 0){
      resto = n % 10;
      n = n/10;
      if (resto == d){
        cont++;
      }
      return cont;
}
}
