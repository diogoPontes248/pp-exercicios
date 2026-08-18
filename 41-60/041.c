/*
Objetivo: Escreva um programa que calcule o desvio padrão de um vetor v contendo n = 10 números reais.
Sendo m a media do vetor.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double v[10];
    int n = 10;
    double m = 0;
    double desvio = 0;
    
    printf("Digite os valores do vetor V: ");
    
    for(int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    
    for(int i = 0; i < n; i++){
        m += v[i];
    }
    
    m = m / n;
    
    for(int i = 0; i < n; i++){
        desvio += (v[i] - m) * (v[i] - m);
    }
    
    desvio = sqrt(((1.0/(n - 1.0)))*desvio);
    
    printf("Desvio: %lf", desvio);

    return 0;
}