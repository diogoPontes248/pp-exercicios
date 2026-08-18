/*
Objetivo: Crie um vetor com 5 números de ponto flutuante, ordene os elementos deste vetor em ordem
crescente e, no final, imprima o vetor ordenado.
*/

#include <stdio.h>

int main(){
    
    double v[5];
    double temp;
    
    printf("Digite os valores do vetor: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%lf", &v[i]);
    }
    
    for(int i = 0; i < 5; i++){
        temp = v[i];
        for(int j = i; j < 5; j++){
            if(v[i] > v[j]){
                v[i] = v[j];
                v[j] = temp;
                temp = v[i];
            }
        }
    }
    
    printf("imprimindo o vetor: ");
    
    for(int i = 0; i < 5; i++){
        printf("%lf ", v[i]);
    }

    return 0;
}