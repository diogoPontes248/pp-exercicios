/*
Objetivo: Escreva uma função que receba 2 parâmetros reais, a e b, e retorne (a*(b+3))/(a-b).
*/

#include <stdio.h>

double funcao(double a, double b){
    return (a*(b+3))/(a-b);
}

int main()
{
    double a, b;
    
    scanf("%lf %lf", &a, &b);
    
    printf("%lf", funcao(a, b));

    return 0;
}
