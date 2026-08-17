/*
Objetivo: Declare um vetor de 100 posições. Aos elementos de índice par, atribua o valor 0. Aos elementos de
índice ímpar, atribua o valor 1. Imprima o vetor resultante.
*/

#include <stdio.h>

int main()
{
    int vetor[100];
    
    for(int i = 0; i < 100; i++){
        if(i % 2 == 0){
            vetor[i] = 0;
        }
        else{
            vetor[i] = 1;
        }
    }
    
    for(int i = 0; i < 100; i++){
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}