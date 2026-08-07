/*
Objetivo: Faça um programa para ler as dimensões de um terreno (comprimento C e largura L), bem como o
preço do metro do arame, P. Calcule e imprima o custo para cercar o terreno com uma cerca de 5 fios.
*/
#include <stdio.h>

int main()
{
    double comprimento, largura, preco;
    double custoTotal;
    
    scanf("%lf %lf %lf", &comprimento, &largura, &preco);
    
    custoTotal = 5 * (2 * comprimento + 2 * largura) * preco;
    
    printf("Custo total: %lf\n", custoTotal);
    
    return 0;
}
