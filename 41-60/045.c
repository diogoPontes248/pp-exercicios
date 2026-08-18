/*
Objetivo: Leia uma matriz 5x5. Multiplique cada elemento por 2. Imprima a soma dos elementos da matriz
resultante.
*/

#include <stdio.h>

int main(){
    
    int m[5][5];
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            m[i][j] *= 2;
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            soma += m[i][j];
        }
    }
    
    printf("%d", soma);

    return 0;
}