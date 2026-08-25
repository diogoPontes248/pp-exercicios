/*
Objetivo: Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de
entrada e os retorne ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na
variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores
forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
*/

#include <stdio.h>

int ordenar(int *a, int *b, int *c){
    if(*a == *b && *b == *c){
        return 1;
    }
    
    int temp;
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a > *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    return 0;
}

int main()
{
    int a, b, c;
    int teste;
    
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    teste = ordenar(&a, &b, &c);
    
    if(teste){
        printf("Os números são iguais\n");
        printf("A: %d\n", a);
        printf("B: %d\n", b);
        printf("C: %d\n", c);
    }
    else{
        printf("A: %d\n", a);
        printf("B: %d\n", b);
        printf("C: %d\n", c);
    }
    
    return 0;
}