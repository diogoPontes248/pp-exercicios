/*
Objetivo: Escreva um programa que faça a leitura de vários números inteiros, até que se digite um número
negativo. O programa tem que retornar o maior e o menor número lido.
*/

#include <stdio.h>

int main()
{
    int numero, maior, menor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if(numero >= 0){
        maior = numero;
        menor = numero;
    }else{
        maior = 0;
        menor = 0;
    }
    
    while(numero >= 0){
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        
        if(numero < 0){
            break;
        }
        else if(numero > maior){
            maior = numero;
        }
        else if(numero < menor){
            menor = numero;
        }
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}