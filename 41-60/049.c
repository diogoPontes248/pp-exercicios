/*
Objetivo: Leia uma matriz 4x4, conte e escreva quantos valores maiores que 5 ela possui.
*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int contador = 0;
    
    printf("Digite os valores da matriz: ");
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > 5){
                contador++;
            }
        }
    }
    
    printf("Quantidade de valores maiores que 5: %d", contador);
    
    return 0;
}