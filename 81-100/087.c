/*
Objetivo: Reescreva o exercício 84 para trabalhar com vetores de qualquer tamanho.
*/

#include <stdio.h>

int somaVetor(int *vetor, int tamanho){
    int soma = 0;
    
    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    
    return soma;
}

void imprimirVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("soma do vetor: %d\n", somaVetor(vetor, 5));
    imprimirVetor(vetor, 5);

    return 0;
}
