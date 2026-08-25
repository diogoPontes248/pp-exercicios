/*
Objetivo: Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main()
{
    int elementos[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o elemento de posicao %d: ", i);
        scanf("%d", (elementos + i));
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        printf("elemento da posicao %d dobrado: %d\n", i, *(elementos + i) * 2);
    }
    
    return 0;
}