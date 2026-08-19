/*
Objetivo: Leia uma matriz 2x2. Multiplique cada elemento pelo índice da sua linha e pelo índice da sua coluna.
Imprima a matriz resultante.
*/

#include <stdio.h>

int main()
{
    int matriz[2][2];
    
    printf("Digite os valores da matriz: ");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matriz[i][j] *= i * j;
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}