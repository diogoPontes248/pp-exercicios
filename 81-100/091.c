/*
Objetivo: Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Digite os valores para as duas variaveis inteiras: ");
    scanf("%d %d", &a, &b);
    
    if(&a > &b){
        printf("O endereço de A, %p, é maior: %d\n", &a, a);
    }
    else{
        printf("O endereço de B, %p, é maior: %d\n", &b, b);
    }
    
    printf("endereço de a: %p\n", &a);
    printf("endereço de b: %p", &b);
    
    return 0;
}