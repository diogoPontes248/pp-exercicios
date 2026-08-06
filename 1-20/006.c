/*
Objetivo: Faça um programa que leia o valor de um produto e imprima esse valor com um desconto de 15%.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double valorProduto;
    
    scanf("%lf", &valorProduto);
    
    printf("%lf", valorProduto*(1 - 0.15));

    return 0;
}
