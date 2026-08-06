/*
Objetivo: Receba a altura do degrau de uma escada e a altura que se deseja subir. Calcule e imprima quantos
degraus são necessários para subir a escada toda.
*/

#include <stdio.h>

int main()
{
    double alturaDegral;
    double alturaDesejada;
    int degrausNecessarios;
    
    scanf("%lf", &alturaDegral);
    scanf("%lf", &alturaDesejada);
    
    degrausNecessarios = alturaDesejada/alturaDegral;
    
    printf("%d", degrausNecessarios);

    return 0;
}
