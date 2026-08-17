/*
Objetivo: Faça um algoritmo que leia um número positivo e imprima seus divisores.
*/

#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    printf("divisores: ");
    
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}