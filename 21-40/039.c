/*
Objetivo: Faça um programa que receba do usuário dois vetores, A e B, com 10 números reais cada. Crie um
novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.
*/

#include <stdio.h>

int main()
{
    double vetorA[10];
    double vetorB[10];
    double vetorC[10];
    
    printf("Digite os numeros do vetor A: ");
    
    for(int i = 0; i < 10; i++){
        scanf("%lf", &vetorA[i]);
    }
    
    printf("Digite os numeros do vetor B: ");
    
    for(int i = 0; i < 10; i++){
        scanf("%lf", &vetorB[i]);
    }
    for(int i = 0; i < 10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
    }
    
    printf("imprimindo os numeros do vetor C: ");
    
    for(int i = 0; i < 10; i++){
        printf("%lf ", vetorC[i]);
    }
    
    return 0;
}