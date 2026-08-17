/*
Objetivo: Ler um número inteiro N e imprimir um quadrado de lado N formado por X.
*/

#include <stdio.h>

int main()
{
    int lado;
    
    scanf("%i", &lado);
    
    for (int i = 1; i <= lado; i++){
        for (int j = 1; j <= lado; j++){
            printf("X ");
        }
        printf("\n");
    }
    
    return 0;
}
