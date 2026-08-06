/*
Objetivo: Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    printf("Antecessor: %d\nSucessor: %d", numero - 1, numero + 1);

    return 0;
}
