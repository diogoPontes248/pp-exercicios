/*
Objetivo: Leia uma matriz 4x4, calcule e imprima a soma dos elementos da diagonal principal.
*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int soma = 0;
    
    printf("Digite os valores da matriz: ");
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }
    
    printf("Soma da diagonal principal: %d", soma);

    return 0;
}