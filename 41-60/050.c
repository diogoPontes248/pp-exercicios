/*
Objetivo: Leia duas matrizes, M1 e M2, de dimensões 3 x 3. Crie uma nova matriz M3, também de dimensão 3x3
e a preencha com os maiores elementos de M1 e M2 na posição correspondente.
*/

#include <stdio.h>

int main()
{
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    
    printf("Digite os valores da primeira matriz: ");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    
    printf("Digite os valores da segunda matriz: ");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(m1[i][j] > m2[i][j]){
                m3[i][j] = m1[i][j];
            }
            else{
                m3[i][j] = m2[i][j];
            }
        }
    }
    
    printf("Matriz m3: \n");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}