int check_values(int h1, int h2, int m1, int m2)
{
    if(h1<0||h2<0||h1>23||h2>23||m1<0||m2<0||m2>59||m1>59)
    {  
        return 0;
    }
    else
    {
        return 1;
    }
}
int dif_min(int m1, int m2)
{
    int difm=0;
    difm=60-m1+m2;
    if(difm>=60)
    {
        difm+=-60;
    }
    return difm;
}




int dif_hour(int h1, int h2, int m1, int m2)
{
    int difh=0;
    if(60-m1+m2<60)
    {
	difh=-1;
    }
    if(h1>h2)
    {
        difh+=24-h1+h2;
    }
    else if(h1==h2) 
    {
	difh+=24;
    }	
    else
    {
       difh+=h2-h1;
    }
    return difh; 
}
