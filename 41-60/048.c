/*
Objetivo: Leia uma matriz 3x3, imprima-a matriz e retorne a localização (linha e a coluna) do menor valor.
*/

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int imenor;
    int jmenor;
    
    printf("Digite os valores da matriz: ");
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j && i == 0){
                imenor = i;
                jmenor = j;
            }
            printf("%d ", matriz[i][j]);
            
            if(matriz[i][j] < matriz[imenor][jmenor]){
                imenor = i;
                jmenor = j;
            }
        }
        printf("\n");
    }
    
    printf("Localizacao do menor valor: i = %d e j = %d", imenor, jmenor);
    
    return 0;
}