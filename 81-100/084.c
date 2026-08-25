/*
Objetivo: Escreva um programa C que crie um vetor de 5 inteiros, uma função que calcule a soma de seus
elementos e outra função que imprima o vetor.
*/

#include <stdio.h>

int somaVetor(int *vetor){
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
        soma += vetor[i];
    }
    
    return soma;
}

void imprimirVetor(int *vetor){
    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("soma do vetor: %d\n", somaVetor(vetor));
    imprimirVetor(vetor);

    return 0;
}
