int conta_div(x){
    int i,cont=0;
    for (i=1;i<=x;i++){
        if (x%i==0)
        cont++;   
   }
    return cont;
}
