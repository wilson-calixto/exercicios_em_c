
/* Programacao de Computadores e ALgoritmos
 * function.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Jailson
 *          Ewerton Petillo
 *          
*/
int position_char(char s[], char c,int tam)
{
    int i, pos=-1;
    for (i=0; i<tam; i++)
    {
       if(s[i] ==  c)
       {
           pos = i;
           break;
       }
    }
    return pos;
}
 
int position(char s1[], char c, int tam, int pos) 
{
    int i, position=0, cont = 0;
    for (i=pos; i<tam; i++)
    {
        if(s1[i]==c)
        {
            position = cont;
        }else
            cont++;
    }
    return position;
}
