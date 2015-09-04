float media(float not1, float not2, float not3, char med)
{
    float mfinal;
    if(med == 'a' || med == 'A') // Se a variavel do tipo de media for A, de aritmetica, soma-se as notas e divide por 3
    {
        mfinal = (not1+not2+not3)/3;
    }
    if (med == 'p'||med == 'P') // Se a variavel do tipo de media for P, de ponderada, multiplica-se as notas pelo peso, e divide pela soma dos pesos
    {
        mfinal = ((not1*5)+(not2*3)+(not3*2))/(5+3+2); 
    }
    if(med == 'h' || med == 'H') // Se a varial do tipo de media for H, de harmonica, divide o 3, pela soma da fracao inversa das notas
    {
        mfinal = 3/((1/not1)+(1/not2)+(1/not3));
    }
    return (mfinal); // Retorna o resultado da media final
}

