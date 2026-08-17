/*
Objetivo: Escreva um programa que leia 5 números inteiros e os armazene em um vetor. Imprima o vetor, o
maior elemento e a posição que ele se encontra.
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    int maior = 0;
    int idx = 0;
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 5; i++){
        if(i == 0){
            maior = numeros[i];
        }
        printf("%d ", numeros[i]);
        if(maior < numeros[i]){
            maior = numeros[i];
            idx = i;
        }
    }
    
    printf("\nmaior: %d", maior);
    printf("\nposicao: %d", idx + 1);

    return 0;
}