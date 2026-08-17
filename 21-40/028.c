/*
Objetivo: Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <stdio.h>

int main()
{
    int soma = 0;
    int parada = 0;
    int i = 0;
    
    while(parada <= 50){
        if(i % 2 == 0){
            soma += i;
            parada++;
        }
        i++;
    }
    
    printf("%d", soma);

    return 0;
}