float valor_pagamento(float x, float y){
    if (y==0)
        return x;
    else
        return x+(x*0.03)+x*(0.01*y);
}
