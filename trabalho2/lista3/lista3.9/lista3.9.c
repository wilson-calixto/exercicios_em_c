#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado()
{
    return (1 + rand()%6);
}


int main(int argc, const char* argv[])
{
    int i,j,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0;

    for(i=0;i<1000000;i++)
    {
        switch( dado() )
        {
            case 1:
                um++;
                break;
            case 2:
                dois++;
                break;
            case 3:
                tres++;
                break;
            case 4:
                quatro++;
                break;
            case 5:
                cinco++;
                break;
            case 6:
                seis++;
        }

    }
    
    printf("%d numeros 1 numa probabilidade de %.2f %% \n",um,((um/1000000.0)*100));
    printf("%d numeros 2 numa probabilidade de %.2f %% \n",dois,((dois/1000000.0)*100));
    printf("%d numeros 3 numa probabilidade de %.2f %% \n",tres,((tres/1000000.0)*100));
    printf("%d numeros 4 numa probabilidade de %.2f %% \n",quatro,((quatro/1000000.0)*100));
    printf("%d numeros 5 numa probabilidade de %.2f %% \n",cinco,((cinco/1000000.0)*100));
    printf("%d numeros 6 numa probabilidade de %.2f %% \n",seis,((seis/1000000.0)*100));

    return 0;
}

