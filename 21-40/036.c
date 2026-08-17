/*
Objetivo: Crie um programa que leia 5 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem
inversa.
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i = 4; i >= 0; i--){
        printf("%d ", numeros[i]);
    }

    return 0;
}