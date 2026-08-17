/*
Objetivo: Ler dois vetores, x e y, de 5 números reais e calcule o produto escalar entre eles. O produto escalar é
dado por: x1 * y1 + x2 * y2 + ... + x5 * y5. No final, imprima o resultado.
*/

#include <stdio.h>

int main()
{
    double vetorX[5];
    double vetorY[5];
    double produtoEscalar = 0;
    
    printf("Digite os valores do vetor X: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%lf", &vetorX[i]);
    }
    
    printf("Digite os valores do vetor Y: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%lf", &vetorY[i]);
    }
    
    for(int i = 0; i < 5; i++){
        produtoEscalar += vetorX[i] * vetorY[i];
    }
    
    printf("Produto escalar: %lf", produtoEscalar);
    
    return 0;
}