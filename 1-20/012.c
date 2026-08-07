/*
Objetivo: Leia o valor de um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G * π/180, sendo G o ângulo em graus, R o valor em radianos e π = 3.14.
*/
#include <stdio.h>
#define PI 3.14

int main()
{
    double graus, radianos;
    
    scanf("%lf", &graus);
    
    radianos = graus * PI / 180;
    
    printf("radianos: %lf\n", radianos);
    
    return 0;
}
