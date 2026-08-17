/*
Objetivo: Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    
    for(int i = 1; i <= 10; i++){
        scanf("%d", &numero);
        
        soma += numero;
    }
    
    printf("soma: %d", soma);

    return 0;
}