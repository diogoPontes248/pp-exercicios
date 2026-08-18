/*
Objetivo: Leia um vetor de tamanho definido pelo usuário. Conte e imprima quantos valores pares ele possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tamanho;
    int contador = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *) malloc(tamanho * sizeof(int));

    if(vetor == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    
    printf("Digite os valores do vetor: ");

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0) {
            contador++;
        }
    }

    printf("\nO vetor possui %d valores pares.\n", contador);

    free(vetor);

    return 0;
}