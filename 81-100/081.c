/*
Objetivo: Escreva uma função que receba o raio de um círculo como parâmetro de entrada e calcule, como
parâmetros de saída, a área, o perímetro e o diâmetro do círculo.
*/

#include <stdio.h>
#define PI 3.14

void circulo(double raio, double *area, double *perimetro, double *diametro){
    *area = PI * raio * raio;
    *perimetro = 2 * PI * raio;
    *diametro = 2 * raio;
}

int main()
{
    double raio, area, perimetro, diametro;
    
    scanf("%lf", &raio);
    
    circulo(raio, &area, &perimetro, &diametro);
    
    printf("Area: %lf\n", area);
    printf("Perimetro: %lf\n", perimetro);
    printf("Diametro: %lf\n", diametro);

    return 0;
}
