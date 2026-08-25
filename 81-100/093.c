/*
Objetivo: Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de
cada posição desse array.
*/

#include <stdio.h>

int main()
{
    float elementos[10];
    
    for(int i = 0; i < 10; i++){
        printf("endereco do elemento %d: %p\n", i, &elementos[i]);
    }
    
    return 0;
}