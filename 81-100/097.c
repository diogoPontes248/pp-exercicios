/*
Objetivo: Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    p = (int *) malloc(tamanho * sizeof(int));
    
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("\n");
    
    for(int i = 0; i < tamanho; i++){
        printf("elemento %d: %d\n", i + 1, p[i]);
    }
    
    return 0;
}


