/*
Objetivo: Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>

int main()
{
    int numero, soma;
    double media;
    
    soma = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        soma = soma + numero;
    }
    
    media = (double) soma / 10;
    
    printf("Media: %lf\n", media);

    return 0;
}