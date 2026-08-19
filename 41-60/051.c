/*
Objetivo: Construa um programa que calcule o determinante de uma matriz 3 x 3.
*/

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int determinante;
    int principal;
    int secundario;
    
    printf("Digite os valores da matriz: ");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    principal = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    
    secundario = (matriz[0][2] * matriz[1][1] * matriz[2][0]) +
                 (matriz[0][0] * matriz[1][2] * matriz[2][1]) +
                 (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    
    determinante = principal - secundario;
    
    printf("Determinante: %d", determinante);
    
    return 0;
}