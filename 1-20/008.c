/*
Objetivo: Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de
dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são
descontados 7.5% para imposto de renda.
*/

#include <stdio.h>
#define DIARIA 30.0

int main()
{
    int dias;
    double quantiaLiquida;
    
    scanf("%d", &dias);
    
    quantiaLiquida = dias*DIARIA*(1 - 0.075);
    
    printf("%lf", quantiaLiquida);

    return 0;
}
