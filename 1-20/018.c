/*
Objetivo: Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
*/


#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("Par");
    }
    else{
        printf("Impar");
    }

    return 0;
}
