/*
Objetivo: Ler um número inteiro e imprimir todos os números pares de 1 até esse número.
*/

#include <stdio.h>

int main()
{
    int num, i = 1;
    
    scanf("%i", &num);
    
    while (i <= num){
        if (num % i == 0){
            printf("%i ", i);
        }
        i++;
    }
    
    return 0;
}
