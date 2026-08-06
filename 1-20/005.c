/*
Objetivo: Escreva um programa C que leia os catetos de um triângulo retângulo e calcule sua hipotenusa.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double cateto1, cateto2;
    
    scanf("%lf %lf", &cateto1, &cateto2);
    
    printf("%lf", sqrt(cateto1*cateto1 + cateto2*cateto2));

    return 0;
}
