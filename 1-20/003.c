/*
Objetivo: Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/

#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    printf("%d", numero*3 + 1 + numero*2 - 1);  //exatamente igual a 5 * numero;

    return 0;
}
