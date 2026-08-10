/*
Objetivo: Escreva um programa que leia um número inteiro positivo e imprima os 5 primeiros múltiplos de 3
desse número.
*/

#include <stdio.h>

int main()
{
    unsigned int numero;
    
    scanf("%d", &numero);
    
    for(int i = 1; i <= 5; i++){
        printf("%d\n", numero * 3 * i);
    }

    return 0;
}