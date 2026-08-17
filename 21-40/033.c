/*
Objetivo: Faça um programa que receba dois números A e B e calcule a soma dos números pares desse
intervalo de números, incluindo os números digitados.
*/

#include <stdio.h>

int main()
{
    int A, B;
    int soma = 0;
    
    scanf("%d %d", &A, &B);
    
    if(A > B){
        int inter = A;
        A = B;
        B = inter;
    }
    
    for(int i = A; i <= B; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }
    
    printf("Soma dos pares: %d", soma);

    return 0;
}