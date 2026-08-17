/*
Objetivo: Escreva um programa para ler 5 valores, e, em seguida, mostrar todos os valores lidos juntamente com
o maior, o menor e a média dos valores.
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    int maior = 0;
    int menor = 0;
    double media = 0;
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 5; i++){
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
        }
        printf("%d ", numeros[i]);
        media += numeros[i];
        
        if(maior < numeros[i]){
            maior = numeros[i];
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }
    
    media = media / 5;  //não é preciso calcular a média, como sabemos que são 5 números, basta imprimirmos numeros[2];
    
    printf("\nmaior: %d", maior);
    printf("\nmenor: %d", menor);
    printf("\nmedia: %lf", media);
    
    return 0;
}