/*
Objetivo: Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/

#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    
    for(int i = 1; i <= 10; i++){
        scanf("%d", &numero);
        
        if(numero < 0){
            i--;
        }
        else{
            soma += numero;
        }
    }
    
    printf("media: %lf", (double) soma / 10);

    return 0;
}