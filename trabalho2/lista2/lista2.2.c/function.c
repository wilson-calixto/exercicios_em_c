float media(float not1, float not2, float not3, char med)
{
    float mfinal;
    if(med == 'a' || med == 'A')
    {
        mfinal = (not1+not2+not3)/3;
    }
    if (med == 'p'||med == 'P')
    {
        mfinal = ((not1*5)+(not2*3)+(not3*2))/(5+3+2);
    }
    if(med == 'h' || med == 'H')
    {
        mfinal = 3/((1/not1)+(1/not2)+(1/not3));
    }
    return (mfinal);
}

